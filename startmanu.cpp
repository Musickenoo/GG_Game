#include <SFML/Graphics.hpp>

int main()
{
    // กำหนดขนาด window
    sf::RenderWindow window(sf::VideoMode(1600, 900), "SFML works!");

    // ภาพ back1image จะเป็นภาพอยู่หลังสุด
    sf::Texture back1;
    back1.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\background\\testb1.jpg");
    sf::Sprite back1image;
    back1image.setTexture(back1);

    // กำหนด starto
    sf::Font amazing;
    amazing.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\Font\\LoveDays-2v7Oe.ttf");
    sf::Text starto("start", amazing, 80);
    starto.setPosition(150, 150);
    starto.setFillColor(sf::Color(255, 0, 108));

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
                        // ปิด window
                        window.clear();
                        window.display();
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
        window.draw(back1image);
        window.draw(starto);
        window.draw(buttonnoimage);
        window.display();
    }

    return 0;
}
