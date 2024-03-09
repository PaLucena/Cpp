/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:13:53 by palucena          #+#    #+#             */
/*   Updated: 2024/03/09 16:58:21 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {
	private:
		T	*_data;
		int	_len;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &toCopy);
		Array	&operator=(const Array &toCopy)
		~Array();
};

template <typename T>
Array<T>::Array() : _data(NULL), _len(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _len(n) {
	for (int i = 0; i < n; i++;)
		_data[i] = new T;
}

template <typename T>
Array<T>::Array(const Array &toCopy) : _len(toCopy._len) {
	for (int i = 0; i < n; i++;) {
		_data[i] = new T;
		_data[i] = toCopy._data[i];
	}
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &toCopy) {
	if (this != &other) {
		if (_data)
			delete[] _data;
		_data = new T[toCopy._len];
		_len = toCopy._len;
		for (int i = 0; i < _len; i++;)
			_data[i] = toCopy._data[i];
	}
	return *this;
}

#endif