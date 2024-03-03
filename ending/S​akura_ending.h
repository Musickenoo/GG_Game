
#pragma once
#include "../initGame.h"

class EndingScene {
public:
	void displayGoodEnding();
	void displayBadEnding();
	void displayChaseEnding();

private:
	int relationshipPoints;
	Font font;
};

void EndingScene::displayGoodEnding() {
	Text goodEndText;
	goodEndText.setFont(font);
	goodEndText.setString("End");
	goodEndText.setCharacterSize(30);
	goodEndText.setFillColor(sf::Color::Green);
	goodEndText.setPosition(150.f, 250.f);
    back1image.setTexture(back3);
    myTime.restart();
    while (myTime.getElapsedTime().asMilliseconds() < 1000)
    {
            // รีเฟรชหน้าจอเพื่อปรับปรุงการแสดงผล
            window.clear();
            window.draw(back1image);
            window.draw(goodEndText);
            window.display();

    }
    

	window.draw(goodEndText);
	window.display();
	sleep(seconds(3)); // รอ 3 วินาทีก่อนจบเกม
}

void EndingScene::displayBadEnding() {
	Text badEndText;
	badEndText.setFont(font);
	badEndText.setString("Bad End: ความชอบต่ำเกินไป จบเกม!");
	badEndText.setCharacterSize(30);
	badEndText.setFillColor(sf::Color::Red);
	badEndText.setPosition(150.f, 250.f);

	window.draw(badEndText);
	window.display();
	sleep(seconds(3)); // รอ 3 วินาทีก่อนจบเกม
}

void EndingScene::displayChaseEnding() {
	Text xxxEndingText;
	xxxEndingText.setFont(font);
	xxxEndingText.setString("Bad End: ความชอบต่ำเกินไป จบเกม!");
	xxxEndingText.setCharacterSize(30);
	xxxEndingText.setFillColor(sf::Color::Red);
	xxxEndingText.setPosition(150.f, 250.f);

	window.draw(xxxEndingText);
	window.display();
	sleep(seconds(3)); // รอ 3 วินาทีก่อนจบเกม
}