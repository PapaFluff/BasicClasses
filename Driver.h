// Preprocessor directives required for the header file
#ifndef Driver_h
#define Driver_h
#include <iostream>
#include <stdio.h>
using namespace std;

// Creates a class that has an array of floating-point numbers
class arrayFloat
{
private:                            // Private member variables
    int SIZE;                      // Creates an int to represent the size of the arrays
    float *ARRAY;                 // Creates a pointer to dynamically alllocate the float array
    float Number;                // Creates a float for the storingElement member function
    
public:                                         // Public member variables
    
    // Declares a default constructor function
    arrayFloat();
    
    // Declares a member function to print out the array
    void getElements();
    
    // Declares a overloading constructor function
    arrayFloat(int s);
    
    // Declares a deconstructor function
    ~arrayFloat();
    
    // storeElement function, asks the user for an element and changes the number inside the element
    void storeElement(int y, float Number);
    
    // retrieveNumber Function, that retrieves the number inside a user selected element
    void retrieveNumber(int index);
    
    // getHighestValue function, retrieves the highest value in the array
    float getHighestValue();
    
    // getLowestValue function, retrieves the lowest value in the array
    float getLowestValue();
    
    // getAverage function, runs through adding all numbers in the array
    float getAverage();
    
    
};

#endif // End of header file
