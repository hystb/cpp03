

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void){
	std::cout << "DiamondTrap constructor called for " << _name << std::endl;
}

DiamondTrap::~DiamondTrap(void){
	std::cout << "DiamondTrap constructor called for " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &parent)
{
	*this = parent;
	std::cout << "DiamondTrap constructor called for " << _name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &parent){
	ClapTrap::operator=(src);
	return (*this);
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name){
	std::cout << "DiamondTrap constructor called for " << _name << std::endl;
	_name = name;
	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::+attackDamage = 30;
}

std::string DiamondTrap::getDiamondName(void){
	return (_name);
} 

void DiamondTrap::whoAmI(){
	std::cout << "DiamondTrap " << _name << " is thinking about existence.." << std::endl;
}
