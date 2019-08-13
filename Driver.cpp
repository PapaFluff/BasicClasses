// Preprocessor directives required for the Driver.cpp file
#include "Driver.h"
#include <iostream>
#include <cstdlib>
using namespace std;

// MAIN FUNCTION -- The primary driver of the program that uses the classes and checks if everything works properly
int main()
{
    arrayFloat defaultArray;    // Creates a new object to represent the default constructor array
    defaultArray.getElements();     // Displays current status of default constructor array
    cout << endl;   // Format
    int defaultY;       // Declares int to be used as user input for choosing an element to store a new number
    float defaultNumber;    // Declares float to represent new number
    cout << "Choose an element 0-9: ";  // Prompts user for element
    cin >> defaultY;    // Input here, ELEMENT desired
    cout << "What float number do you want to replace it with?" << endl;  // Prompt user for new number
    cin >> defaultNumber;   // Input here, number
    defaultArray.storeElement(defaultY, defaultNumber); // Calls the storeElement member function
    defaultArray.getElements(); // Displays new status of default constructor array
    cout << endl;   // Format
    cout << endl;   // Format
    int defaultIndex;   // Declares int to represent the element the user types to retrieve the number
    cout << "Type an element 0-9 to retrieve the number: "; // Prompt user for element
    cin >> defaultIndex;    // Input element here
    cout << endl;   // Format
    defaultArray.retrieveNumber(defaultIndex);  // Calls the retrieveNumber function
    cout << endl;   // Format
    cout << endl;   // Format
    cout << "The HIGHEST value: " << defaultArray.getHighestValue() << endl;    // Displays highest value in array
    cout << "The LOWEST value: " << defaultArray.getLowestValue() << endl;     // Displays lowest value in array
    cout << "AVERAGE of all numbers: " << defaultArray.getAverage() << endl;    // Displays average of array
    cout << endl;   // Format
    
    int overloaded_SIZE_Array;  // Declares int to be the size of the overloaded constructor array
    cout << "What size do you want the overloaded array to be?" << endl;    // Prompts user for size of array
    cout << "Size: ";   // Format/Prompts user
    cin >> overloaded_SIZE_Array;   // Input size of overloladed constructor array
    arrayFloat overloadedArray(overloaded_SIZE_Array);  // Creates a object for the overloaded constructor array
    overloadedArray.getElements();  // Displays current status of overlloaded constructor array
    int overloadedY;       // Declares int to be used as user input for choosing an element to store a new number
    float overloadedNumber;    // Declares float to represent new number
    cout << endl;   // Format
    cout << "Choose an element 0-" << overloaded_SIZE_Array-1 << ": "; // Prompt user for element
    cin >> overloadedY;    // Input here, ELEMENT desired
    cout << "What float number do you want to replace it with?" << endl;  // Prompt user for new number
    cin >> overloadedNumber;   // Input here, number
    overloadedArray.storeElement(overloadedY, overloadedNumber); // Calls the storeElement member function
    cout << endl;   // Format
    overloadedArray.getElements(); // Displays new status of overloaded constructor array
    cout << endl;   // Format
    cout << endl;   // Format
    int overloadedIndex;   // Declares int to represent the element the user types to retrieve the number
    cout << "Type an element 0-" << overloaded_SIZE_Array-1 << " to retrieve the number: "; // Prompt user for element
    cin >> overloadedIndex;    // Input element here
    cout << endl;   // Format
    overloadedArray.retrieveNumber(overloadedIndex);  // Calls the retrieveNumber function
    cout << endl;   // Format
    cout << "The HIGHEST value: " << overloadedArray.getHighestValue() << endl; // Displays highest value in array
    cout << "The LOWEST value: " << overloadedArray.getLowestValue() << endl;   // Displays lowest value in array
    cout << "AVERAGE of all numbers: " << overloadedArray.getAverage() << endl;    // Displays average of array
    
    cout << endl;   // Format
    return 0;       // Returns 0 for int main function
}
