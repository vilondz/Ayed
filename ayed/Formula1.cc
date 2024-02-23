#include <iostream>
#include <string>
#include <vector>

class Formula {
public:
    void setEscuderia(std::string Escuderias) {
        this->Escuderias = Escuderias;
    }
    std::string getEscuderia() {
        return Escuderias;
    }
    void setPiloto(std::string piloto) {
        this->piloto = piloto;
    }
    std::string getPiloto() {
        return piloto;
    }

private:
    std::string Escuderias;
    std::string piloto;
    int puntos;
    std::vector<Formula> escuderias;
};

int main() {
    Formula f1;
    Formula::Escuderias e1;
    e1.setEscuderia("Ferrari");
    e1.setPiloto("Carlos Sainz");
    e1.setPiloto("Leclerc");
    f1.escuderias.push_back(e1);
    Formula::Escuderias e2;
    e2.setEscuderia("Mercedes");
    e2.setPiloto("Hamilton");
    e2.setPiloto("Russell");
    f1.escuderias.push_back(e2);
    Formula::Escuderias e3;
    e3.setEscuderia("Aston Martin");
    e3.setPiloto("Fernando Alonso");
    e3.setPiloto("Lance Stroll");
    f1.escuderias.push_back(e3);
    Formula::Escuderias e4;
    e4.setEscuderia("Red Bull");
    e4.setPiloto("Max Verstappen");
    e4.setPiloto("Sergio Perez");
    f1.escuderias.push_back(e4);
    Formula::Escuderias e5;
    e5.setEscuderia("Alpine");
    e5.setPiloto("Esteban Ocon");
    e5.setPiloto("Piere Gasly");
    f1.escuderias.push_back(e5);
    Formula::Escuderias e6;
    e6.setEscuderia("McLaren");
    e6.setPiloto("Oscar Piastri");
    e6.setPiloto("Lando Norris");
    f1.escuderias.push_back(e6);
    Formula::Escuderias e7;
    e7.setEscuderia("Alpha Tauri");
    e7.setPiloto("Yuki Tsunoda");
    e7.setPiloto("Daniel Ricciardo");
    f1.escuderias.push_back(e7);
    Formula::Escuderias e8;
    e8.setEscuderia("kick");
    e8.setPiloto("Vallteri Bottas");
    e8.setPiloto("juanyou Zhou");
    f1.escuderias.push_back(e8);
    Formula::Escuderias e9;
    e9.setEscuderia("Haas");
    e9.setPiloto("Kevin Magnussen");
    e9.setPiloto("Hulkenberg");
    f1.escuderias.push_back(e9);
    Formula::Escuderias e10;
    e10.setEscuderia("Williams");
    e10.setPiloto("Alex Albon");
    e10.setPiloto("Logan Sargeant");
    return 0;
}