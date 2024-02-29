#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

using namespace sf;
using namespace std;

class initGame{
    public:
        initGame();
        Font amazing;
        Font Thai;
        Texture back1;
        Sprite back1image;
        Texture back2;
        Texture back3;
        Texture back4;
};

initGame::initGame(){
    amazing.loadFromFile("../GG_Game/Font/LoveDays-2v7Oe.ttf");
    Thai.loadFromFile("../GG_Game/Font/EkkamaiNew-Regular.ttf");

    // ภาพ back1image จะเป็นภาพอยู่หลังสุด
<<<<<<< HEAD
    back1.loadFromFile("../GG_Game/image/background/backwall1.png");
    back1image.setTexture(back1);

    back2.loadFromFile("../GG_Game/image/background/backwall2.png");
=======
    back1.loadFromFile("../GG_Game/image/background/testb1.jpg");
    back1image.setTexture(back1);

    back2.loadFromFile("../GG_Game/image/background/testb2.jpg");
>>>>>>> 190d2899864bee565dbb3c634c202423d27fb3ea

    back3.loadFromFile("../GG_Game/image/background/testb3.jpg");

    back4.loadFromFile("../GG_Game/image/background/testb6.PNG");
}