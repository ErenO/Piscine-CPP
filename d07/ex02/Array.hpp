#ifndef ARRAY_HPP
#define ARRAY_HPP
# include <exception>
# include <iostream>

template <typename T>
class Array
{
  public:
    Array(void) {}
    Array(unsigned int n) : _size(n) {
      if (this->_size == 0) {
        this->_list = new T[0]();
      } else {
        this->_list = new T[n]();
      }
    }
    Array(Array const &src) {
      std::cout << "construct" << std::endl;
      this->_list = new T[src._size];
      this->_size = src._size;
      for(unsigned int i = 0; i < this->_size; i++){
          this->_list[i] = src._list[i];
      }
    }
    ~Array(void) {
      std::cout << "destruct" << std::endl;
      delete [] this->_list;
    }

    unsigned int getSize() const {
      return this->_size;
    }

    Array &operator=(Array const &rhs) {
      unsigned int i;

      i = 0;
      if (this->_size == 0) {
        delete this->_list;
      } else {
        delete [] this->_list;
      }
      this->_size = rhs._size;
      this->_list = new T[rhs._size];
      while (i < this->_size) {
        this->_list[i] = rhs._list[i];
        i++;
      }
      return *this; 
    }

    T& operator[](unsigned int i) const {
      if (this->_size == 0) {
        throw std::exception();
      }
      return this->_list[i];
    }

  private:
    T *_list;
    unsigned int _size;
};

template <typename T> 
std::ostream & operator<<(std::ostream & o, Array<T> const & rhs) {
  o << "array size: " << rhs.getSize();
  for (unsigned int i = 0; i < rhs.getSize(); i++) {
    o << " array["<< i << "]: " << rhs[i] << " ";
  }
  o << std::endl;
  return (o);
}

#endif