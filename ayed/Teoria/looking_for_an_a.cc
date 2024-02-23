/** este codigo es para el jutge no es 
de teoria de ayed pero como si lo fuera 
*/

#include <iostream>
#include <string>

int main () {
     std::string frase;
     std::getline(std::cin, frase);//cojemos la frase con espacios
    int frase_size = frase.size();
    int i = 0;
    int no_a = 0;//variable para saber si hay una a
    while (i < frase_size) {//recorremos la frase y si encontramos una a paramos e impimimos yes
    if (frase[i] == 'a') {
        no_a = 1;
      std::cout << "yes" << std::endl;
      break;
    }
    
    i++;
  }
    if (no_a == 0) {//si no encontramos ninguna a imprimimos no
        std::cout << "no" << std::endl;
    }

}