/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 08:54:06 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/03 09:29:03 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

class Pony {

public:
    //constructor
    Pony(std::string color, std::string country);
    //destructor
    ~Pony(void);

private:
    std::string _color;
    std::string _county;
};

#endif
