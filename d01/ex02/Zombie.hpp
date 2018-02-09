/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 09:42:20 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/04 19:13:44 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {

public:
    //constructor
    Zombie(void);
    //destructor
    ~Zombie(void);
    void announce();
    void setType(std::string type);
    void setName(std::string name);

private:
    std::string _name;
    std::string _type;
};

#endif
