#include <iostream>
#include <string>
#include <vector>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OverNightPackage.h"

using namespace std;

int main()
{
	Package packageOfLouis("Andy Compel", "Louis Lu", "Hefei,Anhui", "230031", 10, 12.6);
	TwoDayPackage tdPackage("Xiao Liu", "Ming Li", "Pudong, Shanghai", "200300", 5, 12.6, 0.8);
	OverNightPackage ovPackage("Sam Zhang", "Wu Wang", "Beijing, China", "100020", 7, 12.6, 0.12);

	vector <Package*> packages(3);
	packages[0] = &packageOfLouis;
	packages[1] = &tdPackage;
	packages[2] = &ovPackage;

	for (size_t i = 0; i < packages.size(); i++) {
		//packages[i]->calculateCost();
		packages[i]->print();
		cout << "\n\n" << endl;
	}

	return 0;
}