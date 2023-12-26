#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include <string>

#include <cmath>

class banking
{
private:
	double balance = 123;

	void ShowBalance(double balance)
	{
		printf("%s %.2lf %s", "Your balance is: $", balance, "\n");
	}

	double deposit()
	{
		double amount = 0;

		printf("%s", "Enter amount to deposit:");
		scanf_s("%lf", &amount);

		if (amount > 0)
		{
			return amount;
		}
		else
		{
			printf("%s", "Invalid amount");

			return 0;
		}

	}

	double withdraw(double balance)
	{
		double amount;

		printf("%s", "Input amount to be withdrawn: ");
		scanf_s("%lf", &amount);

		if (amount > balance)
		{
			printf("%s", "Insufficent funds\n");

			return 0;
		}
		if (amount < 0)
		{
			printf("%s", "Invalid amount\n");

			return 0;
		}
		else
		{
			return amount;
		}
	}

public:

	void banking_program()
	{

		int choice = 0;

		do
		{

			printf("%s", "-------------------- BAKING PROGRAM --------------------\n\n");
			printf("%s", "--------------------------------------------------------\n");
			printf("%s", "Enter your choice:\n");
			printf("%s", "--------------------------------------------------------\n");

			printf("%s", "1. Show balance\n");
			printf("%s", "2. Deposit Money\n");
			printf("%s", "3. Withdraw money\n");
			printf("%s", "4. Exit\n");
			std::cin >> choice;

			std::cin.clear();
			fflush(stdin);

			switch (choice)
			{
			case 1:
				ShowBalance(balance);
				break;

			case 2:
				balance += deposit();
				printf("\n");
				ShowBalance(balance);
				break;

			case 3:
				balance -= withdraw(balance);
				printf("\n");
				ShowBalance(balance);
				break;

			case 4:
				printf("%s", "Thanks for visiting");
				break;

			default:
				printf("%s", "Invalid option");
			}
		} while (choice != 4);
	}
};

int main(int argc, const char **argv[])
{
	/*printf("%s", "\n");

	random_event();
	printf("%s", "\n");

	guess_game();
	printf("%s", "\n");

	func_caller();
	printf("%s", "\n");

	overload("Pepperoni");
	printf("%s", "\n");*/

	banking bank; // Invoke "banking" class and set name to "bank", initialize each element with "bank."
	bank.banking_program(); // Call "banking_program()" from "banking" class

	printf("%s", "\n");



	return 0;
}
