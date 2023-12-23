/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 04:27:39 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/23 17:46:47 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"
template <typename T>
std::string strbit(T n)
{
    std::string str;

    for(unsigned int i = 1; i <= (sizeof(int) * 8);i++)
    {
        if(1 & (n >> (sizeof(int) * 8 - i)) )
            str.append("1");
        else
            str.append("0");
    }
    return (str);
}
#include <cmath>
class A{
    int x;
    std::string std;
public:
    A(void):x(0){std::cout << "Default constructor"<< std::endl;}
    A(int newx):x(newx){std::cout << "constructor"<< std::endl;}
    const int &getx(void) const { return this->x;}
    void setx(int x){this->x = x;}
    // A& operator=(const A&);
    A& operator=(int &n)
    {
        this->x = n;
        return (*this);
    }
    A& operator=(const std::string & std)
    {
        this->std = std;
        return (*this);
    }
    A operator++()
    {
        ++this->x;
        return (*this);
    }
    A operator++(int)
    {
        A temp = *this;
        ++this->x;
        return (temp);
    }
    A operator--()
    {
        ++this->x;
        return (*this);
    }
    A operator--(int)
    {
        A temp = *this;
        --this->x;
        return (temp);
    }
     bool operator==(const A& b)
    {
        return (this->x == b.x);
    }
    void operator=(const A&b)
    {

        this->x = b.x;
        //std::cout << "&this : " << &this->x << "&b" << &b.x <<std::endl;
        //std::cout << "b : " <<b.getx() << "&b" << &b.getx() <<std::endl;
    }
};

// A& A::operator=(const A&b)
// {
//     this->x = b.x;
//     return (*this);
// }
std::ostream& operator<<(std::ostream &o, const A& a)
{
    o << a.getx();
    return (o);
}
int main(void)
{
    A a(10);
    A b ;

    b = a;
  // a = "moahmmed"; 
    //a = A(5);

    // std::cout << "a : " <<a.getx() << "&a"  <<std::endl;
    // std::cout << "b : " <<b.getx() << "&b" <<std::endl;

    // std::string str = "yassir";
    // std::string &rfh = str;
    // std::cout << &str << std::endl;
    // std::cout << &rfh << std::endl;
    // str = "simo";
    // std::cout << str << std::endl;
    // std::cout << rfh << std::endl;
    int i,j;
    i = 3;
    j = 6;
     std::cout << &j  << std::endl;
     i = 0;
    std::cout << "j = i:" << (j/0) << std::endl;

}

//float x = 5.99f;
//std::cout << "Binary representation of " << a << "  : " << roundf(x) << std::endl;
//     C1 a;
//     C1 b(a);
//    C1 c ;
// Assume you have an integer value
//        float floatValue = 1; // Replace this with your float value

//     // Interpret the bits of the float value as an integer
//     std::bitset<sizeof(float) * 8> bits(*reinterpret_cast<unsigned long*>(&floatValue));

//     // Display the binary representation
//     std::cout << "Binary representation of " << floatValue << ": " << bits << std::endl;
   
// // int n = 1.5 * (1 << 8);
// // std::cout <<"n :"<< n;


//   int integerPart = 5;
//     int fractionalPart = 128; // Example fractional value (8 bits)

//     // Combine the integer and fractional parts into a single integer (assuming 8 fractional bits)
//     int fixedPointValue = (integerPart << 8) | fractionalPart;

//     // Interpret the bits of the fixed-point value as an integer
//     std::bitset<sizeof(int) * 8> bits(fixedPointValue);

//     // Display the binary representation
//     std::cout << "Binary representation of fixed-point value: " << bits << std::endl;

//     return (0);
//}

//  0 01111111 00000000000000000000000
//  0 01111111 10000000000000000000000
//  0 10000111 10000000000000000000000
    // // Assume you have an integer value
    //    float floatValue = 1.5; // Replace this with your float value

    // // Interpret the bits of the float value as an integer
    // std::bitset<sizeof(float) * 8> bits(*reinterpret_cast<unsigned long*>(&floatValue));

    // // Display the binary representation
    // std::cout << "Binary representation of " << floatValue << ": " << bits << std::endl;
   