#include <iostream>
#include "ClassLogic.h"
using namespace std;

void menu()
{
	Kalkulator kal;
	int choise_operation = 1;
	int num1 = NULL;
	int num2 = NULL;
	cout << "Enter choise operation:\n";
	cout << "\t1 - Add.\n\t2 - Subtraction.\n\t3 - Multiplication.\n\t4 - Division.\n";
	cin >> choise_operation;

	cout << "Enter first num: \n";
	cin >> num1;
	kal.SetF_name(num1);

	cout << "Enter second num.\n\n";
	cin >> num2;
	kal.SetS_name(num2);

	switch (choise_operation)
	{
	case 1:
		cout << "Result: " << kal.GetF_name() + kal.GetS_name() << endl;
		break;

	case 2:
		cout << "Result: " << kal.GetF_name() - kal.GetS_name() << endl;
		break;

	case 3:
		cout << "Result: " << kal.GetF_name() * kal.GetS_name() << endl;
		break;

	case 4:
		cout << "Result: " << kal.GetF_name() / kal.GetS_name() << endl;
		break;

	default:
		cout << "Error number!\n";
		break;
	}

}



int main()
{
	Kalkulator first_test;
	menu();

}
