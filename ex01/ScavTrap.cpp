/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:37:32 by nmilan            #+#    #+#             */
/*   Updated: 2023/08/03 15:49:55 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap constructor called for " << _name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap constructor called for " << _name << std::endl;
}


ScavTrap& ScavTrap::operator=(const ScavTrap &src){
	ClapTrap::operator=(src);
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src.getName()){
	*this = src;
	std::cout << "ScavTrap constructor by copy called for " << _name << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called for " << _name << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << _name << " entered Gate keeper mode !" << std::endl;
}
