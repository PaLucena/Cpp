/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:35:26 by palucena          #+#    #+#             */
/*   Updated: 2024/02/14 13:39:47 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"
#include "../include/DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	subjectA("Paco");
	ScavTrap	Robot("KillMachine3000");
	FragTrap	subjectB("Manuel");
	DiamondTrap	subjectC("Frank");

	subjectB.highFivesGuys();
	Robot.attack("Human");
	subjectA.takeDamage(Robot.getAttackDamage());
	Robot.attack("Paco");

	subjectB.attack("Frank");
	subjectC.takeDamage(subjectB.getAttackDamage());	

	subjectB.takeDamage(Robot.getAttackDamage());
	Robot.setAttackDamage(80);
	Robot.attack("Manuel");
	subjectB.takeDamage(Robot.getAttackDamage());
	subjectB.highFivesGuys();
	subjectC.whoAmI();
	return 0;
}
