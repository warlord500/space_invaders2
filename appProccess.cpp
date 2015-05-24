#include "appProccess.hpp"
#include <playerManager.hpp>
#include <enemyManager.h>
#include <SFML/Graphics/RenderWindow.hpp>
#include <thread>
#include <chrono>

void drawApplication(sf::RenderWindow& app,playerManager& playMan,
enemyManager& enemies)
{
    // Clear screen

    // Draw the sprite

    //draw enemies
    app.clear();
    playMan.drawItems(app);
    enemies.draw(app);
    // Update the window
    app.display();
    std::this_thread::sleep_for(std::chrono::milliseconds(15));
}


void calculateCollisions(playerManager& playMan)
{
    sf::FloatRect screenRect(0,0,screenHeight,screenWidth);
    playMan.checkSides(screenRect);

}
