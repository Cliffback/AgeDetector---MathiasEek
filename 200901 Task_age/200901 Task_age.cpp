
#include <iostream>
#include <string>
#include <conio.h>

int age;

int main()
{
	system("cls");
	std::cout << "What is your age?\n";
	std::cin >> age;
	if (age <= 20)
	{
		std::cout << "You are an adult\n";
	}
	else
	{
		std::cout << "\nYou are certainly a teenager!\n";
	}
	char something = _getch();
	return 0;
}
 
