/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:24:33 by palucena          #+#    #+#             */
/*   Updated: 2024/03/08 12:58:18 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

class	Data {
	private:
		int	_data;
	public:
		Data();
		Data(int nb);
		Data(const Data &toCopy);
		Data	&operator=(const Data &toCopy);
		int		getData();
		~Data();
};

#endif