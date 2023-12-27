#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>

#include <string>

class filing
{
private:
    

public:

    void useFile()
    {
        int fileOption;

        Retry:
        do
        {
            printf("%s", "==================== File Managing Program ====================\n\n");

            printf("%s", "Option 1: Create a file\n");
            printf("%s", "Option 2: Edit a File\n");
            printf("%s", "Option 3: Read a file\n");
            printf("%s", "Option 4: Exit!\n\n");

            printf("%s", "Please input option choice: ");

            scanf_s("%d", &fileOption);

            if (fileOption < 1 || fileOption > 4)
            {
                printf("%s", "Invalid input");
                printf("%s", "\n");

                goto Retry;
            }

            std::fflush;

            switch (fileOption)
            {
            case 1:
                printf("%s", "\n");
                CreateFile();
                printf("%s", "\n");
                break;

            case 2:
                printf("%s", "\n");
                EditFile();
                printf("%s", "\n");
                break;

            case 3:
                printf("%s", "\n");
                ReadFile();
                printf("%s", "\n");
                break;

            case 4:
                printf("%s", "Closing\n");
                break;

            default:
                printf("%s", "Something went wrong! \n");
                break;
            }
        } while (fileOption != 4);
    }

private:
    // This works
    void CreateFile()
    {
        // Ask for file name
        printf("%s", "Input the name and extension for your file: ");
        std::string filename;
        std::getline(std::cin >> std::ws, filename);

        // Create file
        std::ofstream file(filename);

        file.close();

        printf("%s", "\n");
    }
    // This works
    void EditFile()
    {
        // Ask for file and open
        printf("%s", "Input the name and extension for your file: ");

        std::string FileName;
        std::getline(std::cin >> std::ws, FileName);
        // Open an Input & Output stream for "FileName"
        std::fstream file(FileName, std::ios::out | std::ios::in); // std::ifstream (Input, doesn't overwrite anything) didn't work, 
                                                                  //  std::fstream (Input & Output, overwrites everything) works

        if (file.is_open())
        {
            // Ask what to input, Input text
            printf("\n%s", "What would you like to input into the file?: ");

            std::string FileInput;
            std::getline(std::cin >> std::ws, FileInput);

            file << FileInput;
        }

        file.close();

        printf("%s", "\n");
    }
    // This works
    void ReadFile()
    {
        // Ask for file and open
        printf("%s", "Input the name and extension for your file: ");

        std::string filename;
        std::getline(std::cin >> std::ws, filename);

        std::ifstream readfile;

        readfile.open(filename, std::ifstream::in);

        // Print file contents until file ends
        using namespace std;

        std::string text;

        while (std::getline(readfile, text))
        {
            printf("\n%s %s %s", " ' ", text.c_str(), " ' "); // Writing C code in C++ works, .c_str() is a null pointer reference
        }

        printf("%s", "\n");
    }
};

int main(int argc, char *argv[])
{
    filing file;

    file.useFile();

    return 0;
}

