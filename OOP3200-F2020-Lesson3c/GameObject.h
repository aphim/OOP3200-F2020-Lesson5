/** GameObject.h
 *
 * Program: OOP 3200, ICE4
 *
 *	@author		Jacky Yuan
 *	@studentID  100520106
*/
#pragma once
#ifndef __GAME_OBJECT__
#define __GAME_OBJECT__

#include "Vector2D.h"

class GameObject
{
public:
	//constructors
	GameObject();
	GameObject(int id, float x, float y);
	GameObject(int id, Vector2D& position);

	//destructor
	~GameObject();

	//copy constructor
	GameObject(const GameObject& other_object);

	//assignment constructor
	GameObject& operator=(const GameObject& other_object);

	//Accessors
	Vector2D GetPosition() const;
	int GetID() const;

	//Mutators
	void SetPosition(float x, float y);
	void SetPosition(Vector2D new_position);
	void SetID(int id);

	//utility Function
	std::string ToString() const;

private:
	Vector2D m_position;
	int m_id;
};

#endif //defined (__GAME_OBJECT__)

