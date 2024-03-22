/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 09:43:49 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/03/22 10:11:48 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
    
}

bool isNumber(char *data)
{
    size_t i;

    i = 0;
    if (!data || !*data)
        return (false);
    if (data[i] == '+')
        i++;
    do
    {
        if (!isdigit(data[i++]))
            return (false);
    } while (data[i]);
    return (true);
}

void insertionSort(P_vector &pair_arr, size_t begin, size_t end)
{
    for (size_t i = (begin + 1); i < end; i++)
    {
        size_t j = i;
        while (j > 0 && pair_arr[j - 1].first > pair_arr[j].first)
        {
            std::swap(pair_arr[j - 1].first, pair_arr[j].first);
            if (pair_arr[j].first < pair_arr[j].second)
            {
                std::swap(pair_arr[j].first, pair_arr[j].second);
            }
            j--;
        }
    }
}

void merge(P_vector &arr, size_t begin, size_t mid, size_t end)
{
    size_t n1 = mid - begin + 1;
    size_t n2 = end - mid;
    P_vector::iterator it_R, it_L, it_arr;

    P_vector LEFT, RIGHT;
    for (size_t i = 0; i < n1; i++)
    {
        LEFT.push_back(arr.at(begin + i));
    }
    for (size_t i = 0; i < n2; i++)
    {
        RIGHT.push_back(arr.at(mid + 1 + i));
    }
    it_R = RIGHT.begin();
    it_L = LEFT.begin();
    it_arr = arr.begin() + begin;
    while (it_R != RIGHT.end() && it_L != LEFT.end())
    {
        if (it_L->first < it_R->first)
        {
            *it_arr = *(it_L++);
        }
        else
        {
            *it_arr = *(it_R++);
        }
        it_arr++;
    }
    while (it_R != RIGHT.end())
    {
        *(it_arr++) = *(it_R++);
    }
    while (it_L != LEFT.end())
    {
        *(it_arr++) = *(it_L++);
    }
}

void merge(P_deque &arr, size_t begin, size_t mid, size_t end)
{
    size_t n1 = mid - begin + 1;
    size_t n2 = end - mid;
    P_deque::iterator it_R, it_L, it_arr;

    P_deque LEFT, RIGHT;
    for (size_t i = 0; i < n1; i++)
    {
        LEFT.push_back(arr.at(begin + i));
    }
    for (size_t i = 0; i < n2; i++)
    {
        RIGHT.push_back(arr.at(mid + 1 + i));
    }
    it_R = RIGHT.begin();
    it_L = LEFT.begin();
    it_arr = arr.begin() + begin;
    while (it_R != RIGHT.end() && it_L != LEFT.end())
    {
        if (it_L->first < it_R->first)
        {
            *it_arr = *(it_L++);
        }
        else
        {
            *it_arr = *(it_R++);
        }
        it_arr++;
    }
    while (it_R != RIGHT.end())
    {
        *(it_arr++) = *(it_R++);
    }
    while (it_L != LEFT.end())
    {
        *(it_arr++) = *(it_L++);
    }
}
void PmergeMe::mergeInsertionSort(P_vector &arr, int start, int end)
{
    int size;
    int mid;
    size = end - start + 1;
    mid = (start + end) / 2;
    if (size <= 1)
        {return;}
    mergeInsertionSort(arr, start, mid);
    mergeInsertionSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}
void PmergeMe::pairwiseComparison(P_vector &data_v,int ispair)
{
    for (size_t i = 0; i < (vec.size() - ispair); i += 2)
    {
        data_v.push_back(std::pair<int, int>(vec.at(i), vec.at(i + 1)));
        std::pair<int, int> &pair = data_v.back();
        if (data_v.back().first < data_v.back().second)
            std::swap(pair.first, pair.second);
    }
}
void PmergeMe::binaryInsertionSort(P_vector &data_v,int ispair)
{
    std::vector<int> tmp;
    for (size_t i = 0; i < data_v.size(); i++)
    {
        tmp.push_back(data_v.at(i).first);
        tmp.insert(std::lower_bound(tmp.begin(), tmp.end(), data_v[i].second), data_v.at(i).second);
    }
    if (ispair)
        tmp.insert(std::lower_bound(tmp.begin(), tmp.end(), vec.back()), vec.back());
    vec = tmp;
}



void PmergeMe::mergeInsertionSort(P_deque &arr, int start, int end)
{
    int size;
    int mid;
    size = end - start + 1;
    mid = (start + end) / 2;
    if (size <= 1)
        {return;}
    mergeInsertionSort(arr, start, mid);
    mergeInsertionSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}
void PmergeMe::pairwiseComparison(P_deque &data_v,int ispair)
{
    for (size_t i = 0; i < (vec.size() - ispair); i += 2)
    {
        data_v.push_back(std::pair<int, int>(vec.at(i), vec.at(i + 1)));
        std::pair<int, int> &pair = data_v.back();
        if (data_v.back().first < data_v.back().second)
            std::swap(pair.first, pair.second);
    }
}
void PmergeMe::binaryInsertionSort(P_deque &data_v,int ispair)
{
    std::deque<int> tmp;
    for (size_t i = 0; i < data_v.size(); i++)
    {
        tmp.push_back(data_v.at(i).first);
        tmp.insert(std::lower_bound(tmp.begin(), tmp.end(), data_v[i].second), data_v.at(i).second);
    }
    if (ispair)
        tmp.insert(std::lower_bound(tmp.begin(), tmp.end(), vec.back()), vec.back());
    deque = tmp;
}
void PmergeMe::execution(char **av)
{
    int value;
    clock_t t_req;
    P_vector data_v;
    P_deque data_d;
    std::stringstream ss;
    int ispair;
    for (size_t i = 0; av[i]; i++)
    {
        if (!isNumber(av[i]))
            throw std::runtime_error("Invalid arguments");
        ss << av[i];
        ss >> value;
        vec.push_back(value);
        deque.push_back(value);
        ss.clear();
    }

    //-----------------------vector------------------------
    std::cout << "Before:\t"  << vec << std::endl;
    ispair = vec.size() % 2 != 0;
    t_req = clock();
    pairwiseComparison(data_v,ispair);
    mergeInsertionSort(data_v, 0, data_v.size() - 1);
    binaryInsertionSort(data_v,ispair);
    std::cout << "After:\t"  << vec << std::endl;
    std::cout << "Time to process a range of "<< vec.size() << " elements with std::vector :  "<< 1000.0 * (clock() - t_req)/CLOCKS_PER_SEC <<" us" << std::endl;
     data_v.clear();
    //-----------------------deque------------------------
     t_req = clock();
    pairwiseComparison(data_d,ispair);
    mergeInsertionSort(data_d, 0, data_d.size() - 1);
    binaryInsertionSort(data_d,ispair);
    t_req = clock() - t_req;
    std::cout << "Time to process a range of "<< deque.size() << " elements with std::Deque :  "<< 1000.0 * (clock() - t_req)/CLOCKS_PER_SEC << " us"<< std::endl;
    data_d.clear();
}
PmergeMe::PmergeMe(const PmergeMe &other)
{
    *this = other;
}
PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    if (this != &other)
    {
        this->vec =other.vec;
    }
    return (*this);
}

PmergeMe::~PmergeMe()
{
}

std::ostream &operator<<(std::ostream &os, std::vector<int> v)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        os << v.at(i) << " ";
    }
    return os;
}

std::ostream &operator<<(std::ostream &os, std::deque<int> v)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        os << v.at(i) << " ";
    }
    return os;
}