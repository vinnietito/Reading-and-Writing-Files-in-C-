#include <iostream>
#include <fstream>  // For file input/output
#include <string>   // For string handling

int main() {
    // Writing to a file
    std::ofstream outputFile("example.txt"); // Create an output file stream
    
    if (outputFile.is_open()) {
        outputFile << "Hello, this is a test file.\n";
        outputFile << "Writing some data to the file.\n";
        outputFile.close();  // Always close the file when done
        std::cout << "Data written to file successfully.\n";
    } else {
        std::cerr << "Unable to open file for writing.\n";
    }

    // Reading from a file
    std::ifstream inputFile("example.txt"); // Create an input file stream
    std::string line;
    
    if (inputFile.is_open()) {
        std::cout << "Reading from file:\n";
        while (getline(inputFile, line)) {  // Read line by line
            std::cout << line << '\n';
        }
        inputFile.close();  // Always close the file when done
    } else {
        std::cerr << "Unable to open file for reading.\n";
    }

    return 0;
}

