#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
void ex7()
{
	int ix;
	char cName[20];
	char cAddr[20];
	char cBirthday[20];
	do {
		cout << "��J�Ǹ�"; cin >> ix;
		if (!cin.fail()) { cin.sync(); break; }
		cin.clear(); cin.sync();
	} while (1);
	cout << "��J�m�W:"; cin >> cName;
	cout << "��J�ͤ�(yymmdd):"; 
	cin.getline(cBirthday, 7);

	cout << "��J��}:"; 
	cin.getline(cAddr, 10);
	cout << "�Ǹ� :" << ix << "�m�W :" << cName << endl;
	cout << "�ͤ� :" << cBirthday << "��} :" << cAddr << endl;

}