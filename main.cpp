#include <iostream>
#include "ReadingDefFilesSCT.h"

int main() {
    // Create an object of ReadingDefFilesSCT using the parameterized constructor
    ReadingDefFilesSCT reading("TestName", 0x01, 8, 0, 100, ReadingDefFilesSCT::MODE1, 
                               0, 255, 1.5f, 0.5f, "This is a test description");

    // Assuming you have a getter method for Name in your class, you can use it like:
    // std::cout << "Name: " << reading.getName() << std::endl;

    // For this example, without getter methods, we're just printing a statement to indicate success.
    std::cout << "ReadingDefFilesSCT object created successfully!" << std::endl;

    return 0;
}
