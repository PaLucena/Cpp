/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:35:26 by palucena          #+#    #+#             */
/*   Updated: 2024/02/13 13:31:44 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int	main(void)
{
	ScavTrap	Robot("KillMachine3000");
	ClapTrap	subjectA("Human");

	Robot.attack("Human");
	subjectA.takeDamage(Robot.getAttackDamage());
	return 0;
}
