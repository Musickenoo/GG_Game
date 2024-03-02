 
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
                        choice choice;
                        Setup();
                    }
                    else if (QuestionTime){
                        text_String = charactorQuestionMessage[Day][Question];
                        AnswerMessage = userAnswerMessage[Day][Question][0];
                        Answer0.setString(converter.from_bytes(AnswerMessage));
                        AnswerMessage = userAnswerMessage[Day][Question][1];
                        Answer1.setString(converter.from_bytes(AnswerMessage));
                        AnswerMessage = userAnswerMessage[Day][Question][2];
                        Answer2.setString(converter.from_bytes(AnswerMessage));
                        
                        Answer0.setPosition(100, 100);
                        AnswerButton0.setPosition(0, 50);
                        window.draw(AnswerButton0);
                        Answer1.setPosition(100, 350);
                        AnswerButton1.setPosition(0, 300);
                        window.draw(AnswerButton1);
                        Answer2.setPosition(100, 600);
                        AnswerButton2.setPosition(0, 550);
                        window.draw(AnswerButton2);
                        if(AnswerButton0.getGlobalBounds().contains(mousePos)){
                            Action = 0;
                            QuestionTime = false;
                        }
                        if(AnswerButton1.getGlobalBounds().contains(mousePos)){
                            Action = 1;
                            QuestionTime = false;
                        }
                        if(AnswerButton2.getGlobalBounds().contains(mousePos)){
                            Action = 2;
                            QuestionTime = false;
                        }
                        waifu2.setTexture(charactorActionAnswerImage[Day][Question][Action]);
                        text.setString(converter.from_bytes(charactorActionMessage[Day][Question][Action]));
                        window.clear();
                        window.draw(text);
                        window.draw(back1image);
                        window.draw(day);
                        window.draw(waifu2);
                        window.display();
                        Question++;
                        if(Question == 3){
                            QuestionTime = false;
                            Question = 0;
                            basicTalk++;
                            Answer0.setPosition(2000, 2000);
                            Answer1.setPosition(2000, 2000);
                            Answer2.setPosition(2000, 2000);
                            AnswerButton0.setPosition(2000, 2000);
                            AnswerButton1.setPosition(2000, 2000);
                            AnswerButton2.setPosition(2000, 2000);
                            continue;
                        }
                    }

                    else if (rectangle.getGlobalBounds().contains(mousePos) && !QuestionTime) // เพิ่มเงื่อนไขตรวจสอบการคลิกที่ waifu1
                    {   
                        Talk();
                        myTime.restart();
                        while (myTime.getElapsedTime().asMilliseconds() < 1000)
                        {
                            window.clear();
                            window.draw(text);
                            window.draw(back1image);
                            window.draw(day);
                            window.draw(waifu2);
                            window.display();
                        }
                    }

                    if(Day == finalDay) {
                        whoTalk = 0;
                        basicTalk = 0;
                        Question = 0;
                        Day = 0;
                        AlreadyChooseCharector = false;
                        break;
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

