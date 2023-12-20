/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:07:17 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/20 04:42:14 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

class Class1{
    int var1;
    int var2;
    int var3;
    public :
    Class1(int va1) : var1(va1){}
    int getvar1(){return var1;}
    int getvar2(){return var2;}
    int getvar3(){return var3;}
};
#include <iostream>
#include <bitset>

int main() {
    // Assume you have an integer value
       float floatValue = 1.5; // Replace this with your float value

    // Interpret the bits of the float value as an integer
    std::bitset<sizeof(float) * 8> bits(*reinterpret_cast<unsigned long*>(&floatValue));

    // Display the binary representation
    std::cout << "Binary representation of " << floatValue << ": " << bits << std::endl;

    return 0;
}
