#include "./remove.h"

void Remove_File::RemoveFile()
{
    printf("%s", "Input the desired absolute directory path: ");
    std::getline(std::cin >> std::ws, m_Remove_File_Path);

    printf("\n%s", "Input a file name + the extension: ");
    std::getline(std::cin >> std::ws, m_Remove_File_Name);

    std::fstream file(m_Remove_File_Absolute);
    if (file)
    {
        std::remove(m_Remove_File_Name.c_str());
        printf("%s", "Removed file! \n");
    }
    else
    {
        printf("%s", "This file does not exist \n");
    }
    file.close();
}