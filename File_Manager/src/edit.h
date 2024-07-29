#pragma once
#ifndef EDIT_H
#define EDIT_H

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

class Edit_File
{
private:
    std::string m_Edit_File_Name;
    std::string m_Edit_File_Path;
    std::string m_Edit_File_Absolute;

    std::string m_file_string;

    uint32_t m_file_option;

public:
    void EditFile();
};

#endif