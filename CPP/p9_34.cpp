#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string st = "You cannot look back to the long period of our private friendship, and political harmony with more affecting recollections than I do.";
    string::iterator iter = st.begin();
    for (; iter < st.end(); iter++){
        if (isalpha(*iter)){
            *iter = toupper(*iter);
        }
    }

    cout << st;
}
