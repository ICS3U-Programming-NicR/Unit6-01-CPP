// Copyright (c) 2022 Nicolas Riscalas All rights reserved.
//
// Created by: Nicolas Riscalas
// Created on:April 25 2022
// This program makes a random number game

#include <iostream>
#include <iomanip>
#include <random>

using std::cout;
using std::cin;
using std::string;

int AverageCalc() {
    int total = 0;
    int counter;
    const int MAX_ARRAY_SIZE = 10, MAX_NUM = 0, MIN_NUM = 100;
    for (counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(0, 100);
        int arrayOfInt[MAX_ARRAY_SIZE];
        arrayOfInt[counter] = idist(rgen);
        cout << "The " << counter << " number calculated is "\
            << arrayOfInt[counter] << "\n";
        total = arrayOfInt[counter] + total;
    }
    float average = total/counter;
    return average;
}


int main() {
    float averageF = AverageCalc();
    cout << "The average of the random numbers is " << averageF;
}
