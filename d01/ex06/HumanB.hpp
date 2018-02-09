/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 16:04:37 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/03 18:11:28 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB {

public:
    std::string str;
    Weapon *weapon;

    HumanB(std::string str);
    ~HumanB(void);
    void setWeapon(Weapon &weapon);
    void attack() const;
    void setType(std::string str);

private:

};

#endif
