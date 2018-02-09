/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 08:56:46 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/05 18:13:32 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
# define ScavTrap_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & src);
    ~ScavTrap(void);

    static std::string random[5];
    ScavTrap & operator=(ScavTrap const & rhs);
    void challengeNewcomer(std::string const & target);
private:

};

#endif
