/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 06:38:29 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/06 04:01:30 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void sed(std::string FileName, std::string S1, std::string S2)
{
    std::ifstream FileIn;
    std::string _FileName;
    std::string line;
    size_t pos_start;
    size_t pos_end ;

    _FileName = std::string(FileName).append(".replace");
    FileIn.open(FileName, std::ios::in);
    if (FileIn)
    {
        std::ofstream FileOut(_FileName, std::ios::out);
        if (FileOut)
        {
            while (std::istream &getl = std::getline(FileIn,line))
                {
                    for(pos_start = 0;((pos_end = line.find(S1,pos_start)) != std::string::npos) && S1.length(); pos_start = pos_end + S1.length())
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
