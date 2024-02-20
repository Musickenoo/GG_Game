// startmanu.h
#ifndef STARTMENU_H
#define STARTMENU_H

#include <SFML/Graphics.hpp>

class StartMenu {
public:
    StartMenu(sf::RenderWindow& window, void (*changeScene)()); // เพิ่มพารามิเตอร์สำหรับ function pointer
    void run();

private:
    sf::RenderWindow& window;
    void (*changeScene)(); // เพิ่ม function pointer เพื่อเรียกฟังก์ชันเปลี่ยนฉาก
    sf::Sprite back1image;
    sf::Text starto;
    sf::Sprite buttonnoimage;
    sf::Sprite buttonckimage;
    bool buttonHovered = false;
};

#endif // STARTMENU_H
