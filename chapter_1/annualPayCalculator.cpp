#include <limits>
#include <iostream>

int main()
{
    
 double payAmount,
        payPeriods,
        pay;
    
    char userName[20];

    

        // user enters name 
        std::cout << "Hit Enter to submit commands\n";
        std::cout << "Please Enter employee name: ";
        std::cin >> userName;

        for (;;) {

            // Get the hourly pay rate
            std::cout << "How many money units are you payed per pay period? ";
            std::cin >> payAmount;

            //sanitise user input
            if (std::cin.fail()) {
                std::cerr << "Sorry, I cannot read that. Please enter a number and again." << std::endl;
                std::cin.clear();
                std::cin.ignore();
                continue;
        }
            break;
            }

        for (;;) {

        // Get the number of pay periods
        std::cout << "How many pay periods do you work in 1 year? ";
        std::cin >> payPeriods;

        //sanitise user input
        if (!std::cin) {
            std::cerr << "Sorry, I cannot read that. Please enter a number and try again." << std::endl;
            std::cin.clear();
            std::cin.ignore();
            continue;
        }
        break;
      }

        //Cacl annual pay 
        pay = payAmount * payPeriods;

        //Display result 
        std::cout << userName << " You have earned $" << pay << " annualy" << std::endl;
        std::cout << "employeeName: " << userName << std::endl;
        std::cout << "payAmount: " << payAmount << std::endl;
        std::cout << "payPeriods: " << payPeriods << std::endl;
      
   //return 0;
}