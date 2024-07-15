#include "./Include/create.h"

class Create_File
{
private:
    std::string m_Create_File_Name;
    std::string m_Create_File_Path;
    std::string m_Create_File_Absolute = m_Create_File_Path + "\\" + m_Create_File_Name;
    char dot = '.';
public:
	void CreateFile()
	{
        printf("%s", "Input the desired absolute directory path: ");
        std::getline(std::cin >> std::ws, m_Create_File_Path);

        printf("%s", "Input a file name + the extension: ");
        std::getline(std::cin >> std::ws, m_Create_File_Name);

        if (m_Create_File_Name.find(dot) != std::string::npos)
        {
            std::ofstream file(m_Create_File_Name);
            file.close();
            printf("%s", "File created! \n");
        }
        else
        {
            printf("%s", "Invalid directory or file name specified \n");
        }
	}
};