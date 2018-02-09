/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 08:56:46 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/05 22:20:21 by eren_ozdek       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
# define ScavTrap_HPP
# include <iostream>

class ScavTrap {

public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & src); 
    ~ScavTrap(void);
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
    void challengeNewcomer(std::string const & target);
    ScavTrap & operator=(ScavTrap const & rhs);

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
