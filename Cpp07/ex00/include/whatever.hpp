/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:10:40 by palucena          #+#    #+#             */
/*   Updated: 2024/03/08 17:40:10 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>


template <class T>
void	swap(T &a, T &b) {
	T	aux = a;
	a = b;
	b = aux;
}

template <class T>
T &max(T &a, T &b) {
	return (a > b ? a : b);
}

template <class T>
T	&min(T &a, T &b) {
	return (a < b ? a : b);
}

#endif