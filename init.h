#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

using namespace sf;
using namespace std;

class init{
    public:
        init();
        RenderWindow window;
        Font amazing;
        Font Thai;
        Texture back1;
        Sprite back1image;
        Texture back2;
        Texture back3;
        Texture back4;
        Text starto;
        Text thaiText;
};

init::init(){
    RenderWindow window(VideoMode(1600, 900), "SFML works!");

    Font amazing;
    amazing.loadFromFile("../GG_Game/Font/LoveDays-2v7Oe.ttf");
    Font Thai;
    Thai.loadFromFile("../GG_Game/Font/EkkamaiNew-Regular.ttf");

    // ภาพ back1image จะเป็นภาพอยู่หลังสุด
    Texture back1;
    back1.loadFromFile("../GG_Game/image/background/testb1.jpg");
    Sprite back1image;
    back1image.setTexture(back1);

    Texture back2;
    back2.loadFromFile("../GG_Game/image/background/testb2.jpg");

    Texture back3;
    back3.loadFromFile("../GG_Game/image/background/testb3.jpg");

    Texture back4;
    back4.loadFromFile("../GG_Game/image/background/testb6.PNG");

    // กำหนด starto
    Text starto("Judgment Of Nevillete \n The Archon", amazing, 80);
    starto.setPosition(50, 50);
    starto.setFillColor(Color(255, 0, 108));

    Text thaiText("สวัสดีชาวโลก",Thai, 80);
    thaiText.setFillColor(Color(255, 0, 108));;
    thaiText.setPosition(10, 10);
}