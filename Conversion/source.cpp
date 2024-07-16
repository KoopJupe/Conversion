
#include <iostream>
#include <iomanip>
#include "Exchange.h"

using namespace std;

Exchange::Exchange() {
    exchangeRate = 13.3;
}

double Exchange::exchange(double amount, exType ex) {
    if (ex == BUY)
        return amount / exchangeRate * 1.07;
    else if (ex == SELL)
        return amount * exchangeRate * 0.93;
    return 0; // Invalid exchange type
}

double Exchange::setRate(double rate) {
    exchangeRate = rate;
    return exchangeRate;
}

void Exchange::showRates() {
    cout << "CURRENCY EXCHANGE MEXICAN PESOS<>USD" << endl;
    cout << "------------------------------------" << endl;
    cout << "Buying Pesos Selling Pesos" << endl;
    cout << "$1 = " << fixed << setprecision(4) << exchangeRate * 0.93
        << " MXN " << exchangeRate * 1.07 << " MXN" << endl;
}

int Exchange::showMenu() {
    int choice;
    cout << "Select the option" << endl;
    cout << "1. Pesos to Dollars" << endl;
    cout << "2. Dollars to Pesos" << endl;
    cout << "3. Change Exchange Rate" << endl;
    cout << "4. Show Exchange Rates" << endl;
    cout << "5. Exit" << endl;
    cout << ">> ";
    cin >> choice;
    return choice;
}
