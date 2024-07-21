#include "./src/create.h"
#include "./src/edit.h"
#include "./src/read.h"
#include "./src/remove.h"
#include "./src/main.h"

class filing
{
public:
    void useFile()
    {
        while (m_FileOption != 5)
        {
            printf("%s", "==================== File Managing Program ====================\n\n");

            printf("%s", "Option 1: Create a file\n");
            printf("%s", "Option 2: Edit a File\n");
            printf("%s", "Option 3: Read a file\n");
            printf("%s", "Option 4: Remove a file\n");
            printf("%s", "Option 5: Exit!\n\n");

            printf("%s", "Please input option choice: ");

            scanf_s("%d", &m_FileOption);

            if (m_FileOption < 1 || m_FileOption > 5)
            {
                printf("%s", "Invalid input");
                printf("%s", "\n");

                continue;
            }

            switch (m_FileOption)
            {
            case 1:
                printf("%s", "\n");
                create.CreateFile();
                printf("%s", "\n");
                break;

            case 2:
                printf("%s", "\n");
                edit.EditFile();
                printf("%s", "\n");
                break;

            case 3:
                printf("%s", "\n");
                read.ReadFile();
                printf("%s", "\n");
                break;

            case 4:
                printf("%s", "\n");
                remove.RemoveFile();
                printf("%s", "\n");
                break;

            case 5:
                printf("%s", "Closing\n");
                break;

            default:
                printf("%s", "Something went wrong! \n");
                break;
            }
        }
    }

private:
    Create_File create;
    Edit_File edit;
    Read_File read;
    Remove_File remove;

private:
    uint32_t m_FileOption{};
};



int main(int argc, char* argv[])
{
    filing file;

    file.useFile();

    return 0;
}
