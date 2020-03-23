#include "Player.h"



Player::Player(sf::RenderWindow *windows,float x , float y , float size, bool pulo,bool direitaI,bool esquerdaI){
        Inicializa(windows,x,y,size,pulo);
    }

Player::Player(){       }

void Player::Inicializa(sf::RenderWindow *windows,float x , float y , float size,bool pulo,bool direitaI,bool esquerdaI){
        posx = x;
        posy = y;
        size = size;
        pulou = pulo;
        guardaTempoPulo = 0;
        direita = direitaI;
        esquerda = esquerdaI;
        jumpPower = GRAVIDADE;
        velocity = 6.5;
        window = windows;
        PlayerShape.setRadius(size);
        PlayerShape.setOutlineColor(sf::Color::Red);
        PlayerShape.setOutlineThickness(5);
        contPassos = 0;
        if (!texturePlayer[0].loadFromFile("lib/Sprites/sprites0.png")){
                // error...
                printf("Erro");
        }

        if (!texturePlayer[1].loadFromFile("lib/Sprites/sprites1.png")){
                // error...
                printf("Erro");
        }
        
}



void Player::Draw(){
        PlayerShape.setPosition(posx, posy);
        //window->draw(PlayerShape);



        
        

        

        if(direita == true)
        {
           if( (contPassos++)%3)
           {
                 SpritePlayer.setTexture(texturePlayer[0]);
                 SpritePlayer.setTextureRect(sf::IntRect(39, 0, -39, 50));
                 SpritePlayer.setPosition(posx, posy); 
                 direita = false;
           }else
           {
                SpritePlayer.setTexture(texturePlayer[1]);
                SpritePlayer.setTextureRect(sf::IntRect(39, 0, -39, 50));
                SpritePlayer.setPosition(posx, posy);
                direita=false;
           }
           
        
        }

        if(esquerda == true)
        {
           if((contPassos++)%3)
           {
                 SpritePlayer.setTexture(texturePlayer[0]);
                 SpritePlayer.setTextureRect(sf::IntRect(0, 0, 39, 50));
                 SpritePlayer.setPosition(posx, posy); 
                 esquerda = false;
           }else
           {
                SpritePlayer.setTexture(texturePlayer[1]);
                SpritePlayer.setTextureRect(sf::IntRect(0, 0, 39, 50));
                SpritePlayer.setPosition(posx, posy);
                esquerda=false;
           }
           
        
        }
       
        
        SpritePlayer.setPosition(posx, posy);
        window->draw(SpritePlayer);
}
void Player::Update(){


        
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
                posx = posx-velocity;
                esquerda = true;
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
                posx = posx+velocity; 
                direita = true;
        }  
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::W) && pulou == false){    
                pulou = true;
                guardaTempoPulo = (float)clock()/CLOCKS_PER_SEC;
                //printf("%f \n",(float)clock()/CLOCKS_PER_SEC);
        }

        if( (pulou == true) && 
            (guardaTempoPulo >= ((float)clock()/CLOCKS_PER_SEC-0.058723/2))
             )  
         posy = posy - jumpPower;
                else  posy = posy + GRAVIDADE;
        

       
        
        
        //printf("%f",posy+size/2);

        if(posy+size/2 >= 650)
        { 
           posy = 650 - size;   
           pulou = false;  
        }

}




