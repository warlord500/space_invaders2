#ifndef BULLET_H
#define BULLET_H
#include <SFML/Graphics/Sprite.hpp>
/**
    generic bullet class
    not useful for player or enemy

    inherits:
        visGameObj
        because there should only be
        one visual entinty per bullet.
*/
class bullet
{
public:
    bullet(const sf::Texture&, const sf::Vector2f& pos);

    inline const sf::Sprite& getSprite()
    {
        return this->sprite;
    }
    virtual ~bullet();
protected:
     inline void move(float y)
    {
        this->sprite.move(sf::Vector2f(0,y));
    }

private:
     sf::Sprite sprite;
};

#endif // BULLET_H
