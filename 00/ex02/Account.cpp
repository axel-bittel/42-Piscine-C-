/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:32:41 by abittel           #+#    #+#             */
/*   Updated: 2022/04/22 19:05:26 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits" << Account::_totalNbDeposits << ";withdrawls:"<< Account::_totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit ) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	Account::_displayTimestamp();
	Account::_nbAccounts = Account::_nbAccounts + 1;
	Account::_totalAmount += initial_deposit;
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}
Account::Account( void ): _accountIndex(_nbAccounts), _amount(0), _nbDeposits(0), _nbWithdrawals(0) {
	Account::_displayTimestamp();
	Account::_nbAccounts = (Account::_nbAccounts + 1);
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}
Account::~Account( void ) 
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
	Account::_nbAccounts--;
	Account::_totalAmount -= checkAmount();
}

void	Account::makeDeposit( int deposit )
{
	int	p_amount = _amount;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount << ";deposits:" << deposit << ";amount:" << _amount << ";nbDeposit:" << _nbDeposits <<std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	int	p_amount = _amount;
	Account::_displayTimestamp();
	if (_amount >= withdrawal)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nbDeposit:" << _nbDeposits <<std::endl;
		return (true);
	}
	else
		std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:refused"<< std::endl;
	return (false);
}
int		Account::checkAmount( void ) const
{
	return (this->_amount);
}
void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawls:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::cout << "[" << std::time(0) << "]";
}
