#pragma once

#include "../initGame.h"
//#include "../charecter/Sakura.h"
#include "../charecter/Venti.h"
#include "../charecter/furina.h"
#include "../charecter/nahida.h"
#include "../charecter/raiden.h"
#include "../charecter/zhongli.h"

// Get Class
initGame init;
Venti venti;
void Setup();
void Talk();

int Charactor = 'Venti';
int whoTalk = 0;


class choice
{
public:
    choice();
};

choice::choice()
{
    switch (Charactor) {
    case 'Venti':  charactorTalkMessege = venti.ventiTalk;
        userTalkMessege = venti.userTalk;
        charactorQuestionMessage = venti.ventiQuestions;
        userAnswerMessage = venti.userAnswers;
        charactorActionMessage = venti.ventiAction;
        actionRelation = venti.actionRelation;
        charactorActionAnswerImage = venti.ActionImage;
        charactorQuestionImage = venti.ventiQusImageTalk;
        charactorTalkImage  = venti.ventiActionImageTalk;
        V1 = venti.V1;
        V2 = venti.V2;
        V3 = venti.V3;
        V4 = venti.V4;
        V5 = venti.V5;
        V6 = venti.V6;
        V7 = venti.V7;
        V8 = venti.V8;
        V9 = venti.V9;
        V10 = venti.V10;
        V11 = venti.V11;
        V12 = venti.V12;
        V13 = venti.V13;
        V14 = venti.V14;
        V15 = venti.V15;
        V16 = venti.V16;
        V17 = venti.V17;
        V18 = venti.V18;
        V19 = venti.V19;
        V20 = venti.V20;
        V21 = venti.V21;
        V22 = venti.V22;
        thisIsCharacterNum = 0;


        break;

    /*case 'Sakura': charactorTalkMessege = Sakura.SakuraTalk;
        userTalkMessege = Sakura.userTalk;
        charactorQuestionMessage = Sakura.SakuraQuestions;
        userAnswerMessage = Sakura.userAnswers;
        charactorActionMessage = Sakura.SakuraAction;
        actionRelation = Sakura.actionRelation;
        waifuface1Texture = Sakura.waifuface1Texture;
        waifuface2Texture = Sakura.waifuface2Texture;
        waifuface3Texture = Sakura.waifuface3Texture;
        waifuface4Texture = Sakura.waifuface4Texture;
        waifuface5Texture = Sakura.waifuface5Texture;
        waifuface6Texture = Sakura.waifuface6Texture;
        break;

    case 'e':  break;
    */
    }
}

// Variable

void Setup(){

    waifu2.setTexture(venti.V6);
    waifu2.setPosition(1600.f, 900.f);
    waifu2.setScale(0.27f, 0.27f);
    
    // กำหนดเวลาในการเปลี่ยนรูปภาพเป็น 3 วินาที (3000 milliseconds)
    myTime.restart();
    while (myTime.getElapsedTime().asMilliseconds() < 1000)
    {
        // รีเฟรชหน้าจอเพื่อปรับปรุงการแสดงผล
        window.clear();
        window.draw(back1image);
        window.draw(c1);
        window.draw(waifu1);
        window.display();
    }

    // เลื่อนตำแหน่ง waifu1 และ c1 ไปยังตำแหน่งที่ระบุ (1600, 900)
    waifu1.setPosition(700.f, 900.f);
    c1.setPosition(1600, 900);


    
    day.setPosition(700, 400);
    back1image.setTexture(back3);
    myTime.restart();
    while (myTime.getElapsedTime().asMilliseconds() < 1000)
    {
            // รีเฟรชหน้าจอเพื่อปรับปรุงการแสดงผล
            window.clear();
            window.draw(back1image);
            window.draw(day);
            window.draw(waifu1);
            window.display();

    }
    back1image.setTexture(back4);
    day.setPosition(10, 10);
    day.setFillColor(Color(0, 0, 0));

    waifu2.setPosition(450.f, 200.f);
    myTime.restart();
    while (myTime.getElapsedTime().asMilliseconds() < 1000)
    {
        window.clear();
        window.draw(back1image);
        window.draw(day);
        window.draw(waifu2);

        window.display();
    }

    rectangle.setPosition(0, 750);
    window.draw(rectangle);
    // Vtalk[j].setPosition(600, 750);
    // Vtalk[j].setFillColor(Color(0, 0, 0));
    
    AlreadyChooseCharector = true;
    whoTalk = 0;
    basicTalk = 0;
    Question = 0;
    Day = 0;           
    Talk();         
}

void Talk() {

    if (whoTalk == 0) text_String = charactorTalkMessege[Day][basicTalk];
    if (whoTalk == 1) text_String = userTalkMessege[Day][basicTalk];
    waifu2.setTexture(charactorTalkImage[Day][basicTalk]);
    whoTalk++;

    if (whoTalk == 2) {
        whoTalk = 0;
        basicTalk++;
    }

    if (basicTalk == 2 && !alreadyQuestion) {
        QuestionTime = true;
        whoTalk = 0;
    }

    text.setString(converter.from_bytes(text_String));
}
