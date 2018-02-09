/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 09:47:00 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/04 19:16:34 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"

class ZombieEvent {

public:

    ZombieEvent(void);
    ~ZombieEvent(void);

    void setZombieType(std::string t);
    Zombie* newZombie(std::string name);
    Zombie* randomChump(void);

private:
    std::string _type;

};


#endif
