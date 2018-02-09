/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 14:18:39 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/03 15:50:17 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <sstream>
# include <string>

class Brain {
public:

    Brain (void);
    ~Brain (void);
    std::string identify() const;
private:
};
#endif
