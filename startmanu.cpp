#include <SFML/Graphics.hpp>

int main()
{
    int i = 1;
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

    // กำหนด starto
    sf::Text starto("Judgment Of Nevillete \n The Archon", amazing, 80);
    starto.setPosition(50, 50);
    starto.setFillColor(sf::Color(255, 0, 108));

    sf::Text thaiText("สวัสดีชาวโลก",Thai, 80);
    thaiText.setFillColor(sf::Color(255, 0, 108));;
    thaiText.setPosition(10, 10);

    // กำหนดคำถาม ques[]
    std::vector<std::string> ventiQuestions = {
        "What is Venti's favorite food?",
        "Where can Venti be found in Mondstadt?",
        "What is Venti's true identity?",
        "Why does Venti disguise himself?",
        "How old is Venti?",
        "What is Venti's connection to Barbatos?",
        "What is Venti's vision?",
        "What is Venti's Elemental Burst?",
        "What is Venti's Elemental Skill?",
        "What is Venti's constellation name?",
        "What is Venti's role in Mondstadt?",
        "What is Venti's relationship with Dvalin?",
        "What is Venti's favorite pastime?",
        "What is Venti's favorite song?",
        "What is Venti's personality like?",
        "What is Venti's relationship with the Traveler?",
        "What is Venti's favorite instrument?",
        "What is Venti's relationship with Jean?",
        "What is Venti's connection to the Anemo Archon?",
        "What is Venti's favorite hangout spot?",
        "What is Venti's opinion on freedom?",
        "What is Venti's role in the Archon War?",
        "What is Venti's favorite drink?",
        "What is Venti's favorite flower?",
        "What is Venti's role in the Windblume Festival?",
        "What is Venti's connection to Celestia?",
        "What is Venti's favorite region?",
        "What is Venti's relationship with Rosaria?",
        "What is Venti's favorite place to nap?",
        "What is Venti's opinion on Mondstadt's citizens?",
        "What is Venti's role in the prologue of Genshin Impact?",
        "What is Venti's favorite wind condition?",
        "What is Venti's favorite holiday?",
        "What is Venti's favorite book?",
        "What is Venti's opinion on Stormterror's Lair?"
    };

    // สร้างอาร์เรย์ของ sf::Text จากประโยคคำถาม
    std::vector<sf::Text> Vqus(35);
    for (int i = 0; i < 35; ++i) {
        Vqus[i].setFont(amazing);
        Vqus[i].setString(ventiQuestions[i]); // กำหนดประโยคคำถามจากอาร์เรย์ ventiQuestions
        Vqus[i].setCharacterSize(24);
        Vqus[i].setPosition(50, 50 + i * 30); // ปรับตำแหน่งของแต่ละคำถาม
        Vqus[i].setFillColor(sf::Color::White);
    }
    // กำหนด choosen waifu
    sf::Text c1("choosen waifu", amazing, 80);
    c1.setPosition(1600, 900);
    c1.setFillColor(sf::Color(255, 0, 108));

    sf::Text day("DAY " + std::to_string(i), amazing, 80);
    day.setPosition(1600, 900);
    day.setFillColor(sf::Color(0,255,0));

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

    sf::Texture waifu1Texture;
    waifu1Texture.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\test_charec\\a_profile.jpg");
    sf::Sprite waifu1;
    waifu1.setTexture(waifu1Texture);
    waifu1.setPosition(1600.f, 900.f);

    sf::Texture waifu2Texture;
    waifu2Texture.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\test_charec\\ac_profile.jpg");

    sf::Texture back2;
    back2.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\background\\testb2.jpg");

    sf::Texture back3;
    back3.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\background\\testb3.jpg");

    sf::Texture back4;
    back4.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\background\\testb4.jpg");


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
                        waifu1.setPosition(1600.f, 900.f);
                        c1.setPosition(1600, 900);


                        for (; i <= 7; i++) {
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
                            day.setFillColor(sf::Color(0,0 ,0));
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
        window.draw(waifu1);
        window.draw(starto);
        window.draw(buttonnoimage);
        window.display();
    }

    return 0;
}
