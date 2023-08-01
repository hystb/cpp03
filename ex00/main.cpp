/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:04:20 by nmilan            #+#    #+#             */
/*   Updated: 2023/08/01 17:37:19 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap tony("tony");
	tony.takeDamage(9);
	tony.attack("tony2");
	tony.beRepaired(5);
	tony.takeDamage(9);
	tony.beRepaired(5);
	tony.attack("tony2");
	tony.attack("tony2");
	tony.attack("tony2");
	tony.attack("tony2");
	tony.attack("tony2");
	tony.attack("tony2");
	tony.attack("tony2");
	tony.attack("tony2");
	tony.attack("tony2");
	tony.attack("tony2");
	tony.attack("tony2");
	tony.attack("tony2");
	tony.attack("tony2");
	return 0;
}
