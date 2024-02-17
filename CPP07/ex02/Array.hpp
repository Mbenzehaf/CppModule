/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:28:25 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/17 17:11:16 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
template <class T>

class Array
{
private:
    T *arr;
    unsigned int _size;
public:
    Array(void);
    Array(unsigned int&);
    Array(const Array & other);
    Array& operator=(const Array & other);
    T& operator[](const int &);
    unsigned int size();
    ~Array(void);
};

template <class T>
Array<T>::Array():arr(NULL),_size(0)
{
    //std::cout << "Array Default constructor called" << std::endl;
}

template <class T>
Array<T>::Array(unsigned int size):arr(new T[size]),_size(size)
{
    //std::cout << "Array parameterized constructor called" << std::endl;
}

template <class T>
Array<T>::Array(const Array& other)
{
    this->arr = new T[other._size];
    this->_size = other._size;
    for(unsigned int i = 0 ; i < other._size ; i++)
    {
        this->arr[i] = other.arr[i];
    }
}

template <class T>
Array<T>& Array<T>::operator=(const Array & other)
{
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

template <class T>
T& Array<T>::operator[](const int& index)
{
    if(index < 0 || index >=static_cast<int>(_size))
    {
        throw std::out_of_range("error : Array index out of range");
    }
    return (arr[index]);
}
template <class T>
unsigned int Array<T>::size(void)
{
    return (_size);    
}

template <class T>
Array<T>::~Array()
{
    if(arr)
    {
        delete[] arr;
    }
}