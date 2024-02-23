#include <iostream>
#include <cassert>
#include <cmath>

class racional {
    public:
        racional (int a = 0, int b = 1) {
            num = a;
            den = b;
        }
        racional suma(const racional& r) { // Added missing semicolon and changed syntax
            racional c;
            c.num = num * r.den + den * r.num;
            c.den = den * r.den;
            return c;
        }
        racional resta(const racional& r) { // Added missing semicolon and changed syntax
            racional c;
            c.num = num * r.den - den * r.num;
            c.den = den * r.den;
            return c;
        }
        int greater_common_divisor(racional& r) {
            while (r.den) {
                den = den % r.den;
                std::swap(den, r.den);
            }
            return den;
        }   
    



        int get_den() {return den;}
        int get_num() {return num;} 
        
    private:
        int num, den;
};

int main () {
    racional r1 (1, 2);
    racional r2 (2, 3);
    std::cout << r1.get_num() << "/" << r1.get_den() << std::endl;
    std::cout << r2.get_num() << "/" << r2.get_den() << std::endl;
    racional c = r1.suma(r2); // Changed syntax to call the suma function
    std::cout << c.get_num() << "/" << c.get_den() << std::endl;
    racional t = r1.resta(r2); // Changed syntax to call the resta function
    std::cout << t.get_num() << "/" << t.get_den() << std::endl;
    racional d = r1.greater_common_divisor(r2); // Changed syntax to call the greater_common_divisor function
    std::cout << d.get_den() << std::endl;
    return 0;
}
