#include "./read.h"

void Read_File::ReadFile()
{
    printf("%s", "Input the desired absolute directory path: ");
    std::getline(std::cin >> std::ws, m_Read_File_Path);

    printf("%s", "Input a file name + the extension: ");
    std::getline(std::cin >> std::ws, m_Read_File_Name);

    std::ifstream file(m_Read_File_Absolute);

    if (file.is_open())
    {
        while (std::getline(std::cin >> std::ws, file_line))
        {
            printf("%s%s%s", "' ", file_line, " '");
        }
        file.close();
    }
    else
    {
        printf("%s", "Something went wrong! \n\n");
    }
}