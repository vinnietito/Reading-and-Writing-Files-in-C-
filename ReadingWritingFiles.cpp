#include <iostream>
#include <fstream>  // For file input/output
#include <string>   // For string handling

int main()
{
    // Writing to a file
    std::ofstream outputFile("example.txt"); 
    
    if (outputFile.is_open())
	{
        outputFile << "Hello, this is a test file.\n";
        outputFile << "Writing some data to the file.\n";
        outputFile.close(); 
        std::cout << "Data written to file successfully.\n";
    } 
	else
	{
        std::cerr << "Unable to open file for writing.\n";
    }

    // Reading from a file
    std::ifstream inputFile("example.txt"); 
    std::string line;
    
    if (inputFile.is_open())
	{
        std::cout << "Reading from file:\n";
        while (getline(inputFile, line))
		{  
            std::cout << line << '\n';
        }
        inputFile.close(); 
    } 
	else 
	{
        std::cerr << "Unable to open file for reading.\n";
    }

    return 0;
}

