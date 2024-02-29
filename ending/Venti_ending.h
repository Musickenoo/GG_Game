#pragma once
#include "../initGame.h"

class EndingScene {
public:
	EndingScene(sf::RenderWindow& window, int relationshipPoints);
	void displayGoodEnding();
	void displayBadEnding();
	void displayChaseEnding();

private:
	sf::RenderWindow& window;
	int relationshipPoints;
	sf::Font font;
};
EndingScene::EndingScene(sf::RenderWindow& window, int relationshipPoints) : window(window), relationshipPoints(relationshipPoints) {
	if (!font.loadFromFile("arial.ttf")) {
		std::cerr << "Error: Unable to load font." << std::endl;
		exit(EXIT_FAILURE);
	}
}

void EndingScene::displayGoodEnding() {
	sf::Text goodEndText;
	goodEndText.setFont(font);
	goodEndText.setString("Good End: ความชอบสูงมาก! จบเกม");
	goodEndText.setCharacterSize(30);
	goodEndText.setFillColor(sf::Color::Green);
	goodEndText.setPosition(150.f, 250.f);

	window.draw(goodEndText);
	window.display();
	sf::sleep(sf::seconds(3)); // รอ 3 วินาทีก่อนจบเกม
}

void EndingScene::displayBadEnding() {
	sf::Text badEndText;
	badEndText.setFont(font);
	badEndText.setString("Bad End: ความชอบต่ำเกินไป จบเกม!");
	badEndText.setCharacterSize(30);
	badEndText.setFillColor(sf::Color::Red);
	badEndText.setPosition(150.f, 250.f);

	window.draw(badEndText);
	window.display();
	sf::sleep(sf::seconds(3)); // รอ 3 วินาทีก่อนจบเกม
}

void EndingScene::displayChaseEnding() {
	// ... (Code for chase ending)
}