/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:59:11 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/08 00:08:18 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
Account :: Account( int initial_deposit )
{
    this->_amount = initial_deposit;
    this->_accountIndex = _nbAccounts;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount<<";created"<<std::endl;
    this->_nbAccounts++;
    this->_totalAmount += initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
}
Account :: ~Account(void)
{
    _displayTimestamp();
    std::cout << "index:"<< this->_accountIndex<<";amount:"<< this->_amount << ";closed"<<std::endl;
    this->_nbAccounts--;
    this->_totalAmount -= this->_amount; 
}
void	Account::makeDeposit( int deposit )
{
    if(deposit > 0)
        {
            _displayTimestamp();
           std::cout << "index:"<< this->_accountIndex <<";p_amount:"<<this->_amount<<";deposit:"<<deposit;
            this->_amount += deposit;
            this->_totalAmount += deposit;
            this->_nbDeposits++;
            this->_totalNbDeposits++;
            std :: cout <<";amount:"<<this->_amount<<";nb_deposits:"<<this->_nbDeposits<<std::endl;
        }
}
 bool	Account::makeWithdrawal( int withdrawal )
 {
    _displayTimestamp();
    std::cout << "index:"<< this->_accountIndex <<";p_amount:"<<this->_amount;
    if(withdrawal >= 0 && withdrawal <= this->_amount)
    {
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
        this->_totalNbWithdrawals++;
        this->_totalAmount -= withdrawal;
        std::cout <<";withdrawal:"<<withdrawal<<";amount:" << this->_amount<< ";nb_withdrawals:"<< this->_nbWithdrawals<<std::endl;
        return (1);
    }
    std::cout <<";withdrawal:refused"<<std::endl;
    return (0);
}

void	Account::_displayTimestamp(void)
{
   // tm *tim;
    time_t currentTime;
    currentTime = std :: time(NULL);
   tm *ltime = localtime(&currentTime);
   std::cout << "[" << ltime->tm_year + 1900;
   std::cout << std::setfill('0')<<std::setw(2)<<ltime->tm_mon;
   std::cout << std::setfill('0')<<std::setw(2)<<ltime->tm_mday<<"_";
   std::cout << std::setfill('0')<<std::setw(2)<<ltime->tm_hour;
   std::cout << std::setfill('0')<<std::setw(2)<<ltime->tm_min;
   std::cout << std::setfill('0')<<std::setw(2)<<ltime->tm_sec<<"] ";
}
int		Account::checkAmount( void ) const
{
    return (this->_amount);
}
int	Account::getNbAccounts(void)
{
    return (_nbAccounts);
}
int	Account::getTotalAmount(void)
{
    return (_totalAmount);
}
int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}
int	Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}
void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount ;
    std::cout << ";deposits:" <<_totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}
void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout <<"index:" << this->_accountIndex << ";amount:"<< this->_amount <<";deposits:"<<this->_nbDeposits<<";withdrawals:"<<this->_nbWithdrawals<<std::endl;
}
// static int	_nbAccounts;
// 	static int	_totalAmount;
// 	static int	_totalNbDeposits;
// 	static int	_totalNbWithdrawals;

// 	static void	_displayTimestamp( void );

// 	int				_accountIndex;
// 	int				_amount;
// 	int				_nbDeposits;
// 	int				_nbWithdrawals;

// 	Account( void );


// Account( int initial_deposit );
// ~Account( void );
// void	makeDeposit( int deposit );
// bool	makeWithdrawal( int withdrawal );
// int		checkAmount( void ) const;
// void	displayStatus( void ) const;
