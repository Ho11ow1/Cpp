#pragma once
#ifndef EDIT_H
#define EDIT_H

#include <iostream>
#include <string>
#include <fstream>

class Edit_File
{
private:
    std::string m_Edit_File_Name;
    std::string m_Edit_File_Path;
    std::string m_Edit_File_Absolute = m_Edit_File_Path + "\\" + m_Edit_File_Name;

    std::string m_file_string;

    uint32_t m_file_option;

private:
    void m_input();
public:
    void EditFile();
};

#endif