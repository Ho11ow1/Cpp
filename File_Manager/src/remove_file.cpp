#include "./Include/remove.h"

class Remove_File
{
private:
    std::string m_Remove_File_Name;
    std::string m_Remove_File_Path;
    std::string m_Remove_File_Absolute = m_Remove_File_Path + "\\" + m_Remove_File_Name;
public:
    void RemoveFile()
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
};