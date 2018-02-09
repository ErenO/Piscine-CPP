/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 11:41:13 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/04 19:19:36 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"

class ZombieHorde {

public:

    ZombieHorde(int N);
    ~ZombieHorde(void);

    void setName();
    void announce(int N);
    std::string randomChump();
    void setZombieAttr(int N);
private:
    Zombie *_horde;
};

#endif
