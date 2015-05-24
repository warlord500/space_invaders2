#include "appProccess.hpp"
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <textureManager.h>
#include <enemyManager.h>
#include <playerManager.hpp>
int main()
{
    // Create the main window
    sf::RenderWindow app(sf::VideoMode(screenWidth,screenHeight), "SFML window");


    textureManager images;
    if(!images.addAllCommonTextures())
        return 255;
    /*
        arg 1: the number of lives
        arg 2: the texture
        arg 3: the start positon of the player
    */
    playerManager playMan(images);

    enemyManager enemyMan(images);
    // Start the game loop
    while (app.isOpen())
    {
        // external events
        {
            app.clear();
            // Process events
            sf::Event event;
            while (app.pollEvent(event))
            {

                switch(event.type)
                {
                case  sf::Event::Closed:
                    app.close();
                    break;

                 case sf::Event::KeyPressed:
                        playMan.KeyEvents();
                     break;
                default:
                    break;
                }

            }
            // key based events
            playMan.eventLogic();
        }
        calculateCollisions(playMan);
        drawApplication(app,playMan,enemyMan);

    } //*/


    return EXIT_SUCCESS;
}

