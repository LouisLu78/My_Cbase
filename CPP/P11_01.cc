# include <iostream>
# include <cstdlib>
# include <ctime>
# include <vector>
# include <algorithm>

using namespace std;

int getNumber(void)
{
   return 1 + rand() % 100;
}

main()
{
	const int range = 100;
	int counts, frequency = 0;
	vector<int> ivec;
	srand(time(NULL));

	for (int i = 0; i< range; i++){
		ivec.push_back(getNumber());
	}

	for (int i = 0; i< range; i++){
        counts = count(ivec.begin(), ivec.end(), i + 1);
        if (counts){
            cout << i + 1 << " appears for " << counts << " times." << endl;
            frequency++;
        }

	}
	cout << "\nIn total, " << frequency << " integers appeared." << endl;

	return 0;
 }
