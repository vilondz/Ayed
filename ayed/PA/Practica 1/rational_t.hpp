// AUTOR: Fernando S. Navarro Vilar
// FECHA: 16/02/2024
// EMAIL: alu0101573052@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

// pauta de estilo [92]: comentarios multilínea usando solo "//"

#pragma once

#include <iostream>
#include <cassert>
#include <cmath>

//All header files should have #define guards to prevent multiple inclusion. The format of the symbol name should be <PROJECT>_<PATH>_<FILE>_H_.
# define EPSILON 1e-6

using namespace std;
//Every non-obvious class or struct declaration should have an accompanying comment that describes what it is for and how it should be used.
//esta clase representa un número racional
class rational_t {
  //The public:, protected:, and private: keywords should be indented one space.
public:
  rational_t(const int = 0, const int = 1);
  ~rational_t() {}
  
  // pauta de estilo [71]: indentación a 2 espacios
  // getters
  int get_num() const;
  int get_den() const;
  
  // setters
  void set_num(const int);
  void set_den(const int);

  double value(void) const;

  // FASE II
  // bool is_equal(const rational_t&, const double precision = EPSILON) const;
  // bool is_greater(const rational_t&, const double precision = EPSILON) const;
  // bool is_less(const rational_t&, const double precision = EPSILON) const;
  
  // FASE III
  // rational_t add(const rational_t&);
  // rational_t substract(const rational_t&);
  // rational_t multiply(const rational_t&);
  // rational_t divide(const rational_t&);
  
  void write(ostream& = cout) const;
  void read(istream& = cin);
  
private:
  // pauta de estilo [11]: nombre de los atributos seguido de "_"
  int num_, den_;
};
