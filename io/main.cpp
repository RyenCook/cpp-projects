#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
int main()
{
    std::string random[] = {"Hello World", "Goodbye World", "I hate cs102"};
    std::srand(std::time(NULL));

    // Create a basic text file and randomly insert a string to show it recreates the file each time
    std::ofstream create_file; // ofstream = Output File Stream
    create_file.open("createfile.txt");
    create_file << random[rand() % 3];
    create_file.close();

    // Read in text-file and output to terminal
    // The code doesnt have to be recompiled, only the input files do.
    std::string read_line;
    std::ifstream myfile ("input.txt"); // ifstream = Input File Stream
    if (myfile.is_open())
    {
        while ( getline (myfile,read_line) ) // getline is the same as scanner.getline() from Java
        {
            std::cout << read_line << '\n';
        }
        myfile.close();
    }
    else
    {
        std::cout << "Unable to open file";
    }

    // Reads in from one file and outputs it to another
    std::ifstream input_file ("input.txt");
    std::ofstream output_file;
    output_file.open("output.txt");
    create_file.close();

    if (input_file.is_open())
    {
        while ( getline (input_file,read_line) ) // getline is the same as scanner.getline() from Java
        {
            output_file << read_line << '\n';
        }
        input_file.close();
        output_file.close();
    }
    else
    {
        std::cout << "Unable to open file";
    }

    return 0;

}
