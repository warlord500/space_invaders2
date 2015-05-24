#ifndef SHIP_H
#define SHIP_H
#include <SFML/Graphics/Sprite.hpp>
/**
    custom 2d entinty class that
    wraps the sprite class
*/
class visGameObj
{
public:
    /** Default constructor */
    virtual ~visGameObj() {}
    visGameObj(const sf::Texture& text);

    /** Access isPlayer
     * \return The current value of isPlayer
     */
    bool GetisPlayer()
    {
        return this->isPlayer;
    }
    const sf::Sprite& getSprite()
    {
        return this->sprite;
    }
protected:
    sf::Sprite sprite; //!< Member variable "boundingRect"
private:
    const bool isPlayer; //!< Member variable "isPlayer"
};

#endif // SHIP_H
