/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:01:38 by palucena          #+#    #+#             */
/*   Updated: 2023/12/22 18:55:07 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals= 0;

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_totalNbDeposits = 0;
	this->_totalNbWithdrawals = 0;
	this->_accountIndex = this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
}

void	Account::displayStatus(void) const
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount << ";withdrawal:";
	if (this->_amount - withdrawal < 0)
	{
		std::cout << "refused" << std::endl;
		return (0);
	}
	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
	std::cout << withdrawal << ";amount:" << this->_amount;
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (1);
}

void	Account::_displayTimestamp(void)
{
	time_t	now = time(NULL);
	tm		*localTime = localtime(&now);

	std::cout << "[" << 1900 + localTime->tm_year;
	localTime->tm_mon < 9 ? std::cout << "0" << localTime->tm_mday : std::cout << localTime->tm_mon + 1;
	localTime->tm_mday < 10 ? std::cout << "0" << localTime->tm_mday : std::cout << localTime->tm_mday;
	std::cout << "_";
	localTime->tm_hour < 9 ? std::cout << "0"<< localTime->tm_hour : std::cout << localTime->tm_hour;
	localTime->tm_min < 9 ? std::cout << "0" << localTime->tm_min : std::cout << localTime->tm_min;
	localTime->tm_sec < 9 ? std::cout << "0" << localTime->tm_sec : std::cout << localTime->tm_sec;
	std::cout << "]";
}

Account::~Account()
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount << ";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}
