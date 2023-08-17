#include "ReadingDefFilesSCT.h"
#include <iostream>
#include <fstream>
#include <sstream>

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

// Destructor implementation
ReadingDefFilesSCT::~ReadingDefFilesSCT() {
    // Cleanup code (if necessary) would go here. 
    // In this specific case, nothing specific needs to be done.
}

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


// Getter methods implementation
std::string ReadingDefFilesSCT::getName() const {
    return Name;
}

uint8_t ReadingDefFilesSCT::getRegAddr() const {
    return RegAddr;
}

uint8_t ReadingDefFilesSCT::getNBits() const {
    return nBits;
}

uint8_t ReadingDefFilesSCT::getStartBit() const {
    return startBit;
}

uint32_t ReadingDefFilesSCT::getValue() const {
    return value;
}

ReadingDefFilesSCT::AccessModeType ReadingDefFilesSCT::getAccessMode() const {
    return AccessMode;
}

uint32_t ReadingDefFilesSCT::getLowerBound() const {
    return lowerBound;
}

uint32_t ReadingDefFilesSCT::getUpperBound() const {
    return upperBound;
}

float ReadingDefFilesSCT::getMultiplier() const {
    return multiplier;
}

float ReadingDefFilesSCT::getOffset() const {
    return offset;
}

std::string ReadingDefFilesSCT::getDescription() const {
    return description;
}

bool ReadingDefFilesSCT::readFromFile(const std::string& filename) {
    std::string fullPath = "../defFiles/" + filename; // Prefix directory name to filename
    std::ifstream file(fullPath);

    // Print the constructed full path for clarity
    std::cout << "Attempting to read file: " << fullPath << std::endl;

    // Check if the file opened successfully
    if (!file.is_open()) {
        std::cerr << "Failed to open the file: " << fullPath << std::endl;
        
        // Print more detailed error based on errno
        perror("Error reason"); // This will print a descriptive error message

        return false;
    }

    std::string line;

    // Skip the first two header lines
    if (!std::getline(file, line)) {
        std::cerr << "Failed to read first header line." << std::endl;
        return false;
    }

    if (!std::getline(file, line)) {
        std::cerr << "Failed to read second header line." << std::endl;
        return false;
    }

    // Read and parse the third line containing the actual data
    if (std::getline(file, line)) {
        std::istringstream ss(line);
        ss >> Name;

        uint8_t regAddrTmp, nBitsTmp, startBitTmp;
        ss >> std::hex >> regAddrTmp >> std::dec >> nBitsTmp >> startBitTmp >> value;

        int modeTmp;
        ss >> modeTmp;
        AccessMode = static_cast<AccessModeType>(modeTmp);

        ss >> lowerBound >> upperBound >> multiplier >> offset;
        std::getline(ss, description); // Get the rest of the line as the description
    } else {
        std::cerr << "Failed to read data line or the file might be empty." << std::endl;
        return false;
    }

    file.close();
    return true;
}

/*
//Actual Function for Reading from .def file function
bool ReadingDefFilesSCT::readFromFile(const std::string& filename) {
    //std::ifstream file(filename);
    std::string fullPath = "defFiles/" + filename; // Prefix directory name to filename
    std::ifstream file(fullPath);

    // Check if the file opened successfully
    if (!file.is_open()) {
        std::cerr << "Failed to open the file: " << filename << std::endl;
        return false;
    }

    std::string line;

    // Skip the first two header lines
    std::getline(file, line);
    std::getline(file, line);

    // Read and parse the third line containing the actual data
    if (std::getline(file, line)) {
        std::istringstream ss(line);

        ss >> Name;

        uint8_t regAddrTmp, nBitsTmp, startBitTmp;
        ss >> std::hex >> regAddrTmp >> std::dec >> nBitsTmp >> startBitTmp >> value;

        int modeTmp;
        ss >> modeTmp;
        AccessMode = static_cast<AccessModeType>(modeTmp);

        ss >> lowerBound >> upperBound >> multiplier >> offset;
        std::getline(ss, description); // Get the rest of the line as the description

        // Assign parsed values
        RegAddr = regAddrTmp;
        nBits = nBitsTmp;
        startBit = startBitTmp;
    }

    file.close();
    return true;
}
*/
