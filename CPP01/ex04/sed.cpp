/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 06:38:29 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/12 08:09:36 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

// std::string Repalce(std::string &line , std::string &to_find, std::string &replace)
// {
//     std::string NewLine;
//     size_t pos_begin;
//     size_t pos_end;
//     size_t len ;

//     len = to_find.length();
//     pos_begin = 0;
//     while ((pos_end = line.find(to_find,pos_begin)) != std::string::npos)
//     {
//         NewLine.append(line.substr(pos_begin,pos_end - pos_begin).append(replace));
//         pos_begin = pos_end + len;
//     }
//     if(pos_begin < line.length())
//         NewLine.append(line.substr(pos_begin,line.length() - pos_begin));
//     return (NewLine);
// }
void sed(std::string FileName, std::string &S1, std::string &S2)
{
    std::fstream FileIn;
    std::string _FileName;
    std::string line;
    size_t pos_start;
    size_t pos_end ;

    _FileName = std::string(FileName).append(".replace");
    FileIn.open(FileName, std::ios::in);
    if (FileIn)
    {
        std::fstream FileOut(_FileName, std::ios::out);
        if (FileOut)
        {
            while (std::istream &getl = std::getline(FileIn,line))
                {
                    for(pos_start = 0;(pos_end = line.find(S1,pos_start)) != std::string::npos ; pos_start = pos_end + S1.length())
                    {
                        FileOut << line.substr(pos_start,pos_end - pos_start).append(S2);
                    }
                    if( pos_start < line.length())
                        FileOut << line.substr(pos_start,line.length() - pos_start);
                    if(!getl.eof())
                        FileOut << std::endl;
                }
            FileIn.close();
            FileOut.close();
            return ;
        }
    }
    std ::cerr << BOLDRED << ((!FileIn) ? FileName : (FileIn.close(), _FileName)) << " Error: Unable to access file;" << std ::endl;
    exit(1);
}
