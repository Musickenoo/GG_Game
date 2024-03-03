 
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
                    if (buttonckimage.getGlobalBounds().contains(mousePos) && !AlreadyChooseCharector)
                    {
                        starto.setPosition(1600, 900);
                        back1image.setTexture(back2);
                        buttonnoimage.setPosition(1600.f, 900.f);
                        c1.setPosition(10, 10);
                        waifu1.setPosition(600.f, 40.f);
                    }
                    else if (waifu1.getGlobalBounds().contains(mousePos) && state >= 0 && !AlreadyChooseCharector) // เพิ่มเงื่อนไขตรวจสอบการคลิกที่ waifu1
                    {
                        waifu1.setTexture(PictureCharectorChosses[0]);
                        choice choice('Sakura');
                        Setup();
                    }

                    else if (QuestionTime){
                        if (!waitAnswer){
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
                            window.draw(text);

                            waitAnswer = true;
                        }
                        if(waitAnswer){
                            if(AnswerButton0.getGlobalBounds().contains(mousePos)) Action = 0;
                            if(AnswerButton1.getGlobalBounds().contains(mousePos)) Action = 1;
                            if(AnswerButton2.getGlobalBounds().contains(mousePos)) Action = 2;

                            if (Action >= 0 && Action <=2){
                                Relation += actionRelation[Day][Question][Action];
                                waifu2.setTexture(charactorActionAnswerImage[Day][Question][Action]);
                                text.setString(converter.from_bytes(charactorActionMessage[Day][Question][Action]));
                                Answer0.setPosition(2000, 2000);
                                Answer1.setPosition(2000, 2000);
                                Answer2.setPosition(2000, 2000);
                                AnswerButton0.setPosition(2000, 2000);
                                AnswerButton1.setPosition(2000, 2000);
                                AnswerButton2.setPosition(2000, 2000);
                                if (rectangle.getGlobalBounds().contains(mousePos)) // เพิ่มเงื่อนไขตรวจสอบการคลิกที่ waifu1
                                {
                                    Question++;

                                    if(Question == 3){
                                        QuestionTime = false;
                                        alreadyQuestion = true;
                                        Question = 0;
                                        whoTalk = 0;
                                        basicTalk = 2;
                                        Answer0.setPosition(2000, 2000);
                                        Answer1.setPosition(2000, 2000);
                                        Answer2.setPosition(2000, 2000);
                                        AnswerButton0.setPosition(2000, 2000);
                                        AnswerButton1.setPosition(2000, 2000);
                                        AnswerButton2.setPosition(2000, 2000);
                                        // Talk();
                                        continue;
                                    }

                                    Action = 100;
                                    waitAnswer = false;

                                    text.setString(converter.from_bytes(charactorQuestionMessage[Day][Question]));
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

                    else if (rectangle.getGlobalBounds().contains(mousePos) && !QuestionTime) // เพิ่มเงื่อนไขตรวจสอบการคลิกที่ waifu1
                    {   
                        if (basicTalk == 3) {
                            Day++;
                            if(Day == finalDay) {
                                whoTalk = 0;
                                basicTalk = 0;
                                Question = 0;
                                Day = 0;
                                AlreadyChooseCharector = false;
                                break;
                            }  
                            whoTalk = 0;
                            basicTalk = 0;
                            alreadyQuestion = waitAnswer = QuestionTime = false;
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
                        myTime.restart();
                        while (myTime.getElapsedTime().asMilliseconds() < 1000){
                            window.clear();
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

        day.setString("DAY " + to_string(Day+1));
        window.clear();
        //ฉากแรก
        window.draw(back1image);
        window.draw(c1);
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
        window.display();
    }

    return 0;
}

