/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:01:38 by palucena          #+#    #+#             */
/*   Updated: 2023/12/19 19:16:50 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

/* Account::Account(int initial_deposit)
{
	
} */

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

/* void	Account::displayAccountsInfos(void)
{
	
} */
