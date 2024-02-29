/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 09:44:29 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/02/29 04:01:12 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <algorithm>
#include <iterator>
#include <list>

//what is Container
/*==>Containers in C++ are data structures that store 
 and organize multiple elements or objects.
 container:
 Sequence Containers:

std::vector: Dynamic array.
std::deque: Double-ended queue.
std::list: Doubly-linked list.
std::forward_list: Singly-linked list.
std::array: Fixed-size array.

Associative Containers:

std::set: Sorted set of unique keys.
std::multiset: Sorted multiset of keys.
std::map: Sorted key-value pairs.
std::multimap: Sorted multimap of key-value pairs.

Unordered Containers:

std::unordered_set: Unordered set of unique keys.
std::unordered_multiset: Unordered multiset of keys.
std::unordered_map: Unordered key-value pairs.
std::unordered_multimap: Unordered multimap of key-value pairs.
 
*/
 
//waht is iterator
/*
An iterator in C++ is a tool that helps you move through the elements of a container,
allowing you to access and manipulate them.
it's like a pointer that points to elements within the container, 
enabling you to iterate over them in a predictable order.
*/
int main(void)
{

    try
    {
        std::cout << "-------------vector----------" << std::endl;
        std::vector<int> _vector;
        for(int i = 0; i <5 ; i++)
        {
            _vector.push_back(i);   
        }        
        easyfind(_vector,4);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
     try
    {
        std::cout << "-------------deque----------" << std::endl;
        std::deque<int> _deque;
        for(int i = 0; i <5 ; i++)
        {
            _deque.push_back(i);   
        }        
        easyfind(_deque,4);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}

//   "Value " << value_to_find << " found in the container.\n";
//   "Value " << value_to_find << " not found in the container.\n";