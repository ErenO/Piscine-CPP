#include "B.hpp"

/* CONSTRUCTORS */

B::B(void) {
  return;
}

B::B(B const & src) {
  *this = src;
  return;
}

B::~B(void) {
  return;
}

/* MEMBERS */

/* OPERATORS */

B& B::operator=(B const &) {
  return *this;
}