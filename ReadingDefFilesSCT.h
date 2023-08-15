// Register.h

#ifndef REGISTER_H
#define REGISTER_H

#include <string>

class Register {
public:
    // Enum for AccessMode
    enum AccessModeType {
        MODE0 = 0, 
        MODE1 = 1, 
        MODE2 = 2, 
        MODE3 = 3  
    };

    // Default constructor
    Register();

    // Parameterized constructor
    Register(std::string Name, uint8_t RegAddr, uint8_t nBits, uint8_t startBit, 
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

#endif // REGISTER_H
