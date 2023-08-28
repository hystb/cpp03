/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:04:26 by nmilan            #+#    #+#             */
/*   Updated: 2023/08/03 15:48:52 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("noname"), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "Constructor called for " << name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& src){
	_name = src.name;
	_attackDamage = src._attackDamage;
	_energyPoints = src._energyPoints;
	_hitPoints = src._hitPoints;
}

ClapTrap::ClapTrap(const ClapTrap& src){
	*this = src;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){	
	std::cout << "Constructor called for " << name << std::endl; 
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called for " << _name << std::endl; 
}

void	ClapTrap::attack(const std::string& target){
	if(_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " \
		<< _attackDamage << " points of damage!" << std::endl;
	}
	else if (_hitPoints > 0 && _energyPoints == 0)
		std::cout << "Not in of energy to make attack action." << std::endl;
	else
		std::cout << _name << " is already dead too late!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (_hitPoints == 0)
		std::cout << _name << " is already dead too late!" << std::endl;
	else
	{
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " take damage " << ", causing " \
		<< amount << " points of damage to him!" << std::endl;
		if (_hitPoints < 0)
		{
			std::cout << _name << " died." << std::endl;
			_hitPoints = 0;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount){
	if(_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " heal himself " \
		<< amount << " hit points!" << std::endl;
	}
	else if (_hitPoints > 0 && _energyPoints == 0)
		std::cout << "Not in of energy to make heal action." << std::endl;
	else
		std::cout << _name << " is already dead too late!" << std::endl;
}
