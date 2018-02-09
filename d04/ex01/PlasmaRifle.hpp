/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:38:07 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 15:29:18 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE
# define PLASMARIFLE
# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

public:
    PlasmaRifle();
    PlasmaRifle(PlasmaRifle const & src);

    ~PlasmaRifle();
    PlasmaRifle & operator=(PlasmaRifle const & rhs);

    virtual void attack() const;

private:

};

#endif
