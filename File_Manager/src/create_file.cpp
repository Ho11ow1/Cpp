#include "./create.h"
#include "./algorithm.h"

void Create_File::CreateFile()
{
    printf("%s", "Input the desired absolute directory path: ");
    std::getline(std::cin >> std::ws, m_Create_File_Path);

    printf("%s", "Input a file name + the extension: ");
    std::getline(std::cin >> std::ws, m_Create_File_Name);

    std::replace(m_Create_File_Path.begin(), m_Create_File_Path.end(), '\\', '/');
    std::string m_Create_File_Absolute = m_Create_File_Path + '/' + m_Create_File_Name;

    if (m_Create_File_Name.find(dot) != std::string::npos)
    {
        std::ofstream file;
        file.open(m_Create_File_Absolute);
        
        if (file.is_open())
        {
            file.close();
            printf("%s", "File created! \n");
        }
    }
    else
    {
        printf("%s", "Invalid directory or file name specified \n");
    }
}