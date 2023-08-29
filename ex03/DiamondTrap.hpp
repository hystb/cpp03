#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap :virtual public FragTrap, virtual public ScavTrap
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
