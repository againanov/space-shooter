#include "stdafx.h"
#include <SFML/Graphics.hpp>

using namespace sf;



int main()
{
	RenderWindow window(sf::VideoMode(600, 800), "SFML works!");

	Texture t;
	t.loadFromFile("C:/Users/artem/Documents/strproject/plain.png");

	Sprite s;
	s.setTexture(t);
	s.setTextureRect(IntRect(98, 34, 258, 251));
	s.setPosition(50, 100);
	
	Sprite bullet;
	bullet.setTexture(t);
	bullet.setTextureRect(IntRect(107, 308, 20, 20));
	bullet.setPosition(30, 30);
	while (window.isOpen())
	{

	
		
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		if (Keyboard::isKeyPressed(Keyboard::Right)) {
			s.move(0.1, 0);
		}if (Keyboard::isKeyPressed(Keyboard::Left)) {
			s.move(-0.1, 0);
		}if (Keyboard::isKeyPressed(Keyboard::Up)) { 
			s.move(0, -0.1);
		}if (Keyboard::isKeyPressed(Keyboard::Down)) {
			s.move(0, 0.1);
		}if (Keyboard::isKeyPressed(Keyboard::Space)) {
			
			for (int i = 0; i < 50; i++) {
				bullet.move(0, 0.1);
				bullet.
			}

		}

		window.clear();
		window.draw(s);
		window.display();
	}

	return 0;
}