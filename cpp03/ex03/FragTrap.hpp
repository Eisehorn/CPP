#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include "ClapTrap.hpp"
#endif

class FragTrap : virtual public ClapTrap{
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        void highFivesGuys(void);
        void	attack(const std::string& target);
};