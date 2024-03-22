/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 09:44:51 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/03/22 09:59:58 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BITCOINEXCHANGE_HPP__ 
#define __BITCOINEXCHANGE_HPP__
#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <istream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <ctime>

class BitcoinExchange
{
private:
   std::map<std::string,float> data;
public:
    BitcoinExchange(void);
    BitcoinExchange(const BitcoinExchange &);
    BitcoinExchange& operator=(const BitcoinExchange &);
    ~BitcoinExchange();
    
    void run(const char *);
};
//Error: invalid file format
#endif