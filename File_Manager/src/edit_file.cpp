#include "./Include/edit.h"

class Edit_File
{
private:
    std::string m_Edit_File_Name;
    std::string m_Edit_File_Path;
    std::string m_Edit_File_Absolute = m_Edit_File_Path + "\\" + m_Edit_File_Name;

    uint32_t m_file_option{};

    std::string m_file_string;
public:
    void EditFile()
    {
        printf("%s", "Input the desired absolute directory path: ");
        std::getline(std::cin >> std::ws, m_Edit_File_Path);

        printf("%s", "Input a file name + the extension: ");
        std::getline(std::cin >> std::ws, m_Edit_File_Name);

        std::ifstream file(m_Edit_File_Absolute);

        if (file.is_open())
        {
            while (m_file_option != 3)
            {
                printf("%s", "What data would you like to input to this file? \n\n");
                printf("%s", "Option 1: letters\n");
                printf("%s", "Option 2: numbers\n");
                printf("%s", "Option 3: Nevermind");
                printf("%s", "Which option would you like to choose? : ");

                scanf_s("%d", &m_file_option);

                if (m_file_option < 1 || m_file_option > 3)
                {
                    printf("%s", "Invalid input");
                    printf("%s", "\n");

                    continue;
                }

                switch (m_file_option)
                {
                case 1:
                    printf("%s", "\n");
                    Edit_File::m_input();
                    printf("%s", "\n");
                    break;

                case 2:
                    printf("%s", "\n");
                    Edit_File::m_input();
                    printf("%s", "\n");
                    break;

                case 3:
                    break;
                }
            }
        }
    }

private:
    void m_input()
    {
        printf("%s", "Input your desired data: ");
        std::getline(std::cin >> std::ws, m_file_string);

        std::fstream file(m_Edit_File_Absolute, std::ios::in | std::ios::out);
        
        if (file.is_open())
        {
            file << m_file_string;
            file.close();
        }
        else
        {
            printf("%s", "Something went wrong! \n\n");
        }
    }
};