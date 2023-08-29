

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	std::cout << "DiamondTrap constructor called for " << _name << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap constructor called for " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), FragTrap(src), ScavTrap(src){
	*this = src;
	std::cout << "DiamondTrap constructor called for " << _name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &src){
	ClapTrap::operator=(src);
	return (*this);
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name){
	_name = name;
	std::cout << "DiamondTrap constructor called for " << _name << std::endl;
	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;
}

std::string DiamondTrap::getDiamondName(void){
	return (_name);
} 

void DiamondTrap::whoAmI(){
	std::cout << "DiamondTrap " << _name << " is thinking about existence.." << std::endl;
}
