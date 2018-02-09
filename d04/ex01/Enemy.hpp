/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:26:16 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 15:42:18 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>

class Enemy {

protected:
    int hp;
    std::string type;

public:
    Enemy();
    Enemy(Enemy const & src);
    Enemy(int hp, std::string const & type);
    virtual ~Enemy();
    std::string getType() const; //[...]
    int getHP() const;
    virtual void takeDamage(int dmg);
    Enemy & operator=(Enemy const & rhs);
};

#endif
