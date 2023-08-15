#include "ReadingDefFilesSCT.h"

// Default constructor implementation
Register::Register() 
    : RegAddr(0), nBits(0), startBit(0), value(0), AccessMode(MODE0), 
      lowerBound(0), upperBound(0), multiplier(1.0f), offset(0.0f), description("") {}

// Parameterized constructor implementation
Register::Register(std::string Name, uint8_t RegAddr, uint8_t nBits, uint8_t startBit, 
                   uint32_t value, AccessModeType AccessMode, uint32_t lowerBound, 
                   uint32_t upperBound, float multiplier, float offset, std::string description)
    : Name(Name), RegAddr(RegAddr), nBits(nBits), startBit(startBit), value(value), 
      AccessMode(AccessMode), lowerBound(lowerBound), upperBound(upperBound), 
      multiplier(multiplier), offset(offset), description(description) {}

// If you had getter and setter methods or any other member functions in the header, their implementations would also go here.

