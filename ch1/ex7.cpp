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
		cout << "輸入學號"; cin >> ix;
		if (!cin.fail()) { cin.sync(); break; }
		cin.clear(); cin.sync();
	} while (1);
	cout << "輸入姓名:"; cin >> cName;
	cout << "輸入生日(yymmdd):"; 
	cin.getline(cBirthday, 7);

	cout << "輸入住址:"; 
	cin.getline(cAddr, 10);
	cout << "學號 :" << ix << "姓名 :" << cName << endl;
	cout << "生日 :" << cBirthday << "住址 :" << cAddr << endl;

}