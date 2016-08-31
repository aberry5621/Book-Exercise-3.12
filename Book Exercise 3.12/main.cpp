//
//  main.cpp
//  Book Exercise 3.12
//
//  Created by ax on 8/30/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Book exercise 3.12 - Coin flip
//

#include <iostream>
#include <ctime> // for time function
#include <cstdlib> // for rand and srand functions
using namespace std;

int main() {
    
    cout << "Calculate Cost of Shipping \n";
    
    // Data and Initialization
    int randgen = 0;
    int coin_flip = 0;
    int user_guess_input = 0;
    srand(time(0)); // seed random
    
    // I
    cout << "Enter 0 to call heads or 1 to call tails: ";
    cin >> user_guess_input;
    
    // P
    randgen = rand() % 10;
    
    if (randgen <= 4)
        coin_flip = 0;
    else
        coin_flip = 1;
    
    cout << "flip: " << coin_flip << endl;
    
    // O
    if (coin_flip == user_guess_input)
        cout << "You guessed correctly!" << endl;
    else
        cout << "You guessed incorrectly:( " << endl;
    
    return 0;
}
