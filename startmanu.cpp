#include <SFML/Graphics.hpp>

int main()
{
    int i = 1;
    int rela = 0;
    // กำหนดขนาด window
    sf::RenderWindow window(sf::VideoMode(1600, 900), "SFML works!");

    sf::Font amazing;
    amazing.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\Font\\LoveDays-2v7Oe.ttf");
    sf::Font Thai;
    Thai.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\Font\\EkkamaiNew-Regular.ttf");

    // ภาพ back1image จะเป็นภาพอยู่หลังสุด
    sf::Texture back1;
    back1.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\background\\testb1.jpg");
    sf::Sprite back1image;
    back1image.setTexture(back1);

    sf::Texture back2;
    back2.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\background\\testb2.jpg");

    sf::Texture back3;
    back3.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\background\\testb3.jpg");

    sf::Texture back4;
    back4.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\background\\testb6.PNG");

    // กำหนด starto
    sf::Text starto("Judgment Of Nevillete \n The Archon", amazing, 80);
    starto.setPosition(50, 50);
    starto.setFillColor(sf::Color(255, 0, 108));

    sf::Text thaiText("สวัสดีชาวโลก",Thai, 80);
    thaiText.setFillColor(sf::Color(255, 0, 108));;
    thaiText.setPosition(10, 10);

    // กำหนดคำถาม ques[]
    std::vector<std::string> ventiQuestions = {
        "สวัสดี! มีสิ่งใหม่ๆ ใน Mondstadt บ้างไหม?",
        "เราเคยพบกันที่ไหนมาก่อนเหรอ?",
        "คุณรู้สึกอย่างไรกับ Mondstadt วันนี้?",
        "มีเหตุการณ์ใหม่ใน Mondstadt รึเปล่า?",
        "คุณชอบสิ่งใดที่ทำให้คุณรู้สึกสนุกกับการผจญภัย?",
        "วันนี้มีสิ่งอะไรที่น่าสนใจมากที่สุด?",
        "สิ่งที่คุณอยากทำในวันนี้คืออะไร?"
    };
    std::vector<std::string> ventiAns = {
        "ฉันเพิ่งสร้างเพลงใหม่ใน Mondstadt",
        "ฉันคิดว่าเราพบกันที่ Temple of the Falcon",
        "ฉันรู้สึกสดชื่นทุกครั้งที่อยู่ใน Mondstadt",
        "มีเหตุการณ์ใหม่ที่ Stormterror's Lair",
        "ฉันชอบการสืบสวนความลับของ Mondstadt",
        "วันนี้ฉันได้เจอความท้าทายในการล่าสัตว์ประหลาด",
        "ฉันอยากเล่นเพลงสดใน Mondstadt"
    };

    // สร้างอาร์เรย์ของ sf::Text จากประโยคคำถาม
    std::vector<sf::Text> Vqus;
    for (const auto& question : ventiQuestions) {
        sf::Text text;
        text.setFont(Thai);
        text.setString(question);
        text.setCharacterSize(24);
        text.setFillColor(sf::Color::Black);
        Vqus.push_back(text);
    }

    // สร้าง sf::Text สำหรับคำตอบของ Venti
    std::vector<sf::Text> Vans;
    for (const auto& answer : ventiAns) {
        sf::Text text;
        text.setFont(Thai);
        text.setString(answer);
        text.setCharacterSize(24);
        text.setFillColor(sf::Color::Black);
        Vans.push_back(text);
    }

    // กำหนด choosen waifu
    sf::Text c1("choosen waifu", amazing, 80);
    c1.setPosition(1600, 900);
    c1.setFillColor(sf::Color(255, 0, 108));

    sf::Text day("DAY " + std::to_string(i), amazing, 80);
    day.setPosition(1600, 900);
    day.setFillColor(sf::Color(0,255,0));

    sf::Text relation("relation " + std::to_string(rela), amazing, 80);
    relation.setPosition(1600, 900);
    relation.setFillColor(sf::Color(0, 255, 0));

    // กำหนด buttonnoimage และ buttonckimage
    sf::Texture buttonno;
    buttonno.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\button\\nclick1.jpg");
    sf::Sprite buttonnoimage;
    buttonnoimage.setTexture(buttonno);
    buttonnoimage.setPosition(1200.f, 700.f);

    sf::Texture buttonck;
    buttonck.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\button\\click1.jpg");
    sf::Sprite buttonckimage;
    buttonckimage.setTexture(buttonck);
    buttonckimage.setPosition(1200.f, 700.f);
    //หน้าเลือกตัวตัวละคร
    sf::Texture waifu1Texture;
    waifu1Texture.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\test_charec\\a_profile.jpg");
    sf::Sprite waifu1;
    waifu1.setTexture(waifu1Texture);
    waifu1.setPosition(1600.f, 900.f);

    sf::Texture waifu2Texture;
    waifu2Texture.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\test_charec\\ac_profile.jpg");

    // ภาพตัวแทนตัวละคร Venti
    sf::Texture waifuface1Texture;
    waifuface1Texture.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\test_charec\\1a_normal.png");
    sf::Texture waifuface2Texture;
    waifuface2Texture.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\test_charec\\2a_yes.png");
    sf::Texture waifuface3Texture;
    waifuface3Texture.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\test_charec\\3a_sadd.png");
    sf::Texture waifuface4Texture;
    waifuface4Texture.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\test_charec\\4a_cry.png");
    sf::Texture waifuface5Texture;
    waifuface5Texture.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\test_charec\\5a_angry.png");
    sf::Texture waifuface6Texture;
    waifuface6Texture.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\test_charec\\6a_happyy.png");
    sf::Sprite waifu2;
    waifu2.setTexture(waifu1Texture);
    waifu2.setPosition(1600.f, 900.f);



    bool buttonHovered = false;
    int state = 0;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    // ตรวจสอบว่าคลิกที่ buttonckimage หรือไม่
                    sf::Vector2f mousePos = window.mapPixelToCoords(sf::Mouse::getPosition(window));
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
                        // เปลี่ยนรูป waifu1Texture เป็น waifu12Texture
                        waifu1.setTexture(waifu2Texture);

                        // กำหนดเวลาในการเปลี่ยนรูปภาพเป็น 3 วินาที (3000 milliseconds)
                        sf::Clock clock;
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


                        for (; i <= 1; i++) {
                            day.setPosition(700, 400);
                            back1image.setTexture(back3);
                            clock.restart();
                            while (clock.getElapsedTime().asMilliseconds() < 1000)
                            {
                                // รีเฟรชหน้าจอเพื่อปรับปรุงการแสดงผล
                                window.clear();
                                window.draw(back1image);
                                window.draw(day);
                                window.draw(relation);
                                window.draw(waifu1);
                                window.display();
                                
                            }
                            back1image.setTexture(back4);
                            day.setPosition(10, 10);
                            day.setFillColor(sf::Color(0, 0, 0));
                            relation.setPosition(1200, 10);
                            relation.setFillColor(sf::Color(0, 0, 0));

                            // เลื่อนตำแหน่ง waifu1 ไปยังตำแหน่งที่ระบุ (700, 900)
                            waifu2.setPosition(700.f, 900.f);


                        }
                    }
                }
            }
        }

        // ตรวจสอบว่าเมาส์อยู่ในพื้นที่ของ buttonnoimage หรือไม่
        sf::Vector2f mousePos = window.mapPixelToCoords(sf::Mouse::getPosition(window));
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
        window.draw(relation);
        window.draw(waifu1);
        window.draw(waifu2);
        window.draw(starto);
        window.draw(buttonnoimage);
        window.display();
    }

    return 0;
}
