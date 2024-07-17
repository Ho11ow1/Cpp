#include "./Include/read.h"

class Read_File
{
private:
    std::string m_Read_File_Name;
    std::string m_Read_File_Path;
    std::string m_Read_File_Absolute = m_Read_File_Path + "\\" + m_Read_File_Name;

    std::string file_line;
public:
    void ReadFile()
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
};