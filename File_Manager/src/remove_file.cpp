#include "./remove.h"

namespace fs = std::filesystem;

void Remove_File::RemoveFile()
{
    printf("%s", "Input the desired absolute directory path: ");
    std::getline(std::cin >> std::ws, m_Remove_File_Path);

    printf("%s", "Input a file name + the extension: ");
    std::getline(std::cin >> std::ws, m_Remove_File_Name);

    std::replace(m_Remove_File_Path.begin(), m_Remove_File_Path.end(), '\\', '/');
    std::string m_Remove_File_Absolute = m_Remove_File_Path + '/' + m_Remove_File_Name;

    if (fs::remove(m_Remove_File_Absolute))
    {
        std::cout << "File deleted successfully!\n";
    }
    else
    {
        std::cout << "Error deleting file.\n";
    }
}