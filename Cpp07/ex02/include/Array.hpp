/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:13:53 by palucena          #+#    #+#             */
/*   Updated: 2024/03/10 21:11:49 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array {
	private:
		T				*_data;
		unsigned int	_len;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &toCopy);
		Array	&operator=(const Array &toCopy);
		~Array();

		T	&operator[](unsigned int index);
		unsigned int	size() const;
};

template <typename T>
Array<T>::Array() : _data(NULL), _len(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]), _len(n) {}

template <typename T>
Array<T>::Array(const Array &toCopy) : _data(new T[toCopy._len]), _len(toCopy._len) {
	for (unsigned int i = 0; i < toCopy._len; ++i)
		_data[i] = toCopy._data[i];
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &toCopy) {
	if (this != &toCopy) {
		if (_data)
			delete[] _data;
		_len = toCopy._len;
		_data = new T[_len];
		for (unsigned int i = 0; i < _len; i++)
			_data[i] = toCopy._data[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array() {
	if (_data)
		delete[] _data;
}

template <typename T>
T	&Array<T>::operator[](unsigned int index) {
	if (index >= _len)
		throw (std::exception());
	return (_data[index]);
}

template <typename T>
unsigned int	Array<T>::size() const {
	return (_len);
}

#endif