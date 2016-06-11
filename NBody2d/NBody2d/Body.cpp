#include "Body.h"

Body::Body(float mass, sf::Vector2f position, sf::Vector2f velocity)
{
	mPosition = position;
	mVelocity = velocity;
	mMass = mass;
}

Body::~Body()
{
}

void Body::Update(float deltaTime)
{
	mVelocity += mAcceleration;
	mPosition += mVelocity;

	mAcceleration = sf::Vector2f(0, 0);	//Reset for next frame
}
