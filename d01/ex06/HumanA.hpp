/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 16:07:22 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/03 18:08:24 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanA {

public:
    std::string str;
    Weapon &weapon;

    HumanA(std::string str, Weapon &weapon);
    ~HumanA(void);
    void attack() const;
    void setType(std::string str);

private:

};

#endif
