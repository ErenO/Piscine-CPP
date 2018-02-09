#include "Base.hpp"

/* CONSTRUCTORS */

Base::Base(void) {
  return;
}

Base::Base(Base const & src) {
  *this = src;
  return;
}

Base::~Base(void) {
  return;
}

/* MEMBERS */

/* OPERATORS */

Base& Base::operator=(Base const &) {
  return *this;
}