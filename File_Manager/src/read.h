#pragma once
#ifndef READ_H
#define READ_H

#include <iostream>
#include <string>
#include <fstream>

class Read_File
{
private:
    std::string m_Read_File_Name;
    std::string m_Read_File_Path;
    std::string m_Read_File_Absolute = m_Read_File_Path + "\\" + m_Read_File_Name;

    std::string file_line;

public:
    void ReadFile();
};

#endif