#include "./edit.h"

void Edit_File::EditFile()
{
    printf("%s", "Input the desired absolute directory path: ");
    std::getline(std::cin >> std::ws, m_Edit_File_Path);

    printf("%s", "Input a file name + the extension: ");
    std::getline(std::cin >> std::ws, m_Edit_File_Name);

    std::replace(m_Edit_File_Path.begin(), m_Edit_File_Path.end(), '\\', '/');
    std::string m_Edit_File_Absolute = m_Edit_File_Path + '/' + m_Edit_File_Name;

    std::fstream file;
    file.open(m_Edit_File_Absolute);

    if (file.is_open())
    {
        printf("%s", "Input your desired data: ");
        std::getline(std::cin >> std::ws, m_file_string);

        if (file.is_open())
        {
            file << m_file_string;
            printf("%s", "Success! \n");
            file.close();
        }
        else
        {
            printf("%s", "Something went wrong! \n");
        }
    }
}