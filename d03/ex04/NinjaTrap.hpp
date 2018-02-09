/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 13:55:31 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/05 18:21:15 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap {

public:
    static std::string random[5];

    NinjaTrap(void);
    NinjaTrap(std::string name);
    NinjaTrap(NinjaTrap const & src);
    ~NinjaTrap(void);

    void ninjaShoebox(ClapTrap & target);
    void ninjaShoebox(ScavTrap & target);
    void ninjaShoebox(NinjaTrap & target);
    void ninjaShoebox(FragTrap & target);
    NinjaTrap & operator=(NinjaTrap const & rhs);
};

#endif
