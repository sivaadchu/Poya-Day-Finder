#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Creating Loop Variables
    bool exitLoop = false;
    bool isLoop = false;
    while (exitLoop == false) { // Starting Loop
        if (isLoop) { // An If function to exit from loop
            int exitFunction;
            cout << "If you dont want to try again. Kindly Press 0 or If you want to try again press any other numbers : ";
            cin >> exitFunction;
            if (exitFunction == 0) {
                break; //Break function to break this loop and go to return function
            }
        }
        cout << "Welcome to Poya Day Finder." << endl; // Start of my code
        cout << "This was programmed to tell any Poya day's 2022" << endl;
        int month;
        cout << "Enter the number of Month. Please don't press any letters : ";
        cin >> month;

        string result;
        bool isError = false;

        switch (month) { // A switch function for switching the cases
        case 0:
            isError = true;
            break;
        case 1:
            result = "17th January 2022";
            break;
        case 2:
            result = "16th February 2022";
            break;
        case 3:
            result = "17th March 2022";
            break;
        case 4:
            result = "16th April 2022";
            break;
        case 5:
            result = "15th May 2022";
            break;
        case 6:
            result = "14th June 2022";
            break;
        case 7:
            result = "13th July 2022";
            break;
        case 8:
            result = "11th August 2022";
            break;
        case 9:
            result = "10th September 2022";
            break;
        case 10:
            result = "9th October 2022";
            break;
        case 11:
            result = "7th November 2022";
            break;
        case 12:
            result = "7th December 2022";
            break;
        default:
            isError = true;
        }

        if (isError) { // If it's error, We can tell It's invalid
            cout << "Invalid Month, Try again." << endl;
        }
        else {
            cout << "Poya Day is " << result << endl; // Final result
        }
        isLoop = true;
    }
    return 0; // Return Statement
}
