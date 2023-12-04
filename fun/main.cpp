#include "./assets/hdr/include.h"

void random_event()
{
	srand(time(0));

	uint32_t randNum = rand() % 5 + 1;

	switch (randNum)
	{
		case 1:
			printf("%s", "You get a sticker\n");
			break;

		case 2:
			printf("%s", "You get a T-Shirt\n");
			break;

		case 3:
			printf("%s", "You get a Free Lunch\n");
			break;

		case 4:
			printf("%s", "You get a giftcard\n");
			break;

		case 5:
			printf("%s", "You get a concert ticket\n");
			break;

		default:
			printf("%s", "Something Broke\n");
			break;
	}
}

void guess_game()
{
	int num;
	int guess;
	int tries{};

	srand(time(NULL));
	num = (rand() % 100) + 1;

	printf("%s", "-------------------- NUMBER GUESSING GAME --------------------\n");

	do
	{
		printf("%s", "Enter your guess between 1 - 100: ");
		std::cin >> guess;
		tries++;

		if (guess > num)
		{
			printf("%s", "Guess is too high\n");
		}
		else if (guess < num)
		{
			printf("%s", "Guess is too low\n");
		}
		else
		{
			goto end;
		}
	} while (guess != num);

end:
	printf("%s %d %s", "You guessed the correct number, It took you: ", tries, "tries\n");
	printf("%s", "-------------------- NUMBER GUESSING GAME --------------------\n");

}

void user_func(std::string name, uint32_t age)
{
	std::cout << "Happy birthday to: " << name << " Age: " << age;
}

void func_caller()
{
	std::string name = "You";
	uint32_t age = 32;

	user_func(name, age);
}

void overload()
{
	std::cout << "Here is your pizza!\n";
}
void overload(std::string topping1)
{
	std::cout << "Here is your " << topping1 << " Pizza!\n";
}

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
