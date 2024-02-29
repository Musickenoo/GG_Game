// startmanu.h
#ifndef STARTMENU_H
#define STARTMENU_H

#include <SFML/Graphics.hpp>

class StartMenu {
public:
    StartMenu(sf::RenderWindow& window, void (*changeScene)()); // ������������������Ѻ function pointer
    void run();

private:
    sf::RenderWindow& window;
    void (*changeScene)(); // ���� function pointer �������¡�ѧ��ѹ����¹�ҡ
    sf::Sprite back1image;
    sf::Text starto;
    sf::Sprite buttonnoimage;
    sf::Sprite buttonckimage;
    bool buttonHovered = false;
};

#endif // STARTMENU_H
