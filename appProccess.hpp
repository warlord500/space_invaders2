#ifndef APPPROCCESS_HPP_INCLUDED
#define APPPROCCESS_HPP_INCLUDED
class playerManager;
class enemyManager;
namespace sf{ class RenderWindow;}

void drawApplication(sf::RenderWindow& app,playerManager& playManager,enemyManager& enemy);
/**
    @arg gameTextures where to load the game textures
    @return did i load the textures.
*/
void calculateCollisions(playerManager& playManager);

const int screenWidth = 800;
const int screenHeight = 600;

#endif // APPPROCCESS_HPP_INCLUDED
