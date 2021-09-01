#include <iostream>
#include <string>
#include <vector>

void menu(std::vector<std::string>);
void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void clear_cin();

int main() {
	std::vector<std::string> menu_items = {
		"a. Task 1", "b. Task 2" , "c. Task 3" , "d. Task 4" ,
		"e. Task 5" , "f. Task 6" 
	};

	menu(menu_items);
	return 0;
}

void menu(std::vector<std::string> menu_items)
{
	char selection{};

	while (true) {
		std::cout << "------------------------------" << std::endl;
		std::cout << "Available tasks:" << std::endl;
		for (size_t i = 0; i < menu_items.size(); i++)
		{
			std::cout << " " << menu_items[i] << std::endl;
		}
		std::cout << "Type letter corresponding to the chosen task or 'q' to quit: ";
		std::cin >> selection;
		system("cls");

		switch (tolower(selection))
		{
		case 'a':
			task1();
			break;
		case 'b':
			task2();
			break;
		case 'c':
			task3();
			break;
		case 'd':
			task4();
			break;
		case 'e':
			task5();
			break;
		case 'f':
			task6();
			break;
		case 'q':
			return;
		default:
			std::cout << std::endl << "Invalid input. Try again." << std::endl << std::endl;
			break;
		}
	}
}

void task1()
{
	std::cout << "Printing 1 to 100 using for-loop:" << std::endl;
	for (size_t i = 1; i <= 100; i++)
	{
		std::cout << " " << i;
	}
	std::cout << std::endl;

	std::cout << "Printing 1 to 100 using while-loop:" << std::endl;
	int j{1};
	while (j<=100)
	{
		std::cout << " " << j++;
	}
	std::cout << std::endl;

}

void task2()
{
}

void task3()
{
}

void task4()
{
}

void task5()
{
}

void task6()
{
}

void clear_cin() {
	std::cin.clear();
	std::cin.ignore();
}