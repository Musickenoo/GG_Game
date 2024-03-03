#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <locale>
#include <codecvt>

using namespace sf;
using namespace std;

Font amazing, Thai;
Sprite back1image;
Texture back1, back2, back3, back4;
vector<Texture> PictureCharector, PictureCharectorChosses;
Texture waifuface1Texture, buttonno, buttonck;
Sprite waifu1, waifu2, buttonnoimage, buttonckimage;

int thisIsCharacterNum, Day = 0, finalDay = 7, basicTalk = 0, endBasicTalk = 2, Question = 0, Action = 100, Relation = 0;
bool QuestionTime = false, AlreadyChooseCharector = false, waitAnswer = false, alreadyQuestion = false;

Clock myTime;
Text c1("choosen waifu", amazing, 80), starto("Judgment Of Nevillete \n The Archon", amazing, 80),
     thaiText("สวัสดีชาวโลก",Thai, 80), day("DAY " + to_string(Day+1), amazing, 80);
Text text, Answer0, Answer1, Answer2;
RectangleShape rectangle(Vector2f(1600, 150)), AnswerButton0(Vector2f(1600, 150)),
               AnswerButton1(Vector2f(1600, 150)), AnswerButton2(Vector2f(1600, 150));

string text_String, AnswerMessage;
wstring_convert<codecvt_utf8<wchar_t>> converter;

vector<vector<string>> charactorTalkMessege, userTalkMessege, charactorQuestionMessage;
vector<vector<vector<string>>> userAnswerMessage, charactorActionMessage;
vector<vector<vector<int>>> actionRelation;
vector<vector<Texture>> charactorQuestionImage, charactorTalkImage;
vector<vector<vector<Texture>>> charactorActionAnswerImage;

Texture V1;
Texture V2;
Texture V3;
Texture V4;
Texture V5;
Texture V6;
Texture V7;
Texture V8;
Texture V9;
Texture V10;
Texture V11;
Texture V12;
Texture V13;
Texture V14;
Texture V15;
Texture V16;
Texture V17;
Texture V18;
Texture V19;
Texture V20;
Texture V21;
Texture V22;


int i;

// ตรวจสอบว่าคลิกที่ buttonckimage หรือไม่
RenderWindow window(VideoMode(1600, 900), "SFML works!");
Vector2f mousePos = window.mapPixelToCoords(Mouse::getPosition(window));

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

    vector<string> CharectorCanChoose = {"../GG_Game/charecter/venti/Coliseum/first2.jpeg"};
    vector<string> CharectorChooses = {"../GG_Game/charecter/venti/Coliseum/first1.jpeg"};

    PictureCharector.resize(CharectorCanChoose.size());
    PictureCharectorChosses.resize(CharectorChooses.size());

    for(i = 0; i < CharectorCanChoose.size(); i++){
        PictureCharector[i].loadFromFile(CharectorCanChoose[i]);
    }


    for(i = 0; i < CharectorCanChoose.size(); i++){
        PictureCharectorChosses[i].loadFromFile(CharectorChooses[i]);
    }

    // กำหนด buttonnoimage และ buttonckimage
    buttonno.loadFromFile("../GG_Game/image/button/Button.png");
    buttonnoimage.setTexture(buttonno);
    buttonnoimage.setPosition(1200.f, 700.f);

    buttonck.loadFromFile("../GG_Game/image/button/button1.png");
    buttonckimage.setTexture(buttonck);
    buttonckimage.setPosition(1200.f, 700.f);

    rectangle.setPosition(1600, 900);
    rectangle.setFillColor(Color(200, 200, 200, 150));
    AnswerButton0.setPosition(1600, 900);
    AnswerButton0.setFillColor(Color(200, 200, 200, 100));
    AnswerButton1.setPosition(1600, 900);
    AnswerButton1.setFillColor(Color(200, 200, 200, 100));
    AnswerButton2.setPosition(1600, 900);
    AnswerButton2.setFillColor(Color(200, 200, 200, 100));

    // กำหนด starto
    starto.setPosition(50, 50);
    starto.setFillColor(Color(255, 0, 108));

    thaiText.setFillColor(Color(255, 0, 108));;
    thaiText.setPosition(10, 10);

    // กำหนด choosen waifu
    c1.setPosition(1600, 900);
    c1.setFillColor(Color(255, 0, 108));

    day.setPosition(1600, 900);
    day.setFillColor(Color(0,255,0));

    //หน้าเลือกตัวตัวละคร
    waifu1.setTexture(PictureCharector[0]);
    waifu1.setPosition(1600.f, 900.f);

    text.setFont(Thai);
    text.setCharacterSize(40);
    text.setPosition(100, 790);
    text.setFillColor(Color::Black);
    text.setOutlineColor(Color::White);
    text.setOutlineThickness(4.f);
    Answer0.setFont(Thai);
    Answer0.setCharacterSize(40);
    Answer0.setPosition(1600, 960);
    Answer0.setFillColor(Color::Black);
    Answer0.setFillColor(Color::Black);
    Answer0.setOutlineColor(Color::White);
    Answer1.setFont(Thai);
    Answer1.setCharacterSize(40);
    Answer1.setPosition(1600, 960);
    Answer1.setFillColor(Color::Black);
    Answer1.setFillColor(Color::Black);
    Answer1.setOutlineColor(Color::White);
    Answer2.setFont(Thai);
    Answer2.setCharacterSize(40);
    Answer2.setPosition(1600, 960);
    Answer2.setFillColor(Color::Black);
    Answer2.setFillColor(Color::Black);
    Answer2.setOutlineColor(Color::White);
}
    