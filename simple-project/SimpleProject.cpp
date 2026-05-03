#include <iostream>
#include <string>
#include <windows.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string userName;
	std::cout << "Введите имя: ";
	std::cin >> userName;
	std::cout << "Здравствуйте, " << userName << "!" << std::endl;



	return 0;
}