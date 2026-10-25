/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 15:39:20 by matmagal          #+#    #+#             */
/*   Updated: 2026/10/01 22:47:39 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <ostream>

class Fixed {
	private:
		int	_rawBits;
		static const int	_fractionalBits = 8;
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& copy);
		~Fixed();

		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		bool operator<(const Fixed& value) const;
		bool operator>(const Fixed& value) const;
		bool operator<=(const Fixed& value) const;
		bool operator>=(const Fixed& value) const;
		bool operator==(const Fixed& value) const;
		bool operator!=(const Fixed& value) const;

		Fixed operator+(const Fixed& value) const;
		Fixed operator-(const Fixed& value) const;
		Fixed operator*(const Fixed& value) const;
		Fixed operator/(const Fixed& value) const;

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		static Fixed& min(Fixed& value1, Fixed& value2);
		static const Fixed& min(const Fixed& value1, const Fixed& value2);
		static Fixed& max(Fixed& value1, Fixed& value2);
		static const Fixed& max(const Fixed& value1, const Fixed& value2);
};

std::ostream& operator<<(std::ostream& out, const Fixed& value);

#endif
