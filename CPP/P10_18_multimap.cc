#include <iostream>
#include <string>
#include <map>

using namespace std;

typedef multimap<string, string> MMSS;

void searchKids(MMSS &mmss, const string &lastName)
{
    typedef MMSS::iterator iter;
    iter beg = mmss.lower_bound(lastName), end = mmss.upper_bound(lastName);

    if (beg == end){
            cout << "The family of " << lastName << " is not found." << endl;
        }
    else{

        cout << "Information is found.\n";
        cout << "The family of " << lastName << " has kids with names:\n";
        cout << endl;
        for ( ; beg != end; beg++){
            cout << beg->second << " ";
        }
    }

}

int main()
{
    int i;

    string familyName[] = {"Lu", "Wang", "Zhao", "Sun", "Zhou", "Fei"};

    string GivenNameLu[] = {"Jerry", "Sam", "Amy"};
    string GivenNameWang[] = {"Beth", "Mary", "Kerry", "Jack"};
    string GivenNameSun[] = {"Candy", "Kate", "Tom"};
    string GivenNameZhao[] = {"Juli", "Alice", "Raymond", "Reid", "Sandy"};
    string GivenNameZhou[] = {"Frank"};
    string GivenNameFei[] = {"Lily", "Bob", "Jasmin"};

    MMSS family;

    for(i = 0; i < 3; i++){
        family.insert(make_pair(familyName[0], GivenNameLu[i]));
    }
    for(i = 0; i < 4; i++){
        family.insert(make_pair(familyName[1], GivenNameWang[i]));
    }
    for(i = 0; i < 3; i++){
        family.insert(make_pair(familyName[3], GivenNameSun[i]));
    }
    for(i = 0; i < 5; i++){
        family.insert(make_pair(familyName[2], GivenNameZhao[i]));
    }
    for(i = 0; i < 1; i++){
        family.insert(make_pair(familyName[4], GivenNameZhou[i]));
    }
    for(i = 0; i < 3; i++){
            family.insert(make_pair(familyName[5], GivenNameFei[i]));
    }

    searchKids(family, "Lu");
    cout << endl << endl;
    searchKids(family, "Lee");
    cout << endl << endl;
    searchKids(family, "Zhao");

    return 0;
}
