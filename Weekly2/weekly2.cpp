// Weekly 2, Anders P. Åsbø
#include <iostream>
#include <string>
#include <vector>

void menu();
void task1();
void task2();
void task3();
void task4();
void task5();
void task6();

int main() {
	// calls menu function to allow user selection of tasks.
	menu();
	return 0;
}

void menu()
{
	// function creating menu for user selection of tasks.

	// vector containing possible selections:
	std::vector<std::string> menu_items = {
		"a: Task 1", "b: Task 2" , "c: Task 3" , "d: Task 4" ,
		"e: Task 5" , "f: Task 6" 
	};
	char selection{};  // input variable.

	while (true) {
		// printing menu options:
		std::cout << "------------------------------" << std::endl;
		std::cout << "Available tasks:" << std::endl;
		for (size_t i = 0; i < menu_items.size(); i++)
		{
			std::cout << " " << menu_items[i] << std::endl;
		}

		// taking user input:
		std::cout << "Type letter corresponding to the chosen task, or 'q' to quit: ";
		std::cin >> selection;
		system("cls"); // clearing screen.

		// jumping to user selection and calling corresponding task function:
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
			exit(0);  // could also just use a bare return.
		default:
			std::cout << std::endl << "Invalid input. Try again." << std::endl << std::endl;
			break;
		}
	}
}

void task1()
{
	// function printing numbers from 1 to 100 using both for-loop and while-loop.

	std::cout << "Printing 1 to 100 using for-loop:" << std::endl;
	for (int i = 1; i <= 100; i++)
	{
		std::cout << " " << i;
	}
	std::cout << std::endl;

	std::cout << "Printing 1 to 100 using while-loop:" << std::endl;
	int j{ 1 };
	while (j <= 100)
	{
		std::cout << " " << j++;
	}
	std::cout << std::endl;

}

void task2()
{
	// function printing numbers from 100 to 1 using decrementing for-loop.

	std::cout << "Printing numbers from 100 down to 1:" << std::endl;
	for (int i = 100; i >= 1; i--)
	{
		std::cout << " " << i;
	}
	std::cout << std::endl;
}

void task3()
{
	// function printing numbers from 5 to 50 in multiples of 5 using while-loop.

	std::cout << "Printing numbers from 5 to 50 in steps of 5 using while-loop:" << std::endl;
	int i{ 5 };
	while (i <= 50)
	{
		std::cout << " " << i;
		i += 5;
	}
	std::cout << std::endl;
}

void task4()
{
	// function printing numbers from 5 to 50 in multiples of 5 using for-loop.

	std::cout << "Printing numbers from 5 to 50 in steps of 5 using for-loop:" << std::endl;
	for (int i = 5; i <= 50; i+=5)
	{
		std::cout << " " << i;
	}
	std::cout << std::endl;
}

void task5()
{
	// function printing numbers from 5 to 50 in multiples of 5 using do-while-loop.

	std::cout << "Printing numbers from 5 to 50 in steps of 5 using do-while:" << std::endl;
	int i{ 5 };
	do 
	{
		std::cout << " " << i;
		i += 5;
	} while (i <= 50);
	std::cout << std::endl;
}

void task6()
{
	// function asking student for desired grade and printing a corresponding message.

	// vector cotaining replies:
	std::vector<std::string> replies = {
		"Outstanding!", "Very good!", "Good!", "Some flaws.", "Not very good...", "Fail.",
		"That is not a grade!"
	};
	char grade{};  // user input variable.

	// taking user input:
	std::cout << "Which grade do you want in programming?" << std::endl;
	std::cout << "Select from A to F: ";
	std::cin >> grade;
	std::cout << std::endl;

	// jumping to user selection and printing corresponding message:
	switch (toupper(grade))
	{
	case 'A':
		std::cout << replies[0] << std::endl;
		break;
	case 'B':
		std::cout << replies[1] << std::endl;
		break;
	case 'C':
		std::cout << replies[2] << std::endl;
		break;
	case 'D':
		std::cout << replies[3] << std::endl;
		break;
	case 'E':
		std::cout << replies[4] << std::endl;
		break;
	case 'F':
		std::cout << replies[5] << std::endl;
		break;
	default:
		std::cout << replies[6] << std::endl;
		break;
	}
}