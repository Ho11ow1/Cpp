#pragma once
#ifndef REMOVE_H
#define REMOVE_H

#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>
#include <algorithm>

class Remove_File
{
private:
    std::string m_Remove_File_Name;
    std::string m_Remove_File_Path;
    std::string m_Remove_File_Absolute;
public:
    void RemoveFile();
};

#endif