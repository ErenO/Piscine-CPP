/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:22:09 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 15:28:20 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>

class AWeapon
{
    protected:
        std::string name;
        int dmg;
        int AP;
    private:

    public:
        AWeapon();
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(AWeapon const & src);
        virtual ~AWeapon();
        std::string getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;
        AWeapon & operator=(AWeapon const & rhs);
};

#endif
