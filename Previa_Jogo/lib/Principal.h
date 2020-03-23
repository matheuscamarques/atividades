#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"

class Principal{ 

    public:
    sf::Color backgroundColor;
    sf::RenderWindow window;
    Player player;

   
    Principal();
    void Inicializa();
    void Executa();
    void Draw();

   


   

};

 