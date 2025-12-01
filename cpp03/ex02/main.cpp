#include "FragTrap.hpp"

int main()
{
    ClapTrap a("Bot 1");
    ScavTrap b("Bot 2");
    FragTrap c("Bot 3");

    a.attack("Bot a");
    a.takeDamage(5);
    a.beRepaired(10);
    std::cout << "---------------------------------------------" << std::endl;
    b.attack("Bot b");
    b.takeDamage(5);
    b.beRepaired(10);
    b.guardGate();
    std::cout << "---------------------------------------------" << std::endl;
    c.attack("Bot c");
    c.takeDamage(5);
    c.beRepaired(10);
    c.highFivesGuys();
}
