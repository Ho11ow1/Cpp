#include "./Include/edit.h"

class Edit_File
{
private:
    std::string m_Edit_File_Name;
    std::string m_Edit_File_Path;
    std::string m_Edit_File_Absolute = m_Edit_File_Path + "\\" + m_Edit_File_Name;
public:
    void EditFile()
    {
        printf("%s", "Input the desired absolute directory path: ");
        std::getline(std::cin >> std::ws, m_Edit_File_Path);

        printf("%s", "Input a file name + the extension: ");
        std::getline(std::cin >> std::ws, m_Edit_File_Name);
    }
};