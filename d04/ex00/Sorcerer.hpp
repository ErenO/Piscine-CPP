/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 09:47:12 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 11:05:24 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include "Victim.hpp"

class Sorcerer {

public:
    Sorcerer(void);
    Sorcerer(std::string name, std::string title);
    Sorcerer(Sorcerer const & src);

    ~Sorcerer(void);

    std::string getName() const;
    std::string getTitle() const;

    void intro() const;

    void polymorph(Victim const &src);

    Sorcerer & operator=(Sorcerer const & rhs);

private:
    std::string _name;
    std::string _title;

};

std::ostream	&operator<<(std::ostream &o, Sorcerer const &i);

#endif
