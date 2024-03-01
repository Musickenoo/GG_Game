#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

using namespace sf;
using namespace std;

Font amazing;
Font Thai;
Texture back1;
Sprite back1image;
Texture back2;
Texture back3;
Texture back4;
vector<Texture> PictureCharector;
vector<Texture> PictureCharectorChosses;
Sprite waifu2;
Texture waifuface1Texture;

// ตรวจสอบว่าคลิกที่ buttonckimage หรือไม่
RenderWindow window(VideoMode(1600, 900), "SFML works!");
Vector2f mousePos ;

bool buttonHovered = false;
int state = 0;

class initGame{
    public:
        initGame();
};



initGame::initGame(){
    amazing.loadFromFile("../GG_Game/Font/LoveDays-2v7Oe.ttf");
    Thai.loadFromFile("../GG_Game/Font/EkkamaiNew-Regular.ttf");

    // ภาพ back1image จะเป็นภาพอยู่หลังสุด
    back1.loadFromFile("../GG_Game/image/background/backwall1.png");
    back1image.setTexture(back1);

    back2.loadFromFile("../GG_Game/image/background/backwall2.png");

    back3.loadFromFile("../GG_Game/image/background/testb3.jpg");

    back4.loadFromFile("../GG_Game/image/background/testb6.PNG");

    vector<string> CharectorCanChoose = {"../GG_Game/charecter/venti/Coliseum/first1.jpeg"};
    vector<string> CharectorChooses = {"../GG_Game/charecter/venti/Coliseum/first2.jpeg"};

    PictureCharector.resize(CharectorCanChoose.size());
    PictureCharectorChosses.resize(CharectorChooses.size());

    for(int i = 0; i < CharectorCanChoose.size(); i++){
        PictureCharector[i].loadFromFile(CharectorCanChoose[i]);
    }


    for(int i = 0; i < CharectorCanChoose.size(); i++){
        PictureCharectorChosses[i].loadFromFile(CharectorChooses[i]);
    }
}
    