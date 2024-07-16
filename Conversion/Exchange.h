#pragma once
#ifndef EXCHANGE_H
#define EXCHANGE_H

enum exType { BUY, SELL };

class Exchange {
private:
    double exchangeRate;
public:
    Exchange();
    double exchange(double amount, exType ex);
    double setRate(double rate);
    void showRates();
    int showMenu();
};

#endif
