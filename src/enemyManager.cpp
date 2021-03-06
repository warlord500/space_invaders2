#include "enemyManager.h"
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>
#include <textureManager.h>
enemyManager::enemyManager(const textureManager& images) : imageManager(images)
{
    enemy NewEnemy(this->imageManager.getTexture("enemy.png"),sf::Vector2f(50.0f,0.0f));
    this->enemiesList.push_back(NewEnemy);
}
void enemyManager::draw(sf::RenderWindow& app)
{
    //note for next time
    //dont put semi colon before braces
    auto it = this->enemiesList.begin();
    while( it != this->enemiesList.end())
    {
        it->logic();
        app.draw(it->getSprite());
        ++it;
    }
}

