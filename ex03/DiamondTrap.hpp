#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap :public FragTrap, public ScavTrap
{
private:
	std::string _name;

public:
	DiamondTrap(void);
	~DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &parent);
	DiamondTrap& operator=(const DiamondTrap &parent);

	std::string getDiamondName(void);
	void whoAmI();
};

#endif
