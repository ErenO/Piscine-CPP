/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 15:55:52 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/03 18:06:11 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {

public:
    //attributes
    std::string type;

    Weapon(std::string str);
    ~Weapon(void);
    std::string const & getType();
    void setType(std::string str);

private:

};

#endif
