#include "Simulation.h"
#include <SFML/Graphics.hpp>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

Simulation BodySystem(1000, sf::Vector2u(1000, 1000));

int main()
{
	srand(time(NULL));

	sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFML works!");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		BodySystem.Update(5);

		window.clear();
		BodySystem.Render(window);
		window.display();
	}

	return 0;
}

