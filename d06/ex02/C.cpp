#include "C.hpp"

/* CONSTRUCTORS */

C::C(void) {
  return;
}

C::C(C const & src) {
  *this = src;
  return;
}

C::~C(void) {
  return;
}

/* MEMBERS */

/* OPERATORS */

C& C::operator=(C const &) {
  return *this;
}