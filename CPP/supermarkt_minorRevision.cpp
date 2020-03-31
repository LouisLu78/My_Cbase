#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std; //This is question 12.15 in book "C How To Program Sixth Edition" by P. Deitel & H. Deitel.

int duration(void)
{
    return 1 + rand() % 4;
}

void printArray(vector<int>& ivec)
{
    for (size_t i = 0; i < ivec.size(); i++){
        if (ivec[i]){
            cout << setw(15) << i << setw(15) << ivec[i] << endl;
        }
    }
    cout << endl;
}

int main()
{
    srand(time(NULL));

    const int workTime = 720;

    int k, i = 1;
    int t, N, T;
    t = duration();
    T = t;
    vector<int> arrival(workTime);

    while (t < workTime){
        arrival[t] = i;
        t += duration();
        i++;
    }

    vector<int> leave(workTime);
    i = 1;

    vector<int>waitTime, waitPeople;

    while (T < workTime){

        leave[T] = i;
        for (size_t j = 0; j <= T; j++){
            if (arrival[T - j] > 0){
                k = arrival[T - j];
                break;
            }
        }

        waitPeople.push_back(k - i);

        T += duration();
        i++;

        for (size_t j = 0; j < arrival.size(); j++){
            if (arrival[j] == i){
                N = j;
                break;
            }
        }
        T = (T >= N) ? T : N;

        waitTime.push_back(T - N);

    }

    cout << "arrival time:" << endl;
    cout << setw(15) << "time:" << setw(15) << "customer No."<< endl;
    printArray(arrival);

    cout << "leaving time:" << endl;
    cout << setw(15) << "time:" << setw(15) << "customer No."<< endl;
    printArray(leave);

    int maxTime = *max_element(waitTime.begin(), waitTime.end());
    cout << "The customer who awaited most waited for " << maxTime << " minutes." << endl;

    int maxPeople = *max_element(waitPeople.begin(), waitPeople.end());
    cout << "The longest line has " << maxPeople << " customers." << endl;

    return 0;
}
