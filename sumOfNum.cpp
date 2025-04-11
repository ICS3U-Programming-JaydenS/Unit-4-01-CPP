// Copyright (c) 2024 Jayden Smith All rights reserved.
// Created by: Jayden Smith
// Date: April 6, 2024
// This program calculates the sum of the user`s number

#include <cstdlib>
#include <iostream>
#include <string>
int main() {
    // Define the variables
    int counter = 0;
    int sum = 0;
    std::string userNumAsString;
    int userNum;

    // get the user number as a string
    std::cout << "Enter a positive number: ";
    std::cin >> userNumAsString;

    //Try converting the user input to integer 
    try {
         int userNum = stoi(userNumAsString);
         float userNumAsFloat = std::stof(userNumAsString);
         if (userNumAsFloat != userNum)
             std::cout << userNumAsFloat << " is not an integer";
         else if (userNum < 0) {
             std::cout << userNum << " is not a positive number!\n";
        }else if (userNum == 0) {
             std::cout << userNum << " is not positive or negative\n";
        } else {
             // calculate the sum of all numbers from 0 to user number
             while (counter <= userNum) {
                 sum += counter;
                 std::cout << "Tracking " << counter
                           << " times through the loop.\n";
                 counter += 1;
             }

             // display the sum to the user
             std::cout << "\nThe sum of the numbers from 0 to "
                       << userNum << " is: " << sum << std::endl;
         }
    } catch (std::invalid_argument) {
        std::cout << userNumAsString<< " is not a valid integer.\n";
    }
                
}
