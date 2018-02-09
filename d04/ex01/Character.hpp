/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:29:09 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 16:31:36 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character
{
        private:
                //[...]
                std::string _name;
                int _AP;
                AWeapon *_weapon;
        public:
                Character();
                Character(Character const & src);
                Character(std::string const & name);
                //[...]
                ~Character();
                void recoverAP();
                void equip(AWeapon *weapon);
                void attack(Enemy *target);
                int getAP() const;
                std::string /*[...]*/ getName() const;
                std::string getWeponName() const;
                Character & operator=(Character const & rhs);
};
std::ostream	&operator<<(std::ostream &o, Character const &i);
#endif
