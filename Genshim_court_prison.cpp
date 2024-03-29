 
#include "../GG_Game/event/choice.h"
Event event;

int main(){
    // ภาพตัวแทนตัวละคร Venti
  
    
    // Relation();


    while (window.isOpen())
    {
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
            else if (event.type == Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == Mouse::Left)
                {
                    mousePos = window.mapPixelToCoords(Mouse::getPosition(window));
                    if(!alreadySkip && skip) {
                        Skip();
                    }
                    if(!skip){
                        if (!AlreadyChooseCharector){
                            if (buttonckimage.getGlobalBounds().contains(mousePos)){
                                Start();
                            }
                            if (waifu1.getGlobalBounds().contains(mousePos)) // เพิ่มเงื่อนไขตรวจสอบการคลิกที่ waifu1
                            {
                                waifu1.setTexture(PictureCharectorChosses[0]);
                                choice choice('Venti');
                                Setup();
                            }
                            else if (sakura1.getGlobalBounds().contains(mousePos)) // เพิ่มเงื่อนไขตรวจสอบการคลิกที่ waifu1
                            {
                                sakura1.setTexture(PictureCharectorChosses[1]);
                                choice choice('Sakura');
                                Setup();
                            }
                            else if (nahiden1.getGlobalBounds().contains(mousePos))
                            {
                                nahiden1.setTexture(PictureCharectorChosses[2]);
                                choice choice('Nahida');
                                Setup();
                            }
                            else if (raiden1.getGlobalBounds().contains(mousePos)) // เพิ่มเงื่อนไขตรวจสอบการคลิกที่ waifu1
                            {
                                raiden1.setTexture(PictureCharectorChosses[3]);
                                choice choice('Raiden');
                                Setup();
                            }
                            
                            
                        }
                        else if (skipButton.getGlobalBounds().contains(mousePos)) {
                            Skip();
                        }
                        else if (QuestionTime){
                            if (!waitAnswer){
                                questionText();
                                waitAnswer = true;
                            }
                            if(waitAnswer){
                                if(AnswerButton0.getGlobalBounds().contains(mousePos)) Action = 0;
                                if(AnswerButton1.getGlobalBounds().contains(mousePos)) Action = 1;
                                if(AnswerButton2.getGlobalBounds().contains(mousePos)) Action = 2;

                                if (Action >= 0 && Action <=2){
                                    waifu2.setTexture(charactorActionAnswerImage[Day][Question][Action]);
                                    text.setString(converter.from_bytes(charactorActionMessage[Day][Question][Action]));
                                    clearAnswer();
                                    if (rectangle.getGlobalBounds().contains(mousePos)) // เพิ่มเงื่อนไขตรวจสอบการคลิกที่ waifu1
                                    {
                                        Relation += actionRelation[Day][Question][Action];
                                        Question++;

                                        if(Question == 3){
                                            QuestionTime = false;
                                            alreadyQuestion = true;
                                            Question = 0;
                                            whoTalk = 0;
                                            basicTalk = 2;
                                            clearAnswer();
                                            continue;
                                        }

                                        Action = 100;
                                        waitAnswer = false;

                                        questionText();
                                    }
                                    window.clear();
                                    window.draw(text);
                                    window.draw(back1image);
                                    window.draw(day);
                                    window.draw(waifu2);
                                    window.display();
                                }
                            }
                        }

                        else if ((rectangle.getGlobalBounds().contains(mousePos) && !QuestionTime && AlreadyChooseCharector)) // เพิ่มเงื่อนไขตรวจสอบการคลิกที่ waifu1
                        {   
                            if (basicTalk == 3) {
                                Day++;
                                whoTalk = 0;
                                basicTalk = 0;
                                Action = 100;
                                alreadyQuestion = waitAnswer = QuestionTime = false;
                                if(Day == finalDay) {
                                    End();
                                    break;
                                }  
                                waifu1.setPosition(700.f, 900.f);
                                c1.setPosition(1600, 900);
                                day.setPosition(700, 400);
                                day.setFillColor(Color(0,255,0));
                                day.setString("DAY " + to_string(Day+1));
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
                                rectangle.setPosition(0, 750);
                                window.draw(rectangle);
                                Question = 0;
                            }
                            Talk();
                        }
                    }
                }
            }
        }

        // ตรวจสอบว่าเมาส์อยู่ในพื้นที่ของ buttonnoimage หรือไม่
        if (buttonnoimage.getGlobalBounds().contains(mousePos))
        {
            // เมาส์อยู่ในพื้นที่ของ buttonnoimage แสดง buttonckimage
            buttonnoimage.setTexture(buttonck);
            buttonHovered = true;
        }
        else

        
        {
            // เมาส์ไม่อยู่ในพื้นที่ของ buttonnoimage แสดง buttonnoimage เหมือนเดิม
            if (!buttonHovered)
            {
                buttonnoimage.setTexture(buttonno);
            }
            else
            {
                // เมาส์ไม่อยู่ในพื้นที่ของ buttonnoimage เปลี่ยนกลับเป็น buttonnoimage เดิม
                buttonnoimage.setTexture(buttonno);
                buttonHovered = false;
            }
        }

        // cout << "Day : " << Day+1 << endl;
        // cout << "whoTalk : " << whoTalk << endl;
        // cout << "basicTalk : " << basicTalk << endl;
        // cout << "Question : " << Question << endl; 
        // cout << "Ending : "<< Relation <<endl;

        day.setString("DAY " + to_string(Day+1));
        window.clear();
        window.setView(view);
        //ฉากแรก
        window.draw(back1image);
        window.draw(c1);
        window.draw(day);
        window.draw(waifu1);
        window.draw(waifu2);
        window.draw(sakura1);
        window.draw(nahiden1);
        window.draw(raiden1);
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

    return 0;
}

