/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:35:26 by palucena          #+#    #+#             */
/*   Updated: 2024/02/13 15:31:34 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int	main(void)
{
	ClapTrap	subjectA("Human");
	ScavTrap	Robot("KillMachine3000");
	FragTrap	subjectB("Manuel");

	subjectB.highFivesGuys();
	Robot.attack("Human");
	subjectA.takeDamage(Robot.getAttackDamage());
	Robot.attack("Manuel");
	subjectB.takeDamage(Robot.getAttackDamage());
	Robot.setAttackDamage(80);
	Robot.attack("Manuel");
	subjectB.takeDamage(Robot.getAttackDamage());
	subjectB.highFivesGuys();
	return 0;
}
