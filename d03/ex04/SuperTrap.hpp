/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 15:10:10 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/05 18:22:40 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include <iostream>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

public:
    SuperTrap(void);
    SuperTrap(std::string name);
    SuperTrap(SuperTrap const & src);
    ~SuperTrap(void);

    using FragTrap::rangedAttack;
    using NinjaTrap::meleeAttckDmg;

    using FragTrap::getHitPts;
    using FragTrap::getMaxHitPts;
    using NinjaTrap::getNrjPts;
    using FragTrap::getArmorDmgRdction;
    using FragTrap::getRgdAttack;
    using NinjaTrap::getMeleeAttackDmg;
    using NinjaTrap::getmaxNrjPts;
    SuperTrap & operator=(SuperTrap const & rhs);

private:

};

#endif
