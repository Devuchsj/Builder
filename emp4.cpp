#include<iostream>
#include <string>
using namespace std;


class IndianState {
    private:
        string stateName;
        int population;
        static int totalStates;
        static int totalPopulation;


public:
    IndianState(string name, int pop) {
        stateName = name;
        population = pop;
        totalStates++;
        totalPopulation += pop;
    }

    static int getTotalStates() {
        return totalStates;
    }

    static int getTotalPopulation() {
        return totalPopulation;
    }

    void display() {
        cout << "State: " << stateName << endl;
        cout << "Population: " << population << endl;
    }

};


int IndianState::totalStates = 0;
int IndianState::totalPopulation = 0;


int main() {
    IndianState karnataka("Karnataka", 61095297);
    IndianState tamilNadu("Tamil Nadu", 72147030);
    IndianState andhraPradesh("Andhra Pradesh", 53903393);


cout << "Total States: " << IndianState::getTotalStates() << endl;
cout << "Total Population: " << IndianState::getTotalPopulation() << endl;

karnataka.display();
tamilNadu.display();
andhraPradesh.display();

return 0;

} 
