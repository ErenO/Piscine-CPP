/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 15:42:36 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 15:46:08 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SuperMutant_hpp
# define SuperMutant_hpp
# include "Enemy.hpp"
# include <iostream>

class SuperMutant : public Enemy {

private:

public:
    SuperMutant();
    SuperMutant(SuperMutant const & src);
    ~SuperMutant();
    SuperMutant & operator=(SuperMutant const & rhs);
    virtual void takeDamage(int dmg);

protected:

};


#endif /* SuperMutant_hpp */
