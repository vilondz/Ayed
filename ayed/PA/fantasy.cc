#include <iostream>
#include <string>
#include <vector>

class fantasy {
    class equipo{
        private: 
                std::string nombre;
                std::vector<std::string> jugadores;
                std::vector<std::string> entrenador;
                int partidos_ganados;
                int partidos_perdidos;
                int partidos_empatados;
                int puntos;
        public:
                get_nombre(){
                    return nombre;
                }
                get_jugadores();
                get_entrenador();
                get_partidos_ganados();
                get_partidos_perdidos();
                sumar_partidos_ganados();
                sumar_partidos_perdidos();
                get_puntos();
                sumar_puntos();


                sumar_partidos_ganados(){
                    partidos_ganados++;
                    puntos += 3;
                }

    };



};

int main() {

    struct equipo equipo[22];
    equipo[1].get_nombre() = "Real Madrid";
    equipo[1].get_puntos() = 0;
    equipo[1].get_nombre();
    equipo[1].get_puntos();
    return 0;
}
