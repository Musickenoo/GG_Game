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

vector<vector<string>> charactorTalkMessege, userTalkMessege, charactorQuestionMessage;
vector<vector<vector<string>>> userAnswerMessage, charactorActionMessage;
vector<vector<vector<int>>> actionRelation;

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


Sprite waifu2;

int Charactor = 'Venti';

// Variable

int Relation() {

    // Variable
    int finalDay = 7, endBasicTalk = 2, relation = 0;
    Text text;
    string s;

    // ดึงค่าข้อมูลตัวละคร
    Venti Venti;
    //Sakura Sakura;


    switch (Charactor) {
    case 'Venti':  charactorTalkMessege = Venti.ventiTalk;
        userTalkMessege = Venti.userTalk;
        charactorQuestionMessage = Venti.ventiQuestions;
        userAnswerMessage = Venti.userAnswers;
        charactorActionMessage = Venti.ventiAction;
        actionRelation = Venti.actionRelation;
        V1 = Venti.V1;
        V2 = Venti.V2;
        V3 = Venti.V3;
        V4 = Venti.V4;
        V5 = Venti.V5;
        V6 = Venti.V6;
        V7 = Venti.V7;
        V8 = Venti.V8;
        V9 = Venti.V9;
        V10 = Venti.V10;
        V11 = Venti.V11;
        V12 = Venti.V12;
        V13 = Venti.V13;
        V14 = Venti.V14;
        V15 = Venti.V15;
        V16 = Venti.V16;
        V17 = Venti.V17;
        V18 = Venti.V18;
        V19 = Venti.V19;
        V20 = Venti.V20;
        V21 = Venti.V21;
        V22 = Venti.V22;

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
    }*/

    waifu2.setTexture(V1);
    waifu2.setPosition(1600.f, 900.f);
    waifu2.setScale(1.7f, 1.8f);


    // สร้างอาร์เรย์ของ Text จากประโยคคำถาม
    vector<vector<Text>> charactorTalk(charactorTalkMessege.size()); // Resize the vector
    for (int Day = 0; Day < charactorTalkMessege.size(); Day++) {
        for (int Question = 0; Question < charactorTalkMessege[Day].size(); Question++) {
            s = charactorTalkMessege[Day][Question];
            text.setFont(init.Thai);
            text.setString(s);
            text.setCharacterSize(60);
            text.setPosition(1600, 900);
            text.setFillColor(Color::Black);
            charactorTalk[Day].push_back(text);
        }
    }

    vector<vector<Text>> userTalk(userTalkMessege.size());  // Resize the vector
    for (int Day = 0; Day < userTalkMessege.size(); Day++) {
        for (int Question = 0; Question < userTalkMessege[Day].size(); Question++) {
            s = Venti.userTalk[Day][Question];
            text.setFont(init.Thai);
            text.setString(s);
            text.setCharacterSize(60);
            text.setPosition(1600, 900);
            text.setFillColor(Color::Black);
            userTalk[Day].push_back(text);
        }
    }

    vector<vector<Text>> charactorQuestions(charactorQuestionMessage.size());  // Resize the vector
    for (int Day = 0; Day < charactorQuestionMessage.size(); Day++) {
        for (int Question = 0; Question < charactorQuestionMessage[Day].size(); Question++) {
            s = charactorQuestionMessage[Day][Question];
            text.setFont(init.Thai);
            text.setString(s);
            text.setCharacterSize(60);
            text.setPosition(1600, 900);
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
                text.setFont(init.Thai);
                text.setString(s);
                text.setCharacterSize(60);
                text.setPosition(1600, 900);
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
                text.setFont(init.Thai);
                text.setString(s);
                text.setCharacterSize(60);
                text.setPosition(1600, 900);
                text.setFillColor(Color::Black);
                charactorAction[Day][Question].push_back(text);
            }
        }
    }

    for (int Day = 0; Day < finalDay; Day++) {
        for (int basicTalk = 0; basicTalk < endBasicTalk; basicTalk++) {
            while (true) {
                break;
            }
        }

        for (int Question = 0; Question < charactorQuestionMessage[Day].size(); Question++) {
            cout << endl << "คำถามที่ " << Question + 1 << " " << charactorQuestionMessage[Day][Question] << endl; // เทส
            for (int Answer = 0; Answer < userAnswerMessage[Day][Question].size(); Answer++) {
                cout << "คำตอบที่ " << Answer + 1 << " " << userAnswerMessage[Day][Question][Answer] << endl; // เทส
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
        cin.get(); // ตัวเทส
        cout << endl << charactorTalkMessege[Day][endBasicTalk] << endl; // เทส
        cout << userTalkMessege[Day][endBasicTalk] << endl << endl; // เทส  
    }


    return relation;
}
