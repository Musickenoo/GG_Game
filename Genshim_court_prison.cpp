 
#include "../GG_Game/event/choice.h"

int main(){
    rectangle.setPosition(1600, 900);
    rectangle.setFillColor(Color(200, 200, 200, 100));

    // กำหนด starto
    starto.setPosition(50, 50);
    starto.setFillColor(Color(255, 0, 108));

    thaiText.setFillColor(Color(255, 0, 108));;
    thaiText.setPosition(10, 10);

    // กำหนด choosen waifu
    c1.setPosition(1600, 900);
    c1.setFillColor(Color(255, 0, 108));

    day.setPosition(1600, 900);
    day.setFillColor(Color(0,255,0));

    // กำหนด buttonnoimage และ buttonckimage
    Texture buttonno;
    buttonno.loadFromFile("../GG_Game/image/button/Button.png");
    Sprite buttonnoimage;
    buttonnoimage.setTexture(buttonno);
    buttonnoimage.setPosition(1200.f, 700.f);

    Texture buttonck;
    buttonck.loadFromFile("../GG_Game/image/button/button1.png");
    Sprite buttonckimage;
    buttonckimage.setTexture(buttonck);
    buttonckimage.setPosition(1200.f, 700.f);

    //หน้าเลือกตัวตัวละคร
    waifu1.setTexture(PictureCharector[0]);
    waifu1.setPosition(1600.f, 900.f);

    
    // ภาพตัวแทนตัวละคร Venti
  
    
    Relation();


    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
            else if (event.type == Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == Mouse::Left)
                {
                    mousePos = window.mapPixelToCoords(Mouse::getPosition(window));
                    if (buttonckimage.getGlobalBounds().contains(mousePos))
                    {
                        starto.setPosition(1600, 900);
                        back1image.setTexture(back2);
                        buttonnoimage.setPosition(1600.f, 900.f);
                        c1.setPosition(10, 10);
                        waifu1.setPosition(600.f, 40.f);
                    }
                    else if (waifu1.getGlobalBounds().contains(mousePos) && state >= 0) // เพิ่มเงื่อนไขตรวจสอบการคลิกที่ waifu1
                    {
                        waifu1.setTexture(PictureCharectorChosses[0]);
                        choice choice;
                        test();
                    }
                    else if (rectangle.getGlobalBounds().contains(mousePos) && state >= 0) // เพิ่มเงื่อนไขตรวจสอบการคลิกที่ waifu1
                    {   
                        myTime.restart();
                        while (myTime.getElapsedTime().asMilliseconds() < 1000)
                        {
                            window.clear();
                            text.setString(charactorTalkMessege[1][1]);
                            window.draw(text);
                            window.draw(back1image);
                            window.draw(day);
                            window.draw(waifu2);
                            window.display();
                        }
                    }
                }
            }
        }

        // ตรวจสอบว่าเมาส์อยู่ในพื้นที่ของ buttonnoimage หรือไม่
        Vector2f mousePos = window.mapPixelToCoords(Mouse::getPosition(window));
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

        window.clear();
        //ฉากแรก
        window.draw(back1image);
        window.draw(c1);
        for (Day = 0; Day < charactorTalkMessege.size(); Day++) {
        for (Question = 0; Question < charactorTalkMessege[Day].size(); Question++) {
            s = charactorTalkMessege[Day][Question];
            text.setFont(Thai);
            text.setString(s);
            text.setCharacterSize(60);
            text.setPosition(100, 90);
            text.setFillColor(Color::Black);
            charactorTalk[Day].push_back(text);
            window.draw(charactorTalk[Day][Question]);
        }
        }
        window.draw(day);
        window.draw(waifu1);
        window.draw(waifu2);
        window.draw(rectangle);
        window.draw(starto);
        window.draw(buttonnoimage);
        window.display();
    }

    return 0;
}

