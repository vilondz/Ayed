// AUTOR: Fernando S. Navarro Vilar
// FECHA: 26/02/2024
// EMAIL: alu0101573052@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

// pauta de estilo [92]: comentarios multilínea usando solo "//"

#include "rational_t.hpp"

rational_t::rational_t(const int n, const int d)
{
  assert(d != 0);
  num_ = n, den_ = d;
}

// pauta de estilo [87]: 3 líneas de separación entre métodos

// pauta de estilo [83]: tipo retornado en línea anterior al método
//geters
int
rational_t::get_num() const
{
  return num_;
}





int
rational_t::get_den() const
{
  return den_;
}


  //setters
void
rational_t::set_num(const int n)
{
  num_ = n;
}


  
void
rational_t::set_den(const int d)
{
  assert(d != 0);
  den_ = d;
}


//return valor del racional
double
rational_t::value() const
{ 
  return double(get_num()) / get_den();
}


// comparaciones
//menor que 
bool
rational_t::is_equal(const rational_t& r, const double precision) const{
  double diff = fabs(value() - r.value());
  return (diff < precision);
  
}


//mayor que
bool
rational_t::is_greater(const rational_t& r, const double precision) const{
  return (r.value() - value()) > precision;
  }


//menor que 
bool
rational_t::is_less(const rational_t& r, const double precision) const{
  
  return (value() - r.value()) > precision;
}


// operaciones
//suma de racionales

rational_t rational_t::add(const rational_t& r) const
{
  int num = get_num() * r.get_den() + get_den() * r.get_num();
  int den = get_den() * r.get_den();
  return rational_t(num, den);
}



//resta de racionales

rational_t rational_t::substract(const rational_t& r)
{
  int num = get_num() * r.get_den() - get_den() * r.get_num();
  int den = get_den() * r.get_den();
  return rational_t(num, den);
}




//multiplicar dos racionales
rational_t rational_t::multiply(const rational_t& r)const
{
  int num = get_num() * r.get_num();
  int den = get_den() * r.get_den();
  return rational_t(num, den);
}




//dividir dos racionales
rational_t rational_t::divide(const rational_t& r)const
{
  int num = get_num() * r.get_den();
  int den = get_den() * r.get_num();
  return rational_t(num, den);
}



// E/S

//escribir un racional y su valor 
void
rational_t::write(ostream& os) const
{
  os << get_num() << "/" << get_den() << "=" << value() << endl;
}


//leer un nuevo racional
void 
rational_t::read(istream& is)
{
  cout << "Numerador? ";
  is >> num_;
  cout << "Denominador? ";
  is >> den_;
  assert(den_ != 0);
}
