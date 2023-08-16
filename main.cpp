#include <iostream>
#include "ReadingDefFilesSCT.h"
using namespace std;

int main() {
    const int numObjects = 1000000;

    // Create an array of pointers to ReadingDefFilesSCT objects
    ReadingDefFilesSCT* readings[numObjects];
    
    ReadingDefFilesSCT reading;
    if (reading.readFromFile("TC_M_FPGA_Firmware0xC0000011.def")) {
        std::cout << "Data loaded successfully!" << std::endl;
    } else {
        std::cerr << "Failed to load data from file." << std::endl;
    }

    // Create 1000000 ReadingDefFilesSCT objects using the parameterized constructor
    for (int i = 0; i < numObjects; ++i) {
        readings[i] = new ReadingDefFilesSCT("TestName" + to_string(i), 0x01, 8, 0, 100, 
                                             ReadingDefFilesSCT::MODE1, 0, 255, 1.5f, 0.5f, 
                                             "Description for object " + to_string(i));
    }

    cout << "1000000 ReadingDefFilesSCT objects created successfully!" << endl;

    // Delete the 1000000 ReadingDefFilesSCT objects
    for (int i = 0; i < numObjects; ++i) {
        delete readings[i];
    }
    
    cout << "1000000 ReadingDefFilesSCT objects deleted successfully!" << endl;

    return 0;
}

