#ifndef C_HPP
# define C_HPP
# include "Base.hpp"
#include <iostream>

class C : public Base {
public:
  C(void);
  C(C const & src);
  ~C(void);

  C& operator=(C const &);
};

#endif