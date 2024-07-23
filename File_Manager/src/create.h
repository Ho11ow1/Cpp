#pragma once
#ifndef CREATE_H
#define CREATE_H

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

class Create_File
{
private:
    std::string m_Create_File_Name;
    std::string m_Create_File_Path;
    std::string m_Create_File_Absolute;
    char dot = '.';
public:
    void CreateFile();
};

#endif