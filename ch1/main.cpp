#include<iostream>
#include<cstdlib>

extern 
void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6();
void ex7();
void ex8();
void work();


using namespace std;

int main(void)
{
	int input;
	bool flag=1;
	do {
		system("cls");
		cout << "1.第一個 C++程式 ,使用命名空間   std範例" << endl;
		cout << "2.第二個 C++程式 ,不使用命名空間 std範例" << endl;
		cout << "3.bool 型別與C++的關鍵字 範例" << endl;
		cout << "4.cout 格式化:輸出寬度(Output Width)" << endl;
		cout << "5.cout 格式化:對齊方式(Alignment)" << endl;
		cout << "6.cout 格式化:精確度(Precision)" << endl;
		cout << "7." << endl;
		cout << "8." << endl;
		cout << "9." << endl;
		cout << "----------------------------------------" << endl;
		cout << "請輸入要執行的範例(或'0'結束程式執行!)?  :";
		cin >> input;

		while (getchar() != '\n');

		switch (input) 
		{
		case 0:
			flag = 0;
			break;
		case 1:
			ex1();
			break;
		case 2:
			ex2();
			break;
		case 3:
			ex3();
			break;
		case 4:
			ex4();
			break;
		case 5:
			ex5();
			break;
		case 6:
			ex6();
			break;
		case 7:
			ex7();
			break;
		case 8:
			work();
			break;
		default:
			break;
		}
		system("pause");
		system("cls");

	} while(flag);
}