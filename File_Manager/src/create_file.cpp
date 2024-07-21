#include "./create.h"

void Create_File::CreateFile()
{
    printf("%s", "Input the desired absolute directory path: ");
    std::getline(std::cin >> std::ws, m_Create_File_Path);

    printf("%s", "Input a file name + the extension: ");
    std::getline(std::cin >> std::ws, m_Create_File_Name);

    if (m_Create_File_Name.find(dot) != std::string::npos)
    {
        std::ofstream file(m_Create_File_Absolute);
        file.close();
        printf("%s", "File created! \n");
    }
    else
    {
        printf("%s", "Invalid directory or file name specified \n");
    }
}