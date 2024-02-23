#include <iostream>
#include <vector>
#include <algorithm>

struct equipo {
    std::string nombre;
    int puntos;

    equipo(const std::string& nombre, int puntos) : nombre(nombre), puntos(puntos) {}
};

struct clasificacion {
    std::vector<equipo> equipos;

    void ordenarPorPuntos() {
        std::sort(equipos.begin(), equipos.end(), [](const equipo& a, const equipo& b) {
            return a.puntos > b.puntos;
        });
    }

    bool operator<(const clasificacion& other) const {
        return equipos < other.equipos;
    }

    bool operator==(const clasificacion& other) const {
        return equipos == other.equipos;
    }
};

int main() {
    // Ejemplo de uso
    clasificacion c;

    c.equipos.push_back(equipo("Equipo A", 10));
    c.equipos.push_back(equipo("Equipo B", 5));
    c.equipos.push_back(equipo("Equipo C", 8));

    c.ordenarPorPuntos();

    for (const auto& e : c.equipos) {
        std::cout << e.nombre << " - " << e.puntos << std::endl;
    }

    return 0;
}
