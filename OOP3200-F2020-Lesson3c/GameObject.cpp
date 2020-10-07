/** GameObject.cpp
 *
 * Program: OOP 3200, ICE4
 *
 *	@author		Jacky Yuan
 *	@studentID  100520106
*/
#include "GameObject.h"

GameObject::GameObject(): m_id(0), m_position(Vector2D())
{

}

GameObject::GameObject(int id, const float x, const float y)
{
	SetID(id);
	SetPosition(x, y);
}

GameObject::GameObject(int id, Vector2D& position)
{
	SetID(id);
	SetPosition(position);
}

GameObject::~GameObject()
= default;

GameObject& GameObject::operator=(const GameObject& other_object)
{
	SetID(other_object.m_id);
	SetPosition(other_object.m_position);
	return (*this);
}
Vector2D GameObject::GetPosition() const
{
	return m_position;
}

int GameObject::GetID() const
{
	return m_id;
}

void GameObject::SetID(const int id)
{
	m_id = id;
}


void GameObject::SetPosition(float x, float y)
{
	m_position.Set(x, y);
}

void GameObject::SetPosition(const Vector2D new_position)
{
	m_position = new_position;
}

std::string GameObject::ToString() const
{
	std::string output_string;
	output_string += "ID	: " + std::to_string(GetID()) + "/n";
	output_string += "Position	:" + GetPosition().ToString() +"/n";
	return output_string;
}