#pragma once
#ifndef REMOVE_H
#define REMOVE_H

#include <iostream>
#include <string>
#include <fstream>

class Remove_File
{
private:
    std::string m_Remove_File_Name;
    std::string m_Remove_File_Path;
    std::string m_Remove_File_Absolute = m_Remove_File_Path + "\\" + m_Remove_File_Name;
public:
    void RemoveFile();
};

#endif