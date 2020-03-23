
#pragma once
#include <SFML/Graphics.hpp>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GRAVIDADE 10.8

class Player{


    protected:
        sf::Sprite SpritePlayer;

    private:
        float posx;
        float posy;
        float size;
        bool pulou;
        float guardaTempoPulo;
        float jumpPower;
        float velocity;
        bool direita;
        bool esquerda;
        int contPassos;

    public:
     
     sf::CircleShape PlayerShape;
     sf::RenderWindow *window;
     sf::Texture texturePlayer[2];
     

    Player(sf::RenderWindow *windows,float x , float y , float size,bool pulo = false,bool direitaI = true ,bool esquerdaI = false);
    Player();

    void Inicializa(sf::RenderWindow *windows,float x , float y , float size , bool pulo = false,bool direitaI = true ,bool esquerdaI = false);
    void Draw();
    void Update();


    

};