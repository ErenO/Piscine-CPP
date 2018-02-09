/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 12:51:56 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/05 18:14:12 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {

public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const & src);
    ~ClapTrap(void);

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

    ClapTrap & operator=(ClapTrap const & rhs);

protected:
    int hitPts;
    int maxHitPts;
    int nrjPts;
    int maxNrjPts;
    int level;
    std::string name;
    int meleeAttckDmg;
    int rgAttackDmg;
    int armorDmgRdction;

private:

};

#endif
