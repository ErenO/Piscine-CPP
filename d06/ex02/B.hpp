#ifndef B_HPP
# define B_HPP

#include <iostream>
#include "Base.hpp"

class B : public Base {
public:
  B(void);
  B(B const & src);
  ~B(void);

  B& operator=(B const &);
};

#endif