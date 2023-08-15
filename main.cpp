#include <iostream>
#include <string>
#include "ReadingDefFilesSCT.h"

int main() {
    // Test the class
    ReadingDefFilesSCT regRead("TestRegister", 0x01, 8, 0, 100, ReadingDefFilesSCT::MODE1, 0, 255, 1.5, 0.5, "This is a test register");
    // Further processing and testing can be done here

    return 0;
}
