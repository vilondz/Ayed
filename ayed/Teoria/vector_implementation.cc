#include <iostream>
#include <vector>

class M {
    private:
        std::vector<int>filas = 0;
        columnas = 0;
    public:
        M(int f, int c) {
            filas = f;
            columnas = c;
        }
        void print() {
            std::cout << "Filas: " << filas << " Columnas: " << columnas << std::endl;
        }    
};