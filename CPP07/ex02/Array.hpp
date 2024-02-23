/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:28:25 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/21 19:41:31 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>

template <typename T>
class Array
{
private:
    T *arr;
    unsigned int _size;
public:
    Array(void);
    Array(unsigned int);
    Array(const Array & other);
    Array& operator=(const Array & other);
    T& operator[](const int &) const;
    unsigned int size();
    ~Array(void);
};

template <typename T>
Array<T>::Array():arr(NULL),_size(0)
{
    //std::cout << "Array Default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int size):arr(new T[size]()),_size(size)
{
    //std::cout << "Array parameterized constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(const Array& other)
{
    this->arr = new T[other._size];
    this->_size = other._size;
    for(unsigned int i = 0 ; i < other._size ; i++)
    {
        this->arr[i] = other.arr[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array & other)
{
    std::cout << "ooool"<<std::endl;
    if(&other != this)
    {
        if(arr)
        {
            delete[] arr;
        }
        arr = new T[other._size];
        _size = other._size;
    for(unsigned int i = 0 ; (other.arr) && i < _size ; i++)
    {
    this->arr[i] = other.arr[i];
    }
    }
    return (*this);    
}

template <typename T>
T& Array<T>::operator[](const int& index) const
{
    if(index < 0 || index >=static_cast<int>(_size))
    {
        throw std::out_of_range("Error : Index out of bounds");
    }
    return (arr[index]);
}


template <typename T>
unsigned int Array<T>::size(void)
{
    return (_size);    
}

template <typename T>
Array<T>::~Array()
{
    if(arr)
    {
        delete[] arr;
    }
}