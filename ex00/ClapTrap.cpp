/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:04:26 by nmilan            #+#    #+#             */
/*   Updated: 2023/07/13 15:53:07 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){	
	std::cout << "Constructor called for " << name << std::endl; 
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called for " << _name << std::endl; 
}

void	ClapTrap::attack(const std::string& target){
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << "points of damage!" << std::endl;
}

