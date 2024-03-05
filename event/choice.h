#pragma once

#include "../initGame.h"
#include "../charecter/Sakura.h"
#include "../charecter/Venti.h"
#include "../charecter/furina.h"
#include "../charecter/raiden.h"
#include "../charecter/zhongli.h"
#include "../charecter/Nahida.h"

// Get Class
initGame init;
Venti venti;
Sakura sakura;
Nahida nahida;
Raiden raiden;
void Setup();
void Talk();

class choice
{
public:
    choice(long long);
};

choice::choice(long long Charactor)
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
        endingMessage = venti.Ending;
        EndingScreen = venti.endScreen;
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
        waifu2.setTexture(V10);
        waifu2.setPosition(1600.f, 900.f);
        waifu2.setScale(0.27f, 0.27f);
        


        break;

    case 'Sakura': charactorTalkMessege = sakura.SakuraTalk;
        userTalkMessege = sakura.userTalk;
        charactorQuestionMessage = sakura.SakuraQuestions;
        userAnswerMessage = sakura.userAnswers;
        charactorActionMessage = sakura.SakuraAction;
        actionRelation = sakura.actionRelation;
        charactorActionAnswerImage = sakura.ActionImage;
        charactorQuestionImage = sakura.SakuraQusImageTalk;
        charactorTalkImage  = sakura.SakuraActionImageTalk;
        endingMessage = sakura.Ending;
        EndingScreen = sakura.endScreen;
        V1 = sakura.S1;
        V2 = sakura.S2;
        V3 = sakura.S3;
        V4 = sakura.S4;
        V5 = sakura.S5;
        V6 = sakura.S6;
        thisIsCharacterNum = 1;


        break;


    case 'Nahida' : charactorTalkMessege = nahida.NahidaTalk;
        userTalkMessege = nahida.userTalk;
        charactorQuestionMessage = nahida.NahidaQuestions;
        userAnswerMessage = nahida.userAnswers;
        charactorActionMessage = nahida.NahidaAction;
        actionRelation = nahida.actionRelation;
        charactorActionAnswerImage = nahida.ActionImage;
        charactorQuestionImage = nahida.NahidaQusImageTalk;
        charactorTalkImage  = nahida.NahidaActionImageTalk;
        endingMessage = nahida.Ending;
        EndingScreen = nahida.endScreen;
        V1 = nahida.N1;
        V2 = nahida.N2;
        V3 = nahida.N3;
        V4 = nahida.N4;
        V5 = nahida.N5;
        V6 = nahida.N6;
        V7 = nahida.N7;
        V8 = nahida.N8;
        V9 = nahida.N9;
        thisIsCharacterNum = 2;
        waifu2.setScale(1.25f,1.25f);

        break;

        case 'Raiden' : charactorTalkMessege = raiden.RaidenTalk;
        userTalkMessege = raiden.userTalk;
        charactorQuestionMessage = raiden.RaidenQuestions;
        userAnswerMessage = raiden.userAnswers;
        charactorActionMessage = raiden.RaidenAction;
        actionRelation = raiden.actionRelation;
        charactorActionAnswerImage = raiden.ActionImage;
        charactorQuestionImage = raiden.RaidenQusImageTalk;
        charactorTalkImage  = raiden.RaidenActionImageTalk;
        endingMessage = raiden.Ending;
        EndingScreen = raiden.endScreen;
        V1 = raiden.R1;
        V2 = raiden.R2;
        V3 = raiden.R3;
        V4 = raiden.R4;
        V5 = raiden.R5;
     
        thisIsCharacterNum = 3;
        break;

    case 'e':  break;
    }
}

// Variable

void Setup(){
    
    // กำหนดเวลาในการเปลี่ยนรูปภาพเป็น 3 วินาที (3000 milliseconds)
    myTime.restart();
    while (myTime.getElapsedTime().asMilliseconds() < 1000)
    {
        // รีเฟรชหน้าจอเพื่อปรับปรุงการแสดงผล
        window.clear();
        window.draw(back1image);
        window.draw(c1);
        window.draw(waifu1);
        window.draw(sakura1);
        window.draw(nahiden1);
        window.draw(raiden1);
        window.display();
    }

    // เลื่อนตำแหน่ง waifu1 และ c1 ไปยังตำแหน่งที่ระบุ (1600, 900)
    c1.setPosition(1600, 900);
    if (thisIsCharacterNum == 0)
    {
        waifu1.setPosition(700.f, 900.f);
        nahiden1.setPosition(1600.f,900.f);
        sakura1.setPosition(1600.f,900.f);
        raiden1.setPosition(1600,900);
        waifu2.setScale(1.2f,1.2f);
    }
    

    if (thisIsCharacterNum == 1)
    {
        sakura1.setPosition(700.f,900.f);
        waifu1.setPosition(1600.f,900.f);
        waifu2.setScale(1.2f,1.2f);
        raiden1.setPosition(1600,900);
        nahiden1.setPosition(1600.f,900.f);
        waifu2.setTexture(sakura.S6);
    }

    if(thisIsCharacterNum == 2){
        nahiden1.setPosition(700.f,900.f);
        sakura1.setPosition(1600.f,900.f);
        waifu1.setPosition(1600.f,900.f);
        raiden1.setPosition(1600,900);
        waifu2.setTexture(nahida.N1);
    }
    if (thisIsCharacterNum == 3)
    {
        raiden1.setPosition(700.f,900.f);
        sakura1.setPosition(1600.f,900.f);
        waifu1.setPosition(1600.f,900.f);
        nahiden1.setPosition(1600,900);
        waifu2.setScale(1.2f,1.2f);
        waifu2.setTexture(raiden.R2);

    }
    
   


    
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
            window.draw(sakura1);
            window.draw(nahiden1);
            window.draw(raiden1);
            window.display();

    }
    back1image.setTexture(back4);
    day.setPosition(10, 10);
    day.setFillColor(Color(0, 0, 0));

    waifu2.setPosition(455.f, 180.f);
    myTime.restart();
    while (myTime.getElapsedTime().asMilliseconds() < 1000)
    {
        window.clear();
        window.setView(view);
        window.draw(back1image);
        window.draw(day);
        window.draw(waifu2);

        window.display();
    }

    rectangle.setPosition(0, 750);
    window.draw(rectangle);
    skipButton.setPosition(1200, -100);
    window.draw(skipButton);
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
        Question = 0;
        whoTalk = 0;
    }

    text.setString(converter.from_bytes(text_String));
}


void questionText(){
    text_String = charactorQuestionMessage[Day][Question];
    AnswerMessage = userAnswerMessage[Day][Question][0];
    Answer0.setString(converter.from_bytes(AnswerMessage));
    AnswerMessage = userAnswerMessage[Day][Question][1];
    Answer1.setString(converter.from_bytes(AnswerMessage));
    AnswerMessage = userAnswerMessage[Day][Question][2];
    Answer2.setString(converter.from_bytes(AnswerMessage));
    
    Answer0.setPosition(100, 100);
    AnswerButton0.setPosition(0, 55);
    window.draw(AnswerButton0);
    Answer1.setPosition(100, 350);
    AnswerButton1.setPosition(0, 305);
    window.draw(AnswerButton1);
    Answer2.setPosition(100, 600);
    AnswerButton2.setPosition(0, 555);
    window.draw(AnswerButton2);
    text.setString(converter.from_bytes(text_String));
    window.setView(view);
    window.draw(text);
}

void clearAnswer(){
    Answer0.setPosition(2000, 2000);
    Answer1.setPosition(2000, 2000);
    Answer2.setPosition(2000, 2000);
    AnswerButton0.setPosition(2000, 2000);
    AnswerButton1.setPosition(2000, 2000);
    AnswerButton2.setPosition(2000, 2000);
}  