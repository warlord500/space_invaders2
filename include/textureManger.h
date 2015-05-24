#ifndef TEXTUREMANGER_H
#define TEXTUREMANGER_H
#include <vector>
 #include <SFML/Graphics.hpp>

class textureManger
{
    public:
        /** Default constructor */
        textureManger();
        /** Default destructor */
        virtual ~textureManger();
    protected:
    private:
    std::vector<sf::Texture> textureList;
};

#endif // TEXTUREMANGER_H
