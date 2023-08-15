
#include <iostream>
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

public:
    // Constructors, getters, setters, and any other member functions can go here

    // A default constructor for simplicity
    Register() = default;

    // Parameterized constructor
    Register(std::string Name, uint8_t RegAddr, uint8_t nBits, uint8_t startBit, 
             uint32_t value, AccessModeType AccessMode, uint32_t lowerBound, 
             uint32_t upperBound, float multiplier, float offset, std::string description)
        : Name(Name), RegAddr(RegAddr), nBits(nBits), startBit(startBit), value(value), 
          AccessMode(AccessMode), lowerBound(lowerBound), upperBound(upperBound), 
          multiplier(multiplier), offset(offset), description(description) {}
    
    // Add getter and setter methods for each field if necessary
};

int main() {
    // Test the class
    Register reg("TestRegister", 0x01, 8, 0, 100, Register::MODE1, 0, 255, 1.5, 0.5, "This is a test register");
    // Further processing and testing can be done here

    return 0;
}
