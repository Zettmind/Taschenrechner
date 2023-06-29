#include <iostream>

using namespace std;

double getInputNumber(double number)
{
	cout << "Gib die " << number << ". Zahl an: ";
	double input = 0;
	cin >> input;
	cout << endl;
	return input;
}

void menu();

void printResult(double result)
{
	cout << "Result is: " << result << "\n\n\n";
	menu();
}

void addition() 
{
	double number1 = getInputNumber(1);
	double number2 = getInputNumber(2);
	double result = number1 + number2;
	printResult(result);
}

void subtract() 
{
	double number1 = getInputNumber(1);
	double number2 = getInputNumber(2);
	double result = number1 - number2;
	printResult(result);
}

void multiply() 
{
	double number1 = getInputNumber(1);
	double number2 = getInputNumber(2);
	double result = number1 * number2;
	printResult(result);
}

void devide() 
{
	double number1 = getInputNumber(1);
	double number2 = getInputNumber(2);
	double result = number1 / number2;
	printResult(result);
}

void menu()
{
	cout << "Wähle deinen Modus:\n(1): Addieren\n(2): Subtrahieren\n(3): Dividieren\n(4): Multiplizieren\n(q): Beenden\n\nInput: ";
	char input = ' ';
	cin >> input;
	cout << "\n\n\n";

	switch (input)
	{
		case('1'):
			addition();
			break;

		case('2'):
			subtract();
			break;
			
		case('3'):
			devide();
			break;
		
		case('4'):
			multiply();
			break;
		
		case('q'):
			return;
			break;
		
		default:
			cout << "Input not vallid, please try again\n\n\n";
			menu();
			break;
	}
}

int main()
{
	menu();

	//system|"PAUSE"|;
	return 0;
}