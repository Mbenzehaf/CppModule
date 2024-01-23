/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 04:48:16 by mben-zeh          #+#    #+#             */
/*   Updated: 2024/01/22 05:11:26 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
class Brain
{
private:
    std::string ideas[100];
public:
    Brain(void);
    Brain(const Brain &);
    Brain &operator=(const Brain &);
    ~Brain();
};
