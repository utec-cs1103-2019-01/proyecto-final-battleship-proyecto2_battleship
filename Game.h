//
// Created by lica-pc on 11/25/19.
//

#ifndef PROYECTOBATTLESHIP_GAME_H
#define PROYECTOBATTLESHIP_GAME_H


#include "Ship.h"
#include "casilla.h"

class Game {

private:

    vector<vector<casilla>> tableroJugador; 

    string **playerboard;

    int size;

    Ship playeraircraftcarrier = Ship(4, 0, "AircraftCarrier");

    Ship playercruiser = Ship(3, 0, "Cruiser");

    Ship playercruiser1 = Ship(3, 0, "Cruiser");

    Ship playerdestroyer = Ship(2, 0, "Destroyer");

    Ship playerdestroyer1 = Ship(2, 0, "Destroyer");

    Ship playerdestroyer2 = Ship(2, 0, "Destroyer");

    Ship playersubmarine = Ship(1, 0, "Submarine");

    Ship playersubmarine1 = Ship(1, 0, "Submarine");

public:



    void setsize();

    int getsize();

    void createtable();

    void printplayer();

    void settable();

    int computerturn(int counter, int myToken, std::string file);

    int computerdoubleturn(int counter, int x, int y, int myToken, std::string file);

};



#endif //PROYECTOBATTLESHIP_GAME_H
