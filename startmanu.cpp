#include <SFML/Graphics.hpp>

int main()
{
    // กำหนดขนาด window
    sf::RenderWindow window(sf::VideoMode(1600, 900), "SFML works!");

    sf::Font amazing;
    amazing.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\Font\\LoveDays-2v7Oe.ttf");

    // ภาพ back1image จะเป็นภาพอยู่หลังสุด
    sf::Texture back1;
    back1.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\background\\testb1.jpg");
    sf::Sprite back1image;
    back1image.setTexture(back1);

    // กำหนด starto
    sf::Text starto("Judgment Of Nevillete \n The Archon", amazing, 80);
    starto.setPosition(50, 50);
    starto.setFillColor(sf::Color(255, 0, 108));

    // กำหนด choosen waifu
    sf::Text c1("choosen waifu", amazing, 80);
    c1.setPosition(10, 10);
    c1.setFillColor(sf::Color(255, 0, 108));

    sf::Text cm1("man", amazing, 40);
    cm1.setPosition(700.f, 500.f);
    cm1.setFillColor(sf::Color(255, 0, 108));

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
    waifu1Texture.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\test_charec\\5a_angry.png");
    sf::Sprite waifu1;

    waifu1.setTexture(waifu1Texture);
    waifu1.setPosition(750.f, 100.f);
    waifu1.setScale(1.5f, 1.5f);

    sf::Texture back2;
    back2.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\background\\testb2.jpg");
    sf::Sprite back2image;
    back2image.setTexture(back2);

    bool buttonHovered = false;

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
                        back1image.setPosition(1600, 900);
                        buttonnoimage.setPosition(1600.f, 900.f);
                        
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
        //ฉากสอง
        window.draw(back2image);
        window.draw(c1);
        window.draw(cm1);
        window.draw(waifu1);
        //ฉากแรก
        window.draw(back1image);
        window.draw(starto);
        window.draw(buttonnoimage);
        window.display();
    }

    return 0;
}
