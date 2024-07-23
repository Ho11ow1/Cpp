#include "./remove.h"
#include "./algorithm.h"

void Remove_File::RemoveFile()
{
    printf("%s", "Input the desired absolute directory path: ");
    std::getline(std::cin >> std::ws, m_Remove_File_Path);

    printf("%s", "Input a file name + the extension: ");
    std::getline(std::cin >> std::ws, m_Remove_File_Name);

    std::replace(m_Remove_File_Path.begin(), m_Remove_File_Path.end(), '\\', '/');
    std::string m_Remove_File_Absolute = m_Remove_File_Path + '/' + m_Remove_File_Name;

    std::fstream file;
    file.open(m_Remove_File_Absolute);

    if (file.is_open())
    {
        std::remove(m_Remove_File_Absolute.c_str());
        printf("%s", "Removed file! \n");
    }
    else
    {
        printf("%s", "This file does not exist \n");
    }
    file.close();
}