/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:04:23 by nmilan            #+#    #+#             */
/*   Updated: 2023/07/13 14:12:35 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
private:
		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
public:
	ClapTrap(std::string name);
	~ClapTrap();
};

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){	
	std::cout << "Constructor called for " << name << std::endl; 
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called for " << _name << std::endl; 
}

