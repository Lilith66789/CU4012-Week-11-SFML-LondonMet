#pragma once

#include <SFML/Graphics.hpp>
#include <string.h>
#include <iostream>


class Level {
public:
	Level(sf::RenderWindow* hwnd);
	~Level();

	void handleInput();
	void update();
	void render();

private:
	void beginDraw();
	void endDraw();
	sf::RenderWindow* window;

	sf::RectangleShape rect;
	sf::RectangleShape rect1;
	sf::RectangleShape rect2;
	sf::RectangleShape rect3;
	sf::CircleShape circle;
	sf::RectangleShape rect4;

	sf::Font font;
	sf::Text text;
	int pos;
};