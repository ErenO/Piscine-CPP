/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 13:04:02 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/03 15:52:16 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"
# include <sstream>
# include <string>
# include <iostream>

class Human {

public:
    Brain const brain;

    Human(void);
    ~Human(void);
    std::string identify();
    Brain const & getBrain();

private:

};



#endif
