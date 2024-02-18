#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <sstream>

#include <string>
#include <vector>
#include <unordered_map>

static class creator
{
private:
    uint32_t Init_option;
    uint32_t Edit_option;
    uint32_t Opt_option;

    typedef struct
    {
        std::string Name;
        std::string Surname;
        uint32_t Age;
    }Student;

    bool db_exist(std::string Student_DB)
    {
        std::ifstream file;
        file.open(Student_DB);

        if (file.is_open())
        {
            file.close();
            return true;
        }

        return false;
    }

    std::string Student_DB = "Student_DB.txt";

    bool DB_exist = db_exist(Student_DB) ? true : false;

    std::unordered_map<uint32_t, Student> students;
    uint32_t Student_ID = 1;

    void filemanagement()
    {

    }


public:

    void Init()
    {
    Retry:
        while (Init_option != 6)
        {
            printf("%s", "*************** Student management program ***************\n\n");

            printf("%s", "Option 1: Create new Student\n");
            printf("%s", "Option 2: Edit existing Student\n");
            printf("%s", "Option 3: Display existing Student\n");
            printf("%s", "Option 4: Remove existing student\n");
            printf("%s", "Option 5: Clear the screen!\n");
            printf("%s", "Option 6: Exit!\n\n");

            printf("%s", "Please input option choice: ");
            scanf_s("%d", &Init_option, 0);

            if (Init_option < 1 || Init_option > 6)
            {
                printf("\n%s", "Invalid input\n");

                goto Retry;
            }

            /*if (DB_exist)
            {
                printf("\n%s", "DB_exists\n");
            }
            else if (!DB_exist)
            {
                printf("%s", "Creating DB...");

                std::ofstream file(Student_DB);
                file.close();
            }*/

            Student student;

            switch (Init_option)
            {
            case 1:
                printf("%s", "\n");
                CreateStudent(student.Name, student.Surname, student.Age);
                printf("%s", "\n");
                break;

            case 2:
                printf("%s", "\n");
                EditStudent();
                printf("%s", "\n");
                break;

            case 3:
                printf("%s", "\n");
                DisplayStudent();
                printf("%s", "\n");
                break;

            case 4:
                printf("%s", "\n");
                RemoveStudent();
                printf("%s", "\n");
                break;

            case 5:
                system("cls");
                goto Retry;
                break;

            case 6:
                printf("%s", "Closing program...\n");
                break;

            default:
                printf("%s", "Segmentation fault\n");
                break;
            }
        }
    }

private:
    // This works
    void CreateStudent(std::string& Name, std::string& Surname, uint32_t Age)
    {
        Student student = { Name, Surname, Age };

        printf("%s", "Please input Student Name: ");
        std::getline(std::cin >> std::ws, student.Name);

        printf("%s", "Please input Student SurName: ");
        std::getline(std::cin >> std::ws, student.Surname);

    Retry:
        printf("%s", "Please input Student Age: ");
        scanf_s("%d", &student.Age, 1);

        if (student.Age > 32)
        {
            goto Retry;
        }

        students[Student_ID] = student;

        printf("%s%d", "\nCreated student with ID: ", Student_ID);
        printf("%s%s", "\nCreated student with Name: ", student.Name.c_str());
        printf("%s%s", "\nCreated student with SurName: ", student.Surname.c_str());
        printf("%s%d%s", "\nCreated student with Age: ", student.Age, "\n");

        std::fstream file(Student_DB, std::ios::out | std::ios::app);
        if (file.is_open())
        {
            file << "ID: " << Student_ID << "\n" << "{" << "\n";
            file << "    Name: " << student.Name << "\n";
            file << "    Surname: " << student.Surname << "\n";
            file << "    Age: " << student.Age << "\n" << "}" << "\n" << "\n";
        }
        Student_ID++;

        file.close();
    }
    // This kinda works
    void EditStudent()
    {
        printf("%s", "Please input Student_ID: ");
        scanf_s("%d", &Student_ID);

        std::fstream file(Student_DB, std::ios::in | std::ios::out);

        if (file.is_open())
        {
            std::string line;
            bool foundID = false;
            std::streampos idPosition;

            while (std::getline(file, line))
            {
                if (line.find("ID: " + std::to_string(Student_ID)) != std::string::npos)
                {
                    foundID = true;
                    idPosition = file.tellg();
                }
                if (foundID)
                {
                    file.seekp(idPosition);
                    file << "{\n";
                    file << "    Name: " << "Ab" << "\n";
                    file << "    Surname: " << "Ba" << "\n";
                    file << "    Age: " << "22" << "\n" << "}" << "\n\n";
                    break;
                }
            }
        }
        file.close();
    }
    // This works
    void DisplayStudent()
    {
        printf("%s", "Please input Student_ID: ");
        scanf_s("%d", &Student_ID);

        std::fstream file(Student_DB, std::ios::in | std::ios::out);

        if (file.is_open())
        {
            std::string line;
            bool foundID = false;
            std::streampos idPosition;

            while (std::getline(file, line))
            {
                if (line.find("ID: " + std::to_string(Student_ID)) != std::string::npos)
                {
                    foundID = true;
                    idPosition = file.tellg();
                }
                if (foundID)
                {
                    printf("%s%d", "ID: ", Student_ID);
                    file.seekp(idPosition);
                    while (std::getline(file, line))
                    {
                        printf("\n%s", line.c_str());

                        if (line.find("}") != std::string::npos)
                        {
                            break;
                        }
                    }
                    break;
                }
            }
        }
        file.close();
    }

    void RemoveStudent()
    {
        // I don't wanna do this no more
    }
};

int main(int argc, char** argv[])
{
    creator c;
    c.Init();

    return 0;
}
