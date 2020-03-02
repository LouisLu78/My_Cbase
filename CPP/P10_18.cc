#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

typedef vector<string> VST;

void searchKids(map<string, VST> &msv, const string &lastName)
{
    map<string, VST>::iterator iter = msv.find(lastName);

    if (iter == msv.end()){
        cout << "The family of " << lastName << " is not found." << endl;
    }
    else
    {
        cout << "Information is found.\n";
        cout << "The family of " << iter->first << " has kids with names:\n";
        for(VST::iterator it = (iter->second).begin(); it != (iter->second).end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
}

int main()
{
    string familyName[] = {"Lu", "Wang", "Zhao", "Sun", "Zhou", "Fei"};

    string GivenNameLu[] = {"Jerry", "Sam", "Amy"};
    string GivenNameWang[] = {"Beth", "Mary", "Kerry", "Jack"};
    string GivenNameSun[] = {"Candy", "Kate", "Tom"};
    string GivenNameZhao[] = {"Juli", "Alice", "Raymond", "Reid", "Sandy"};
    string GivenNameZhou[] = {"Frank"};
    string GivenNameFei[] = {"Lily", "Bob", "Jasmin"};

    VST vstLu(GivenNameLu, GivenNameLu + 3);
    VST vstWang(GivenNameWang, GivenNameWang + 4);
    VST vstZhao(GivenNameZhao, GivenNameZhao + 5);
    VST vstSun(GivenNameSun, GivenNameSun +3);
    VST vstZhou(GivenNameZhou, GivenNameZhou + 1);
    VST vstFei(GivenNameFei, GivenNameFei + 3);

    map<string, VST> family;
    family.insert(make_pair(familyName[0], vstLu));
    family.insert(make_pair(familyName[1], vstWang));
    family.insert(make_pair(familyName[2], vstZhao));
    family.insert(make_pair(familyName[3], vstSun));
    family.insert(make_pair(familyName[4], vstZhou));
    family.insert(make_pair(familyName[5], vstFei));

    searchKids(family, "Lu");
    cout << endl << endl;
    searchKids(family, "Lee");

    return 0;
}
