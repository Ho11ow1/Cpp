#pragma once
#ifndef SORT_H
#define SORT_H

#include <vector>

namespace single_val
{
    std::vector<uint32_t> sort(std::vector<uint32_t>& vec)
    {
        for (int i = 0; i < vec.size(); i++)
        {
            int num = vec[i];

            for (int j = i + 1; j < vec.size(); j++)
            {
                if (vec[i] > vec[j])
                {
                    std::swap(vec[i], vec[j]);
                }
            }
        }

        return vec;
    }

    std::vector<int> sort(std::vector<int>& vec)
    {
        for (int i = 0; i < vec.size(); i++)
        {
            int num = vec[i];

            for (int j = i + 1; j < vec.size(); j++)
            {
                if (vec[i] > vec[j])
                {
                    std::swap(vec[i], vec[j]);
                }
            }
        }

        return vec;
    }

    std::vector<double> sort(std::vector<double>& vec)
    {
        for (int i = 0; i < vec.size(); i++)
        {
            int num = vec[i];

            for (int j = i + 1; j < vec.size(); j++)
            {
                if (vec[i] > vec[j])
                {
                    std::swap(vec[i], vec[j]);
                }
            }
        }

        return vec;
    }

    std::vector<char> sort(std::vector<char>& vec)
    {
        for (int i = 0; i < vec.size(); i++)
        {
            int num = vec[i];

            for (int j = i + 1; j < vec.size(); j++)
            {
                if (vec[i] > vec[j])
                {
                    std::swap(vec[i], vec[j]);
                }
            }
        }

        return vec;
    }
}

#endif
