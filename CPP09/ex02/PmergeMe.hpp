/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 09:43:31 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/03/22 09:55:06 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __PMERGEME_HPP__
#define __PMERGEME_HPP__
#include <iostream>
#include <utility>
#include <vector>
#include <deque>
#include <sstream>
#include <algorithm>
typedef std::vector<std::pair<int,int> > P_vector;
typedef std::deque<std::pair<int,int> > P_deque;

//template <typename _container>
class PmergeMe
{
private:
    std::vector<int> vec;
    std::deque<int> deque;
public:
    PmergeMe(void);
    PmergeMe(const PmergeMe&other);
    PmergeMe& operator=(const PmergeMe&other);
    ~PmergeMe();
    void execution(char **);
    //vector
    void pairwiseComparison(P_vector &,int);
    void mergeInsertionSort(P_vector & ,int,int);
    void binaryInsertionSort(P_vector &,int);
    //deque
    void pairwiseComparison(P_deque &,int);
    void mergeInsertionSort(P_deque & ,int,int);
    void binaryInsertionSort(P_deque &,int);
    
};
std::ostream &operator<<(std::ostream &,std::vector<int>);
std::ostream &operator<<(std::ostream &,std::deque<int>);

#endif