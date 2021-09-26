//small_mad_lib.cpp: This program asks the user for a number, country, animal and name and returns a string.
//Name: Luke MacLean
//Class Section: COSC-1436.900 Online
// Date: 09/26/2021

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    // Variables: Variables to hold all needed data
    int years;
    string country, animal, name;

    // Ask for a number somewhere in your program, followed by asking for a string
    cout << "Give me some data and I will predict your future! \n";
    cout << "Enter an integer number: ";
    cin >> years;
    cin.ignore(20, '\n');
    cout << "Enter the name of a country: ";
    // Ensuring that your program can handle a string input that may have multiple words
    getline(cin, country);
    cout << "Enter a type of animal: ";
    getline(cin, animal);
    cout << "Enter a funny name: ";
    getline(cin, name);

    // Output the story using the data provided by the user
    cout << "It's time to tell your future!" << endl;
    cout << "In "<< years <<" years, you will move to " << country << endl;
    cout << "You will be gifted a "<< animal <<" that you decide to name "<< name <<"." << endl;
    return 0;
}