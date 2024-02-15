/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:06:21 by palucena          #+#    #+#             */
/*   Updated: 2024/02/15 11:18:26 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class	Brain {
	private:
		std::string	_ideas[100];
		int			_ideaCounter;
	public:
		Brain();
		Brain(const Brain &toCopy);
		Brain	&operator=(const Brain &toCopy);
		~Brain();
		void		setIdea(const std::string str);
		std::string	getIdea(const int i);
} ;

#endif