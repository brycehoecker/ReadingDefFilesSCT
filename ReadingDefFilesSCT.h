// ReadingDefFilesSCT.h

#ifndef READINGDEFFILESSCT_H
#define READINGDEFFILESSCT_H

#include <string>

class ReadingDefFilesSCT {
public:
    // Enum for AccessMode
    enum AccessModeType {
        MODE0 = 0, 
        MODE1 = 1, 
        MODE2 = 2, 
        MODE3 = 3  
    };

    // Default constructor
    ReadingDefFilesSCT();

    // Parameterized constructor
    ReadingDefFilesSCT(std::string Name, uint8_t RegAddr, uint8_t nBits, uint8_t startBit, 
                       uint32_t value, AccessModeType AccessMode, uint32_t lowerBound, 
                       uint32_t upperBound, float multiplier, float offset, std::string description);

    // Getter and setter methods declaration can go here

private:
    std::string Name;
    uint8_t RegAddr;
    uint8_t nBits;
    uint8_t startBit;
    uint32_t value;
    AccessModeType AccessMode;
    uint32_t lowerBound;
    uint32_t upperBound;
    float multiplier;
    float offset;
    std::string description;
};

#endif // READINGDEFFILESSCT_H

