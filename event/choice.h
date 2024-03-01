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
void test();
int thisIsCharacterNum;


Clock myTime;
Text c1("choosen waifu", amazing, 80);
Text starto("Judgment Of Nevillete \n The Archon", amazing, 80);
Text thaiText("สวัสดีชาวโลก",Thai, 80);
Text day("DAY " + to_string(0), amazing, 80);
Sprite waifu1;
RectangleShape rectangle(Vector2f(1600, 150));
Text text;
string s;


vector<vector<string>> charactorTalkMessege, userTalkMessege, charactorQuestionMessage;
vector<vector<vector<string>>> userAnswerMessage, charactorActionMessage;
vector<vector<vector<int>>> actionRelation;
vector<vector<Text>> charactorTalk(charactorTalkMessege.size()); // Resize the vector

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

int Charactor = 'Venti';

class choice
{
private:
    /* data */
public:
    choice(/* args */);
    ~choice();
};

choice::choice(/* args */)
{
    switch (Charactor) {
    case 'Venti':  charactorTalkMessege = venti.ventiTalk;
        userTalkMessege = venti.userTalk;
        charactorQuestionMessage = venti.ventiQuestions;
        userAnswerMessage = venti.userAnswers;
        charactorActionMessage = venti.ventiAction;
        actionRelation = venti.actionRelation;
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

choice::~choice()
{
}


// Variable

void test(){

    waifu2.setTexture(venti.V6);
    waifu2.setPosition(1600.f, 900.f);
    waifu2.setScale(0.27f, 0.27f);
    
        // เปลี่ยนรูป waifu1Texture เป็น waifu12Texture
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
                        
                    
}

int Relation() {

    // Variable
    int finalDay = 7, endBasicTalk = 2, relation = 0;
    
    text.setCharacterSize(50);
    text.setFillColor(Color::White);

    // ภาพตัวแทนตัวละคร Venti

    // waifu2.setTexture(PictureCharectorChosses[thisIsCharacterNum]);
    // waifu2.setPosition(1600.f , 900.f);
    // waifu2.setScale(0.27f, 0.27f);


    // สร้างอาร์เรย์ของ Text จากประโยคคำถาม
    for (int Day = 0; Day < charactorTalkMessege.size(); Day++) {
        for (int Question = 0; Question < charactorTalkMessege[Day].size(); Question++) {
            s = charactorTalkMessege[Day][Question];
            text.setFont(Thai);
            text.setString(s);
            text.setCharacterSize(60);
            text.setPosition(100, 90);
            text.setFillColor(Color::Black);
            charactorTalk[Day].push_back(text);
        }
    }

    vector<vector<Text>> userTalk(userTalkMessege.size());  // Resize the vector
    for (int Day = 0; Day < userTalkMessege.size(); Day++) {
        for (int Question = 0; Question < userTalkMessege[Day].size(); Question++) {
            s = venti.userTalk[Day][Question];
            text.setFont(Thai);
            text.setString(s);
            text.setCharacterSize(60);
            text.setPosition(160, 90);
            text.setFillColor(Color::Black);
            userTalk[Day].push_back(text);
        }
    }

    vector<vector<Text>> charactorQuestions(charactorQuestionMessage.size());  // Resize the vector
    for (int Day = 0; Day < charactorQuestionMessage.size(); Day++) {
        for (int Question = 0; Question < charactorQuestionMessage[Day].size(); Question++) {
            s = charactorQuestionMessage[Day][Question];
            text.setFont(Thai);
            text.setString(s);
            text.setCharacterSize(60);
            text.setPosition(100, 90);
            text.setFillColor(Color::Black);
            charactorQuestions[Day].push_back(text);
        }
    }
    vector<vector<vector<Text>>> userAnswers(userAnswerMessage.size());  // Resize the vector
    for (int Day = 0; Day < userAnswerMessage.size(); Day++) {
        userAnswers[Day].resize(userAnswerMessage[Day].size());  // Resize the inner vector
        for (int Question = 0; Question < userAnswerMessage[Day].size(); Question++) {
            for (int Answer = 0; Answer < userAnswerMessage[Day][Question].size(); Answer++) {
                s = userAnswerMessage[Day][Question][Answer];
                text.setFont(Thai);
                text.setString(s);
                text.setCharacterSize(60);
                text.setPosition(160, 90);
                text.setFillColor(Color::Black);
                userAnswers[Day][Question].push_back(text);
            }
        }
    }

    vector<vector<vector<Text>>> charactorAction(charactorActionMessage.size());  // Resize the vector
    for (int Day = 0; Day < charactorActionMessage.size(); Day++) {
        charactorAction[Day].resize(charactorActionMessage[Day].size());  // Resize the inner vector
        for (int Question = 0; Question < charactorActionMessage[Day].size(); Question++) {
            for (int Action = 0; Action < charactorActionMessage[Day][Question].size(); Action++) {
                s = charactorActionMessage[Day][Question][Action];
                text.setFont(Thai);
                text.setString(s);
                text.setCharacterSize(60);
                text.setPosition(160, 90);
                text.setFillColor(Color::Black);
                charactorAction[Day][Question].push_back(text);
            }
        }
    }

    for (int Day = 0; Day < finalDay; Day++) {
        for (int basicTalk = 0; basicTalk < endBasicTalk; basicTalk++) {
            
        }

        for (int Question = 0; Question < charactorQuestionMessage[Day].size(); Question++) {
            //cout << endl << "คำถามที่ " << Question + 1 << " " << charactorQuestionMessage[Day][Question] << endl; // เทส
            
            for (int Answer = 0; Answer < userAnswerMessage[Day][Question].size(); Answer++) {
                //cout << "คำตอบที่ " << Answer + 1 << " " << userAnswerMessage[Day][Question][Answer] << endl; // เทส
            }

            while (true) {
                // ทำ function กดเลือกช้อย
                //if (เลือกคำตอบแล้ว){   
                    //int action; 
                    //if(เลือกคำตอบที่ 1) action = 0;
                    //if(เลือกคำตอบที่ 2) action = 1;
                    //if(เลือกคำตอบที่ 3) action = 2;
                    // put text ขึ้นจอตรงนี้
                    //cout << charactorActionMessage[Day][Question][action]; // เทส
                    //relation += actionRelation[Day][Question][action];
                break;
            }
            break; // เทส
        }
        //cin.get(); // ตัวเทส
        // cout << endl << charactorTalkMessege[Day][endBasicTalk] << endl; // เทส
        // cout << userTalkMessege[Day][endBasicTalk] << endl << endl; // เทส  
    }


    return relation;
}


void WaitClick(){
    while(1){
        if (rectangle.getGlobalBounds().contains(mousePos)) break;
    }
}