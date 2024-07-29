#include "./read.h"

void Read_File::ReadFile()
{
    printf("%s", "Input the desired absolute directory path: ");
    std::getline(std::cin >> std::ws, m_Read_File_Path);

    printf("%s", "Input a file name + the extension: ");
    std::getline(std::cin >> std::ws, m_Read_File_Name);

    std::replace(m_Read_File_Path.begin(), m_Read_File_Path.end(), '\\', '/');
    std::string m_Read_File_Absolute = m_Read_File_Path + '/' + m_Read_File_Name;

    std::fstream file;
    file.open(m_Read_File_Absolute);

    if (file.is_open())
    {
        while (std::getline(file, file_line))
        {
            printf("%s%s%s%s", "' ", file_line.c_str(), " '", "\n");
        }
        file.close();
    }
    else
    {
        printf("%s", "Something went wrong! \n\n");
    }
}