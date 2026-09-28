// Copyright (c) 2026 Alex OBrien All rights reserved
// .
// Created by: Alex OBrien
// Date: Sept 28, 2026
// This program asks the user for the diameter of the
// pizza. It then calculates and displays the total cost
// of the pizza with tax
#include <iomanip>
#include <iostream>
using namespace std;

// Constants
const double LABOUR_COST = 2.00;
const double RENTAL_COST = 2.25;
const double INGREDIENT_COST = 1.50;
const double HST = 0.13;

int main() {
    // Input
    int diameter;
    cout << "Enter the diameter of the pizza (inches): ";
    cin >> diameter;

    // Process
    double subtotal = LABOUR_COST + RENTAL_COST + INGREDIENT_COST * diameter;
    double tax = HST * subtotal;
    double total = subtotal + tax;

    // Output
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "The total cost is $" << total << endl;

    return 0;
}
