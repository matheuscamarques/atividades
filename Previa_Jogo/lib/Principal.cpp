#include "Principal.h"


Principal::Principal()
{
    Inicializa();
}

void Principal::Inicializa(){
    window.create(sf::VideoMode(1200, 700), "Game Dev");
    window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(30);
    backgroundColor = sf::Color(0,255,0, 255);
    player.Inicializa(&window,10.f,10.f,20.f);

    
}

void Principal::Executa(){
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        Draw();


    }

        

}






void Principal::Draw(){
     
     window.clear(backgroundColor);
    
     player.Draw();
     player.Update();

     window.display();


}