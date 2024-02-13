/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:35:26 by palucena          #+#    #+#             */
/*   Updated: 2024/02/13 11:10:16 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	subjectA("Bully");
	ClapTrap	subjectB("Nerd");

	subjectA.setAttackDamage(2000);
	subjectA.attack("Nerd");
	subjectB.takeDamage(subjectA.getAttackDamage());
	return 0;
}
