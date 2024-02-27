#include "../GG_Game/init.h"

int Relation(){
    init init;
    int finalDay = 7, endBasicTalk = 3, relation = 0;

    // ดึงค่าข้อมูลตัวละคร
    ventiInit();

    RectangleShape rectangle(Vector2f(1600, 150));
    rectangle.setPosition(1600, 900);
    rectangle.setFillColor(Color(200, 200, 200, 100));

    // สร้างอาร์เรย์ของ Text จากประโยคคำถาม
    vector<Text> talk;
    for (const auto& question : ventiTalk) {
        Text text;
        text.setFont(Thai);
        text.setString(question);
        text.setCharacterSize(60);
        text.setPosition(1600, 900);
        text.setFillColor(Color::Black);
        Vtalk.push_back(text);
    }

    vector<Text>  Utalk;
    for (const auto& question : userTalk) {
        Text text;
        text.setFont(Thai);
        text.setString(question);
        text.setCharacterSize(60);
        text.setPosition(1600, 900);
        text.setFillColor(Color::Black);
        Utalk.push_back(text);
    }

    vector<Text>  Vqus;
    for (const auto& question : ventiQuestions) {
        Text text;
        text.setFont(init.Thai);
        text.setString(question);
        text.setCharacterSize(60);
        text.setPosition(1600, 900);
        text.setFillColor(Color::Black);
        Vqus.push_back(text);
    }

    vector<Text> Uans1;
    for (const auto& question : Useranswer1) {
        Text text;
        text.setFont(Thai);
        text.setString(question);
        text.setCharacterSize(60);
        text.setPosition(1600, 900);
        text.setFillColor(Color::Black);
        Uans1.push_back(text);
    }

    vector<Text> Uans2;
    for (const auto& question : Useranswer2) {
        Text text;
        text.setFont(Thai);
        text.setString(question);
        text.setCharacterSize(60);
        text.setPosition(1600, 900);
        text.setFillColor(Color::Black);
        Uans2.push_back(text);
    }

    // สร้าง Text สำหรับคำตอบของ Venti
    vector<Text> Uans3;
    for (const auto& answer : Useranswer2) {
        Text text;
        text.setFont(Thai);
        text.setString(answer);
        text.setCharacterSize(24);
        text.setFillColor(Color::Black);
        Uans3.push_back(text);
    }
    
    for(int Day = 0; Day < finalDay; Day++){
        for(int basicTalk = 0; basicTalk < endBasicTalk; basicTalk++){
            rectangle.setPosition(0, 750);
            init.window.draw(rectangle);
            // init.Vtalk[j].setPosition(600, 750);
            // init.Vtalk[j].setFillColor(Color(0, 0, 0));
        }
    }
    return relation;
}