#pragma once
#ifndef CREATE_H
#define CREATE_H

#include <iostream>
#include <string>
#include <fstream>

class Create_File
{
private:
    std::string m_Create_File_Name;
    std::string m_Create_File_Path;
    std::string m_Create_File_Absolute = m_Create_File_Path + "\\" + m_Create_File_Name;
    char dot = '.';
public:
    void CreateFile();
};

#endif