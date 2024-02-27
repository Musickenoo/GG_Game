#include "../initGame.h"

#include "../charecter/Venti.h"
#include "../charecter/furina.h"
#include "../charecter/nahida.h"
#include "../charecter/raiden.h"
#include "../charecter/zhongli.h"

initGame init;

int Relation(){

    // ดึงค่าข้อมูลตัวละคร
    Venti Venti;

    // Variable
    int finalDay = 7, endBasicTalk = 3, relation = 0;
    Text text;
    string s;

    // สร้างอาร์เรย์ของ Text จากประโยคคำถาม
    vector<vector<Text>> charactorTalk;
    for (int Day = 0; Day < Venti.ventiTalk.size(); Day++) {
        for (int Question = 0; Question < Venti.ventiTalk[Day].size(); Question++){
            s = Venti.ventiTalk[Day][Question];
            text.setFont(init.Thai);
            text.setString(s);
            text.setCharacterSize(60);
            text.setPosition(1600, 900);
            text.setFillColor(Color::Black);
            charactorTalk[Day].push_back(text);
        }
    }
    

    vector<vector<Text>> userTalk;
    for (int Day = 0; Day < Venti.userTalk.size(); Day++) {
        for (int Question = 0; Question < Venti.userTalk[Day].size(); Question++){
            s = Venti.userTalk[Day][Question];
            text.setFont(init.Thai);
            text.setString(s);
            text.setCharacterSize(60);
            text.setPosition(1600, 900);
            text.setFillColor(Color::Black);
            userTalk[Day].push_back(text);
        }
    }

    vector<vector<Text>> charactorQuestions;
    for (int Day = 0; Day < Venti.ventiQuestions.size(); Day++) {
        for (int Question = 0; Question < Venti.ventiQuestions[Day].size(); Question++){
            s = Venti.ventiQuestions[Day][Question];
            text.setFont(init.Thai);
            text.setString(s);
            text.setCharacterSize(60);
            text.setPosition(1600, 900);
            text.setFillColor(Color::Black);
            charactorQuestions[Day].push_back(text);
        }
    }

    vector<vector<vector<Text>>> userAnswers;
    for (int Day = 0; Day < Venti.userAnswers.size(); Day++) {
        for (int Question = 0; Question < Venti.userAnswers[Day].size(); Question++){
            for (int Answer = 0; Answer < Venti.userAnswers[Day][Question].size(); Answer++){
                s = Venti.userAnswers[Day][Question][Answer];
                text.setFont(init.Thai);
                text.setString(s);
                text.setCharacterSize(60);
                text.setPosition(1600, 900);
                text.setFillColor(Color::Black);
                userAnswers[Day][Question].push_back(text);
            }
        }
    }

    for(int Day = 0; Day < finalDay; Day++){
        for(int basicTalk = 0; basicTalk < endBasicTalk; basicTalk++){
            
        }
    }
    return relation;
}