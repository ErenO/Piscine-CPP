//
//  PowerFist.hpp
//  piscine cpp
//
//  Created by <author> on 06/10/2017.
//
//

#ifndef PowerFist_hpp
# define PowerFist_hpp
# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon {
private:

public:
    PowerFist();
    PowerFist(PowerFist const & src);
    ~PowerFist();

    virtual void attack() const;

    PowerFist & operator=(PowerFist const & rhs);
protected:

};


#endif /* PowerFist_hpp */
