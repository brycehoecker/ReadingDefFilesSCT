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

    // Setter methods declaration
    void setName(const std::string &name);
    void setRegAddr(uint8_t regAddr);
    void setNBits(uint8_t nBits);
    void setStartBit(uint8_t startBit);
    void setValue(uint32_t value);
    void setAccessMode(AccessModeType accessMode);
    void setLowerBound(uint32_t lowerBound);
    void setUpperBound(uint32_t upperBound);
    void setMultiplier(float multiplier);
    void setOffset(float offset);
    void setDescription(const std::string &desc);





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

