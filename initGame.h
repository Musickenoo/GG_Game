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
Texture back1, back2, back3, back4,SkipPicture;
vector<Texture> PictureCharector, PictureCharectorChosses ;
vector<Texture> EndingScreen;
Texture waifuface1Texture, buttonno, buttonck;
Sprite waifu1, waifu2, buttonnoimage, buttonckimage, sakura1,nahiden1 ,skipButton;
View view(FloatRect(0,0,1600,900));

int thisIsCharacterNum, endScreen, Day = 0, finalDay = 7, whoTalk = 0, basicTalk = 0, endBasicTalk = 2, Question = 0, Action = 100, Relation = 0, waitTimeChooseSkip = 0;
bool QuestionTime = false, AlreadyChooseCharector = false, waitAnswer = false, alreadyQuestion = false, skip = false, alreadySkip = false;

Clock myTime;
Text c1("choosen waifu", amazing, 80), starto("Judgment Of Nevillete \n The Archon", amazing, 80),
     thaiText("สวัสดีชาวโลก",Thai, 80), day("DAY " + to_string(Day+1), amazing, 80);
Text text, Answer0, Answer1, Answer2;
RectangleShape rectangle(Vector2f(1600, 150)), AnswerButton0(Vector2f(1600, 150)),
               AnswerButton1(Vector2f(1600, 150)), AnswerButton2(Vector2f(1600, 150));

string text_String, AnswerMessage;
wstring_convert<codecvt_utf8<wchar_t>> converter;

vector<string> endingMessage;
vector<vector<string>> charactorTalkMessege, userTalkMessege, charactorQuestionMessage;
vector<vector<vector<string>>> userAnswerMessage, charactorActionMessage;
vector<vector<vector<int>>> actionRelation;
vector<vector<Texture>> charactorQuestionImage, charactorTalkImage;
vector<vector<vector<Texture>>> charactorActionAnswerImage;

Texture V1, V2, V3, V4, V5, V6, V7, V8, V9, V10, V11, V12, V13, V14, V15, V16, V17, V18, V19, V20, V21, V22;


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

    back4.loadFromFile("../GG_Game/image/background/backwall3.PNG");
    SkipPicture.loadFromFile("../GG_Game/image/background/skip.PNG");
    
    // vector<string> EndingScreen = {"../GG_Game/image/background/Ventifinal1.PNG" , "../GG_Game/image/background/Ventifinal2.PNG","../GG_Game/image/background/Ventifinal3.PNG","../GG_Game/image/background/Sakurafinal1.PNG", "../GG_Game/image/background/Sakurafinal2.PNG","../GG_Game/image/background/Sakurafinal3.PNG"};
    vector<string> CharectorCanChoose = {"../GG_Game/charecter/venti/Coliseum/first2.jpeg","../GG_Game/charecter/Sakura/First.PNG"};
    vector<string> CharectorChooses = {"../GG_Game/charecter/venti/Coliseum/first1.jpeg","../GG_Game/charecter/Sakura/Second.PNG"};

    PictureCharector.resize(CharectorCanChoose.size());
    PictureCharectorChosses.resize(CharectorChooses.size());
    
    // for (i = 0; i < 3; i++)
    // {
    //     VentiEndScreen[i].loadFromFile(EndingScreen[i]);
    // }

    // for (i = 0; i < 3; i++)
    // {
    //     SakuraEndScreen[i].loadFromFile(EndingScreen[i+3]);
    // }
    
    
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
    skipButton.setPosition(1600, 900);
    skipButton.setTexture(SkipPicture);

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
    sakura1.setTexture(PictureCharector[1]);
    sakura1.setScale(0.55f,0.55f);
    sakura1.setPosition(1600.f, 900.f);
    

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
    Answer0.setOutlineThickness(4.f);
    Answer1.setFont(Thai);
    Answer1.setCharacterSize(40);
    Answer1.setPosition(1600, 960);
    Answer1.setFillColor(Color::Black);
    Answer1.setFillColor(Color::Black);
    Answer1.setOutlineColor(Color::White);
    Answer1.setOutlineThickness(4.f);
    Answer2.setFont(Thai);
    Answer2.setCharacterSize(40);
    Answer2.setPosition(1600, 960);
    Answer2.setFillColor(Color::Black);
    Answer2.setFillColor(Color::Black);
    Answer2.setOutlineColor(Color::White);
    Answer2.setOutlineThickness(4.f);

}

void CleanScreen(){
    window.clear();
    back1image.setTexture(back3);
    window.draw(back1image);
    text.setString("");
    day.setPosition(1600, 960);
    waifu1.setPosition(1600, 960);
    waifu2.setPosition(1600, 960);
    sakura1.setPosition(1600, 960);
    starto.setPosition(1600, 960);
    Answer0.setPosition(1600, 960);
    Answer1.setPosition(1600, 960);
    Answer2.setPosition(1600, 960);
    rectangle.setPosition(1600, 960);
    AnswerButton0.setPosition(1600, 960);
    AnswerButton1.setPosition(1600, 960);
    AnswerButton2.setPosition(1600, 960);
    skipButton.setPosition(1600, 960);
    myTime.restart();
    while (myTime.getElapsedTime().asMilliseconds() < 100) continue;
    window.draw(day);
    window.draw(waifu1);
    window.draw(waifu2);
    window.draw(starto);    
    window.draw(buttonnoimage);
    window.draw(text);
    window.draw(Answer0);
    window.draw(Answer1);
    window.draw(Answer2);
    window.draw(rectangle);
    window.draw(AnswerButton0);
    window.draw(AnswerButton1);
    window.draw(AnswerButton2);
    window.draw(skipButton);
    window.display();
}

void Start(){
    starto.setPosition(1600, 900);
    back1image.setTexture(back2);
    buttonnoimage.setPosition(1600.f, 900.f);
    c1.setPosition(10, 10);
    
    waifu1.setTexture(PictureCharector[0]);
    waifu1.setPosition(600.f, 40.f);
    sakura1.setTexture(PictureCharector[1]);
    sakura1.setPosition(900.f, 40.f);
    nahiden1.setTexture(PictureCharector[2]);
    nahiden1.setPosition(600.f, 80.f);

    text.setPosition(100, 790);

}

void End(){
    
    CleanScreen();
    if(Relation < 20) endScreen = 0;
    else if(Relation < 50) endScreen = 1;
    else endScreen = 2;

    back1image.setTexture(EndingScreen[endScreen]);
    text.setString(converter.from_bytes(endingMessage[endScreen]));
    text.setPosition(200, 750);
    
    myTime.restart();
    while (myTime.getElapsedTime().asMilliseconds() < 10000)
    {
        // รีเฟรชหน้าจอเพื่อปรับปรุงการแสดงผล
        window.clear();
        window.draw(back1image);
        window.draw(day);
        window.draw(text);
        window.draw(waifu1);
        window.draw(sakura1);
        window.display();

    }
    Day = 0, finalDay = 7, whoTalk = 0, basicTalk = 0, endBasicTalk = 2, Question = 0, Action = 100, Relation = 0, waitTimeChooseSkip = 0;
    QuestionTime = AlreadyChooseCharector = waitAnswer = alreadyQuestion = skip = alreadySkip = false;
    CleanScreen();
    Start();
}
 

void Skip(){
    skip = true;
    
    CleanScreen();

    text.setString(converter.from_bytes("เลือกฉากจบ"));
    
    Answer0.setString(converter.from_bytes("Bad End"));
    Answer1.setString(converter.from_bytes("So sweet End"));
    Answer2.setString(converter.from_bytes("Good End"));
    
    text.setPosition(100 , 80);
    Answer2.setPosition(100, 200);
    Answer1.setPosition(100, 450);
    Answer0.setPosition(100, 700);
    
    AnswerButton2.setPosition(0, 155);
    AnswerButton1.setPosition(0, 405);
    AnswerButton0.setPosition(0, 655);
    
    if(AnswerButton0.getGlobalBounds().contains(mousePos)) Relation = 0;
    if(AnswerButton1.getGlobalBounds().contains(mousePos)) Relation = 31;
    if(AnswerButton2.getGlobalBounds().contains(mousePos)) Relation = 82;
    
        // รีเฟรชหน้าจอเพื่อปรับปรุงการแสดงผล
    window.draw(AnswerButton1);
    window.draw(AnswerButton0);
    window.draw(AnswerButton2);
    window.setView(view);
    window.draw(text);
    
    while (myTime.getElapsedTime().asMilliseconds() < 250) continue;

    if (waitTimeChooseSkip > 0){
        if(AnswerButton0.getGlobalBounds().contains(mousePos)) {
            Relation = 0;
            skip = false;
        }
        if(AnswerButton1.getGlobalBounds().contains(mousePos)) {
            Relation = 31;
            skip = false;
        }
        if(AnswerButton2.getGlobalBounds().contains(mousePos)) {
            Relation = 82;
            skip = false;
        }
    }

    waitTimeChooseSkip++;   

    if (skip == false) End();
}