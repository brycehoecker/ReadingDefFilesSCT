#include "ReadingDefFilesSCT.h"

// Default constructor implementation
ReadingDefFilesSCT::ReadingDefFilesSCT() 
    : RegAddr(0), nBits(0), startBit(0), value(0), AccessMode(MODE0), 
      lowerBound(0), upperBound(0), multiplier(1.0f), offset(0.0f), description("") {}

// Parameterized constructor implementation
ReadingDefFilesSCT::ReadingDefFilesSCT(std::string Name, uint8_t RegAddr, uint8_t nBits, uint8_t startBit, 
                                       uint32_t value, AccessModeType AccessMode, uint32_t lowerBound, 
                                       uint32_t upperBound, float multiplier, float offset, std::string description)
    : Name(Name), RegAddr(RegAddr), nBits(nBits), startBit(startBit), value(value), 
      AccessMode(AccessMode), lowerBound(lowerBound), upperBound(upperBound), 
      multiplier(multiplier), offset(offset), description(description) {}

// Setter methods implementation

void ReadingDefFilesSCT::setName(const std::string &name) {
    Name = name;
}

void ReadingDefFilesSCT::setRegAddr(uint8_t regAddr) {
    RegAddr = regAddr;
}

void ReadingDefFilesSCT::setNBits(uint8_t nBits) {
    this->nBits = nBits;
}

void ReadingDefFilesSCT::setStartBit(uint8_t startBit) {
    this->startBit = startBit;
}

void ReadingDefFilesSCT::setValue(uint32_t value) {
    this->value = value;
}

void ReadingDefFilesSCT::setAccessMode(AccessModeType accessMode) {
    AccessMode = accessMode;
}

void ReadingDefFilesSCT::setLowerBound(uint32_t lowerBound) {
    this->lowerBound = lowerBound;
}

void ReadingDefFilesSCT::setUpperBound(uint32_t upperBound) {
    this->upperBound = upperBound;
}

void ReadingDefFilesSCT::setMultiplier(float multiplier) {
    this->multiplier = multiplier;
}

void ReadingDefFilesSCT::setOffset(float offset) {
    this->offset = offset;
}

void ReadingDefFilesSCT::setDescription(const std::string &desc) {
    description = desc;
}
