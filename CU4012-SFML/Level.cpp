#include "Level.h"
#include <iostream>

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	rect1.setSize(sf::Vector2f(50, 50));
	rect1.setPosition(200, 200);
	rect1.setFillColor(sf::Color::Red);

	rect2.setSize(sf::Vector2f(35, 35));
	rect2.setPosition(207.5, 207.5);
	rect2.setFillColor(sf::Color::Green);

	rect3.setSize(sf::Vector2f(20, 20));
	rect3.setPosition(215, 215);
	rect3.setFillColor(sf::Color::Blue);

	// initialise game objects
	rect.setSize(sf::Vector2f(50, 5));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Red);

	circle.setRadius(25);
	circle.setPosition(550, 280);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(5.0f);


	if (!font.loadFromFile("font/arial.ttf")); {
		std::cout << "Error loading text" << std::endl;
	}

	text.setFont(font);
	text.setString("Hello World");
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Red);
	text.setPosition(550, 0);




}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	sf::Vector2u pos = window->getSize();

	rect4.setSize(sf::Vector2f(50, 5));
	rect4.setPosition((pos.x - 50), (pos.y - 5));
	rect4.setFillColor(sf::Color::Green);



}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(rect);
	window->draw(rect1);
	window->draw(rect2);
	window->draw(rect3);
	window->draw(rect4);
	window->draw(circle);
	window->draw(text);


	endDraw();


}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));

}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}