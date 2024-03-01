#include "../GG_Game/event/choice.h"

int main() {
    RenderWindow window(VideoMode(1600, 900), "SFML works!");

    Font amazing = init.amazing;
    Font Thai = init.Thai;
    Texture back1 = init.back1;
    Sprite back1image = init.back1image;
    Texture back2 = init.back2;
    Texture back3 = init.back3;
    Texture back4 = init.back4;

    RectangleShape rectangle(Vector2f(1600, 150));
    rectangle.setPosition(1600, 900);
    rectangle.setFillColor(Color(200, 200, 200, 100));


    // กำหนด starto
    Text starto("Judgment Of Nevillete \n The Archon", amazing, 80);
    starto.setPosition(50, 50);
    starto.setFillColor(Color(255, 0, 108));

    Text thaiText("สวัสดีชาวโลก", Thai, 80);
    thaiText.setFillColor(Color(255, 0, 108));;
    thaiText.setPosition(10, 10);

    // กำหนด chosen waifu
    Text c1("chosen waifu", amazing, 80);
    c1.setPosition(1600, 900);
    c1.setFillColor(Color(255, 0, 108));

    Text day("DAY " + to_string(0), amazing, 80);
    day.setPosition(1600, 900);
    day.setFillColor(Color(0, 255, 0));

    // กำหนด buttonnoimage และ buttonckimage
    Texture buttonno;
    buttonno.loadFromFile("../GG_Game/image/button/Button.png");
    Sprite buttonnoimage;
    buttonnoimage.setTexture(buttonno);
    buttonnoimage.setPosition(1200.f, 700.f);

    Texture buttonck;
    buttonck.loadFromFile("../GG_Game/image/button/Button1.png");
    Sprite buttonckimage;
    buttonckimage.setTexture(buttonck);
    buttonckimage.setPosition(1200.f, 700.f);

    //หน้าเลือกตัวตัวละคร
    Texture waifu1Texture;
    waifu1Texture.loadFromFile("../GG_Game/charecter/venti/Coliseum/first2.jpeg");
    Sprite waifu1;
    waifu1.setTexture(waifu1Texture);
    waifu1.setPosition(1600.f, 900.f);

    Texture waifu2Texture;
    waifu2Texture.loadFromFile("../GG_Game/charecter/venti/Coliseum/first1.jpeg");
    // ภาพตัวแทนตัวละคร Venti
    Texture waifuface1Texture;
    waifuface1Texture.loadFromFile("../GG_Game/charecter/venti/Coliseum/ventifirstday.png");
    Sprite waifu2;
    waifu2.setTexture(waifuface1Texture);
    waifu2.setPosition(1600.f, 900.f);
    waifu2.setScale(0.27f, 0.27f);

    bool buttonHovered = false;
    int state = 0;
    Clock clock;
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
            if (event.type == Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == Mouse::Left)
                {
                    // ตรวจสอบว่าคลิกที่ buttonckimage หรือไม่
                    Vector2f mousePos = window.mapPixelToCoords(Mouse::getPosition(window));
                    if (buttonckimage.getGlobalBounds().contains(mousePos))
                    {
                        starto.setPosition(1600, 900);
                        back1image.setTexture(back2);
                        buttonnoimage.setPosition(1600.f, 900.f);
                        c1.setPosition(10, 10);
                        waifu1.setPosition(600.f, 40.f);
                        while (true) {
                            if (waifu1.getGlobalBounds().contains(mousePos) && state >= 0) // เพิ่มเงื่อนไขตรวจสอบการคลิกที่ waifu1
                            {
                                // เปลี่ยนรูป waifu1Texture เป็น waifu12Texture
                                waifu1.setTexture(waifu2Texture);

                                // กำหนดเวลาในการเปลี่ยนรูปภาพเป็น 3 วินาที (3000 milliseconds)
                                clock.restart();
                                while (clock.getElapsedTime().asMilliseconds() < 3000)
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
                                clock.restart();
                                while (clock.getElapsedTime().asMilliseconds() < 1000)
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
                                clock.restart();
                                while (clock.getElapsedTime().asMilliseconds() < 3000)
                                {
                                    window.clear();
                                    window.draw(back1image);
                                    window.draw(day);
                                    window.draw(waifu2);

                                    window.display();
                                }

                                rectangle.setPosition(0, 750);
                                window.draw(rectangle);
                                while (true) {
                                    int relation = Relation();
                                    break;
                                }
                                break;
                            }
                            break;
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
        window.draw(day);
        window.draw(waifu1);
        window.draw(waifu2);
        window.draw(rectangle);
        window.draw(charactorTalk[0][0]);
        window.draw(starto);
        window.draw(buttonnoimage);
        window.display();
    }

    return 0;
}