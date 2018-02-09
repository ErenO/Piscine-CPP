/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 08:56:46 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/05 22:03:29 by eren_ozdek       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
    FragTrap(void);
    FragTrap(FragTrap const & src);
    FragTrap(std::string name);
    ~FragTrap(void);
    static std::string random[5];

    void vaulthunter_dot_exe(std::string const & target);
    FragTrap & operator=(FragTrap const & rhs);

private:

};

#endif
