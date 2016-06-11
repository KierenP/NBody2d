#pragma once
#include <SFML\Graphics.hpp>

class Body
{
public:
	Body(float mass = 0, sf::Vector2f position = sf::Vector2f(0, 0), sf::Vector2f velocity = sf::Vector2f(0, 0));
	~Body();

	sf::Vector2f GetVelocity() { return mVelocity; }
	sf::Vector2f GetPosition() { return mPosition; }
	sf::Vector2f GetAcceleration() { return mAcceleration; }
	float GetMass() { return mMass; }

	void SetVelocity(sf::Vector2f val) { mVelocity = val; }
	void SetPosition(sf::Vector2f val) { mPosition = val; }
	void SetAcceleration(sf::Vector2f val) { mAcceleration = val; }
	void SetMass(float val) { mMass = val; }

	void Update(float deltaTime);

private:
	float mMass;
	sf::Vector2f mAcceleration;
	sf::Vector2f mVelocity;
	sf::Vector2f mPosition;


};