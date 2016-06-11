#pragma once
#include "Body.h"

class Simulation
{
public:
	Simulation(float bodyCount, sf::Vector2u size);
	~Simulation();

	void Update(float deltaTime);
	void Render(sf::RenderWindow& renderTarget);

private:
	void BodyInteraction(Body& body1, Body& body2);

	std::vector<Body> mBodies;
	sf::Vector2u mSize;
};

