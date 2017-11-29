#include<iostream>
#include<cstdlib>

void ex2()
{
	int x;
	std::cout << "輸入攻擊力 :";
	std::cin >> x;
	std::cout << "對怪物的傷害值為 :" << x * 2 - 15 << std:: endl;
	//system("pause");
	//return (0);
}