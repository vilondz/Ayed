#include <iostream>
#include <vector>

int main () {
    std::vector<int> lista;
    for (int i = 1; i < 10; i++){
        lista.push_back(i);
    }
    for (int i = 0; i < 10; i++){
        std::cout << lista[i] << " "; 
    }
}