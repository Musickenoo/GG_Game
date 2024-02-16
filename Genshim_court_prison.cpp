#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1080, 720), "SFML works!");
    sf::CircleShape shape(300.f);
    shape.setFillColor(sf::Color::Green);
    sf::Texture waifu;
    waifu.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\image\\4a.png");
    
    sf::Vector2u waifuSize = waifu.getSize();
    float scaleFactor = 400.f / std::max(waifuSize.x, waifuSize.y);
    sf::Sprite waifuimage;
    waifuimage.setTexture(waifu);
    waifuimage.setScale(scaleFactor, scaleFactor);
    waifuimage.setPosition(300.f, 300.f);
  

    sf::Font amazing;
    amazing.loadFromFile("D:\\testD\\Genshim_court_prison\\GG_Game\\Font\\LoveDays-2v7Oe.ttf");
    sf::Text starto("start", amazing,80);
    starto.setPosition(500, 500);
    starto.setFillColor(sf::Color(255, 0, 108));
    
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
                    // Check if "start" text is clicked
                    sf::Vector2f mousePos = window.mapPixelToCoords(sf::Mouse::getPosition(window));
                    if (starto.getGlobalBounds().contains(mousePos))
                    {
                        window.close(); // Close the window
                    }
                }
            }
        }

        window.clear();
        window.draw(shape);
        window.draw(waifuimage);
        window.draw(starto);
        window.display();
    }

    return 0;
}