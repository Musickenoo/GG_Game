#include "../GG_Game/init.h"

int Relation(){
    init init;
    int finalDay = 7, endBasicTalk = 3, relation = 0;
    vector<vector<string>> ventitalk, userTalk, ventiQuestions, userAnswers;

    RectangleShape rectangle(Vector2f(1600, 150));
    rectangle.setPosition(1600, 900);
    rectangle.setFillColor(Color(200, 200, 200, 100));
    
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