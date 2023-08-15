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

    // Destructor declaration
    ~ReadingDefFilesSCT();

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


    // Getter methods declaration
    std::string getName() const;
    uint8_t getRegAddr() const;
    uint8_t getNBits() const;
    uint8_t getStartBit() const;
    uint32_t getValue() const;
    AccessModeType getAccessMode() const;
    uint32_t getLowerBound() const;
    uint32_t getUpperBound() const;
    float getMultiplier() const;
    float getOffset() const;
    std::string getDescription() const;

    bool readFromFile(const std::string& filename);

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

