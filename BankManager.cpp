#include <iostream>
#include <iomanip>

void ShowBalance(double Balance);
double Withdraw(double Balance);
double Deposit();

int main()
{
    double Balance = 0;
    int choice = 0;

    do
    {
        std::cout << "*********************\n";
        std::cout << "Enter your choice \n";
        std::cout << "**********************\n";
        std::cout << "1. Show Balance \n";
        std::cout << "2. Amount to be Withdrawn \n";
        std::cout << "3. Amount to be deposited \n";
        std::cout << "4. Exit \n";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            ShowBalance(Balance);
            break;
        case 2:
            Balance -= Withdraw(Balance);
            ShowBalance(Balance);
            break;
        case 3:
            Balance += Deposit();
            ShowBalance(Balance);
            break;
        case 4:
            std::cout << "Thanks for coming ";
            break;
        default:
            std::cout << "Please Enter a valid response ";
        }
    } while (choice != 4);

    return 0;
}

void ShowBalance(double Balance)
{
    std::cout << "Your current balance is " << Balance << '\n'
              << std::setprecision(2) << std::fixed;
}
double Withdraw(double Balance)
{
    double amount = 0;
    std::cout << "Enter an amount to be withdrawn: Rs ";
    std::cin >> amount;

    if (amount > Balance)
    {
        std::cout << "Insufficient funds. ";
    }
    else if (amount < 0)
    {
        std::cout << "Enter valid amount. ";
    }
    else
    {
        return amount;
    }

    return 0;
}
double Deposit()
{
    double amount = 0;

    std::cout << "Enter an amount to be deposited: Rs ";
    std::cin >> amount;

    if (amount > 0)
    {
        return amount;
    }
    else
    {
        std::cout << "The amount you have entered is invalid ";
    }
    return 0;
}