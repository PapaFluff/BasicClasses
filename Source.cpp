// Preprocessor directives required for the Source.cpp file
#include "Driver.h"
#include <iostream>
#include <cstdlib>
using namespace std;

// Declares a default constructor function
arrayFloat::arrayFloat()
{
    SIZE = 10;                           // Sets the size to 10
    ARRAY = new float[SIZE];            // Creates a dynamically alllocated array with a size of 10 elements
    ARRAY[0] = 0.1;                    // Intializes the float number 0.1 in element 0
    ARRAY[1] = 1.1;                   // Intializes the float number 1.1 in element 1
    ARRAY[2] = 2.2;                  // Intializes the float number 2.2 in element 2
    ARRAY[3] = 3.3;                 // Intializes the float number 3.3 in element 3
    ARRAY[4] = 4.4;                // Intializes the float number 4.4 in element 4
    ARRAY[5] = 5.5;               // Intializes the float number 5.5 in element 5
    ARRAY[6] = 6.6;              // Intializes the float number 6.6 in element 6
    ARRAY[7] = 7.7;             // Intializes the float number 7.7 in element 7
    ARRAY[8] = 8.8;            // Intializes the float number 8.8 in element 8
    ARRAY[9] = 9.9;           // Intializes the float number 9.9 in element 9
}

// Declares a member function to print out the array
void arrayFloat::getElements()
{
    cout << "{ ";                   // Beginning of array
    for (int a = 0; a < SIZE; a++)      // For loop that outputs every element less than the SIZE
    {
        cout << ARRAY[a] << " ";        // Prints what's at the elemetn
    }
    cout << "}";                   // Ending of array
}

// Declares a overloading constructor function
arrayFloat::arrayFloat(int s)
{
    ARRAY = new float[s];           // Dynamically allocates a new array with a size of s(intialized by user)
    SIZE = s;               // s is assigned to the size
    
    // Based on the size the user inputs, a for loop is used to intialize elements in each element
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Type in a decimal value: ";    // Prompts user
        cin >> Number;                         // Input float number here
        ARRAY[i] = Number;                    // Assigns float number to current element in array
    }
}

// Declares a deconstructor function
arrayFloat::~arrayFloat()
{
    delete [] ARRAY;            // Deletes the array
}

// storeElement function, asks the user for an element and changes the number inside the element
void arrayFloat::storeElement(int y, float Number)
{
    // While loop, that checks to make sure the index is not outside the size of the array.
    while (y < 0 || y > SIZE-1)
    {
        cout << "ERROR! The place you are looking for is outside the size of the array." << endl;   // ERROR message
        cout << "Try again: ";  // Prompt user to try again
        cin >> y;   // Takes new input
        
        // If the input is valid, stores the number the user typed
        if (y >= 0 && y < SIZE)
        {
            ARRAY[y] = Number;  // Stores number into array at y element
            break;      // Ends loop
        }
    }
    
    // If the input is valid, stores the number the user typed
    if (y >= 0 && y < SIZE)
    {
        ARRAY[y] = Number;  // Stores number into array at y element
    }
}

// retrieveNumber Function, that retrieves the number inside a user selected element
void arrayFloat::retrieveNumber(int index)
{
    // While loop, that checks to make sure the index is not outside the size of the array.
    while (index < 0 || index > SIZE-1)
    {
        cout << "ERROR! The place you are looking for is outside the size of the array." << endl; // ERROR message
        cout << "Try again: ";  // Prompts user to try again
        cin >> index;       // Takes new input
        
        // If the input is valid, displays the number at the element
        if (index >= 0 && index < SIZE)
        {
            cout << "The number is: " << ARRAY[index];  // Outputs number at element
            break;  // Ends loop
        }
    }
    
    // If the input is valid, displays the number at the element
    if (index >= 0 && index < SIZE)
    {
        cout << "The number is: " << ARRAY[index];  // Outputs number at element
    }
}

// getHighestValue function, retrieves the highest value in the array
float arrayFloat::getHighestValue()
{
    float MAX = ARRAY[0];       // Declares a float variable called MAX and sets it to element 0
    
    // For loop that runs through checking if a larger float can be found
    for (int m = 1; m < SIZE; m++)
    {
        // If a value at the current element is found to be larger than MAX MAX becomes the current element
        if (ARRAY[m] > MAX)
        {
            MAX = ARRAY[m];     // Sets MAX to current element
        }
    }
    
    return MAX; // Returns MAX as a float
}

// getLowestValue function, retrieves the lowest value in the array
float arrayFloat::getLowestValue()
{
    float MIN = ARRAY[0];       // Declares a float variable called MIN and sets it to element 0
    
    // For loop that runs through checking if a smaller float can be found
    for (int m = 1; m < SIZE; m++)
    {
        // If a value at the current element is found to be smaller than MIN MIN becomes the current element
        if (ARRAY[m] < MIN)
        {
            MIN = ARRAY[m];     // Sets MIN to current element
        }
    }
    
    return MIN; // Returns MIN as a float
}

// getAverage function, runs through adding all numbers in the array
float arrayFloat::getAverage()
{
    float AVERAGE = 0.0;        // Declares SUM and initializes it to 0.0
    
    // For loop that runs through adding each number in the array
    for (int a = 0; a < SIZE; a++)
    {
        AVERAGE += ARRAY[a];    // Adds current element value to SUM
    }
    
    return AVERAGE/SIZE; // Returns SUM as a float
}
