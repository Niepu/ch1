#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
void work()
{
	int i, j,a;
	for (i = 0; i < 7; i++)
	{
		for (j = 7-i; j > 0; j--)
		{
			cout << (" ");
		}
		for (a = 0; a < (1 + (i * 2)); a++)
		{
			cout << ("*");
		}
		cout << endl;
		cout << endl;
	}

	int i1, j1, a1;
	for (i1 = 0; i1 < 7; i1++)
	{
		for (j1 = 7 - i1; j1 > 0; j1--)
		{
			cout << (" ");
		}

		for (a1 = 0; a1 < 1 - i1; a1++)
		{
			cout << ("*");
		}

		for (a1 = 0; a1 < 1 + i1 - 1; a1++)
		{
			cout << ("*");
		}
			cout << (" ");
		for (a1 = 8; a1 < 9 + i1 - 1; a1++)
		{
			cout << ("*");
		}
		cout << endl;
		cout << endl;

	}

	int i2, j2, a2;
	int i3, j3, a3;
	for (i2 = 0; i2 < 4; i2++)
	{
		for (j2 = 7 - i2; j2 > 0; j2--)
		{
			cout << (" ");
		}
		for (a2 = 0; a2 < (1 + (i2 * 2)); a2++)
		{
			cout << ("*");
		}
		cout << endl;
		cout << endl;
	}

	for (i3 = 0; i3 < 3; i3++)
	{
		for (j3 = 0; j3 < 5+i3; j3++)
		{
			cout << (" ");
		}
		for (a3 = 10; a3 > (5 + (i3 * 2)); a3--)
		{
			cout << ("*");
		}
		cout << endl;
		cout << endl;
	}
	cout << endl;
	cout << endl;


	int i4, j4, a4;
	int i5, j5, a5;

	cout << ("       *");
	cout << endl;
	cout << endl;
	for (i4 = 0; i4 < 3; i4++)
	{
		for (j4 = 6 - i4; j4 > 0; j4--)
		{
			cout << (" ");
		}
		cout << ("*");
		for (a4 = 0; a4 < (1 + (i4*2) ); a4++)
		{
			cout << (" ");
		}
		cout << ("*");

		cout << endl;
		cout << endl;
	}

	for (i5 = 0; i5 < 2; i5++)
	{
		for (j5 = 0; j5 < 5 + i5; j5++)
		{
			cout << (" ");
		}
		cout << ("*");
		for (a5 = 8; a5 >(5 + (i5 * 2)); a5--)
		{
			cout << (" ");
		}
			cout << ("*");
		cout << endl;
		cout << endl;
	}
	cout << ("       *");
	cout << endl;
	cout << endl;
}