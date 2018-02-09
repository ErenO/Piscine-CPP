/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 08:56:46 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/05 22:03:46 by eren_ozdek       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>

class FragTrap {

public:
    FragTrap(void);
    FragTrap(FragTrap const & src);
    FragTrap(std::string name);
    ~FragTrap(void);
    static std::string random[5];

    int getHitPts();
    int getMaxHitPts();
    int getNrjPts();
    int getmaxNrjPts();
    int getLevel();
    std::string getName();
    int getMeleeAttackDmg();
    int getRgdAttack();
    int getArmorDmgRdction();

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const & target);
    FragTrap & operator=(FragTrap const & rhs);

private:
    int _hitPts;
    int _maxHitPts;
    int _nrjPts;
    int _maxNrjPts;
    int _level;
    std::string _name;
    int _meleeAttckDmg;
    int _rgAttackDmg;
    int _armorDmgRdction;
};

#endif
