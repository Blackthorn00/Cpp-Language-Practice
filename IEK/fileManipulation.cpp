#include <iostream>
#include <fstream>

int main()
{
    int x,y,sum;
    std::cout << "Enter two integers: ";
    std::cin >> x >> y; 
    sum = x+y;
    std::ofstream outputFile("output.txt");


    if(!outputFile.is_open())
    {
        std::cerr << "Error opening file for writing" << std::endl;
        return 1;
    }
    outputFile << "This is a line written to the file." << std::endl;
    outputFile << "This is another line." << std::endl;
    outputFile << sum << std::endl;

    outputFile.close();
    std::cout << "Data has been written to output.txt" << std::endl;
    return 0; 
}