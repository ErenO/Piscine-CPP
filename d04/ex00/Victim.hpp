/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 10:34:39 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 12:36:03 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>

class Victim {
public:

    Victim(void);
    Victim(Victim const & src);
    Victim(std::string name);

    virtual ~Victim(void);

    std::string getName() const;
    void intro() const;
    virtual void getPolymorphed() const;

    Victim & operator=(Victim const & rhs);
protected:
    std::string _name;
};

std::ostream	&operator<<(std::ostream &o, Victim const &i);

#endif
