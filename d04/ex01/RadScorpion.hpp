//
//  RadScorpion.hpp
//  piscine cpp
//
//  Created by <author> on 06/10/2017.
//
//

#ifndef RadScorpion_hpp
# define RadScorpion_hpp
# include <iostream>
# include "Enemy.hpp"

class RadScorpion: public Enemy {
private:

public:
    RadScorpion();
    RadScorpion(RadScorpion const & src);
    ~RadScorpion();
    RadScorpion & operator=(RadScorpion const & rhs);

protected:

};


#endif /* RadScorpion_hpp */
