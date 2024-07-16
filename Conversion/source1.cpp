
#include <iostream>
#include <iomanip>
#include "Exchange.h"

using namespace std;

int main() {
    Exchange exchange;
    int choice;

    do {
        choice = exchange.showMenu();

        switch (choice) {
        case 1: {
            double amount;
            cout << "Enter the amount to exchange in Pesos: ";
            cin >> amount;
            double result = exchange.exchange(amount, BUY);
            cout << "You will get: " << fixed << setprecision(2) << result << " in USD." << endl;
            break;
        }
        case 2: {
            double amount;
            cout << "Enter the amount to exchange in Dollars: ";
            cin >> amount;
            double result = exchange.exchange(amount, SELL);
            cout << "You will get: " << fixed << setprecision(2) << result << " in MXN." << endl;
            break;
        }
        case 3: {
            double newRate;
            cout << "The current rate is: " << exchange.setRate(13.3) << endl;
            cout << "Enter the new exchange rate (Pesos per Dollar): ";
            cin >> newRate;
            exchange.setRate(newRate);
            break;
        }
        case 4:
            exchange.showRates();
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please select a valid option." << endl;
            break;
        }
    } while (choice != 5);

    return 0;
}
