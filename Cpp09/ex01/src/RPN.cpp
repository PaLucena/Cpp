/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:41:51 by palucena          #+#    #+#             */
/*   Updated: 2024/03/14 16:35:35 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

RPN::RPN(): _nb(), _operators() {}

RPN::RPN(const RPN &toCopy): _nb(toCopy._nb), _operators(toCopy._operators) {}

RPN::RPN(const std::string &input) {
	for (size_t i = 0; i < input.size(); i += 2) {
		if (input[i] >= 48 && input[i] <= 57)
			_nb.push_back(static_cast<int>(input[i] - 48));
		else if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/')
			_operators.push_back(input[i]);
		else
			throw (RPN::Error());
	}
}

RPN::~RPN() {}

RPN	&RPN::operator=(const RPN &toCopy) {
	if (this != &toCopy) {
		_nb = toCopy._nb;
		_operators = toCopy._operators;
	}
	return (*this);
}

void	RPN::calculate() {
	int	result = _nb[0];

	for (size_t i = 1; i < _nb.size(); i++) {
		if (i > _operators.size())
			result *= _nb[i];
		else {
			switch (_operators[i - 1]) {
				case '+':
					result += _nb[i];
					break ;
				case '-':
					result -= _nb[i];
					break ;
				case '*':
					result *= _nb[i];
					break ;
				case '/':
					result /= _nb[i];
					break ;
			}
		}
	}
	std::cout << result << std::endl;
}
