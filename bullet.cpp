#include "bullet.h"


Bullet::Bullet(std::unordered_map<std::string, std::vector<std::shared_ptr<Sprite>>> sprites) : Entity(sprites)
{
    playSound("qrc:/assets/sounds/shot.wav");
    speed(0, -999);
}
