#pragma once
#ifndef SORT_H
#define SORT_H

#include <vector>

namespace Hollow
{
    namespace vector_sort
    {
        template<typename T>
        std::vector<T> sort(std::vector<T>& vec)
        {
            for (int i = 0; i < vec.size(); i++)
            {
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
    // Example for vector_sort
    /*void vector()
    {
        std::vector<uint32_t> nums = { 1, 7, 3, 8, 2 };

        std::vector<uint32_t> sorted = Hollow::vector_sort::sort(nums);

        for (int i = 0; i < nums.size(); i++)
        {
            printf("%d%s", sorted[i], " ");
        }
    */

    namespace type_sort
    {
        template<typename T>
        T* sort(T arr[], int &size)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = i + 1; j < size; j++)
                {
                    if (arr[i] > arr[j])
                    {
                        std::swap(arr[i], arr[j]);
                    }
                }
            }
            return arr;
        }
    }
    // Example for type_sort
    /*void type()
    {
        char arr[] = { 'a', 'c', 'f', 'b' };

        int size = sizeof(arr) / sizeof(arr[0]);

        Hollow::type_sort::sort(arr, size);

        for (int i = 0; i < size; i++)
        {
            printf("%c%s", arr[i], " ");
        }
    }
    */
}

#endif
