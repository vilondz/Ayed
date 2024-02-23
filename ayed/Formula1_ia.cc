#include <iostream>
#include <string>
#include <vector>

class Driver {
public:
    std::string name;
    int points;

    Driver(const std::string& driverName) : name(driverName), points(0) {}
};

class Team {
public:
    std::string name;
    std::vector<Driver> drivers;

    Team(const std::string& teamName) : name(teamName) {}
};

class Formula {
public:
    std::vector<Team> teams;

    void addTeam(const std::string& teamName) {
        teams.emplace_back(teamName);
    }

    void addDriverToTeam(const std::string& teamName, const std::string& driverName) {
        for (auto& team : teams) {
            if (team.name == teamName) {
                team.drivers.emplace_back(driverName);
                break;
            }
        }
    }

    void printTeamRankings() {
        std::cout << "Team Rankings:\n";
        for (const auto& team : teams) {
            int teamPoints = 0;
            for (const auto& driver : team.drivers) {
                teamPoints += driver.points;
            }
            std::cout << team.name << ": " << teamPoints << " points\n";
        }
    }

    void printDriverRankings() {
        std::cout << "Driver Rankings:\n";
        for (const auto& team : teams) {
            for (const auto& driver : team.drivers) {
                std::cout << driver.name << " (" << team.name << "): " << driver.points << " points\n";
            }
        }
    }
};

int main() {
    Formula formula1;

    // Add teams
    formula1.addTeam("Mercedes");
    formula1.addTeam("Red Bull");
    formula1.addTeam("Ferrari");
    formula1.addTeam("McLaren");
    formula1.addTeam("Aston Martin");
    formula1.addTeam("Alpine");
    formula1.addTeam("Alpha Tauri");
    formula1.addTeam("kick");
    formula1.addTeam("Hass");
    formula1.addTeam("Williams");


    // Add drivers to teams
    formula1.addDriverToTeam("Mercedes", "Lewis Hamilton");
    formula1.addDriverToTeam("Mercedes", "George Russell");
    formula1.addDriverToTeam("Red Bull", "Max Verstappen");
    formula1.addDriverToTeam("Red Bull", "Sergio Perez");
    formula1.addDriverToTeam("Ferrari", "Charles Leclerc");
    formula1.addDriverToTeam("Ferrari", "Carlos Sainz");
    formula1.addDriverToTeam("McLaren", "Lando Norris");
    formula1.addDriverToTeam("McLaren", "Oscar Piastri");
    formula1.addDriverToTeam("Aston Martin", "Fernando Alonso");
    formula1.addDriverToTeam("Aston Martin", "Lance Stroll");
    formula1.addDriverToTeam("Alpine", "Esteban Ocon");
    formula1.addDriverToTeam("Alpine", "Piere Gasly");
    formula1.addDriverToTeam("Alpha Tauri", "Yuki Tsunoda");
    formula1.addDriverToTeam("Alpha Tauri", "Daniel Ricciardo");
    formula1.addDriverToTeam("kick", "Valtteri Bottas");
    formula1.addDriverToTeam("kick", "Juanyou Zhou");
    formula1.addDriverToTeam("Hass", "Kevin Magnussen");
    formula1.addDriverToTeam("Hass", "Nico Hulkenberg");
    formula1.addDriverToTeam("Williams", "Alex Albon");
    formula1.addDriverToTeam("Williams", "Logan Sargeant");


    // Update points
    formula1.teams[0].drivers[0].points = 0;    // Lewis Hamilton
    formula1.teams[0].drivers[1].points = 0;    // George Russell
    formula1.teams[1].drivers[0].points = 0;    // Max Verstappen 
    formula1.teams[1].drivers[1].points = 0;    // Sergio Perez
    formula1.teams[2].drivers[0].points = 0;    // Charles Leclerc 
    formula1.teams[2].drivers[1].points = 0;    // Carlos Sainz 
    formula1.teams[3].drivers[0].points = 0;    // Lando Norris
    formula1.teams[3].drivers[1].points = 0;    // Oscar Piastri
    formula1.teams[4].drivers[0].points = 0;    // Fernando Alonso
    formula1.teams[4].drivers[1].points = 0;    // Lance Stroll 
    formula1.teams[5].drivers[0].points = 0;    // Esteban Ocon
    formula1.teams[5].drivers[1].points = 0;    // Piere Gasly
    formula1.teams[6].drivers[0].points = 0;    // Yuki Tsunoda
    formula1.teams[6].drivers[1].points = 0;    // Daniel Ricciardo    
    formula1.teams[7].drivers[0].points = 0;    // Valtteri Bottas
    formula1.teams[7].drivers[1].points = 0;    // Juanyou Zhou
    formula1.teams[8].drivers[0].points = 0;    // Kevin Magnussen
    formula1.teams[8].drivers[1].points = 0;    // Nico Hulkenberg
    formula1.teams[9].drivers[0].points = 0;    // Alex Albon
    formula1.teams[9].drivers[1].points = 0;    // Logan Sargeant


    // Print rankings
    //formula1.printTeamRankings();               //Constructors Championship
   // formula1.printDriverRankings();             //Drivers Championship

    return 0;
}
