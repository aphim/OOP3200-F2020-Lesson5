/** main.cpp
 *
 * Program: OOP 3200, ICE4
 *
 *	@author		Jacky Yuan
 *	@studentID  100520106
*/

#include <iomanip>
#include <iostream>

#include "Vector2D.h"
#include "GameObject.h"

int main()
{
	int id1;
	std::cout << "Enter the first gameObject ID: ";
	std::cin >> id1;
	Vector2D point1;
    std::cout << "Enter the first point (x, y): ";
	std::cin >> point1;
	std::cout << "\n--------------------------------------------------------------" << std::endl;
	std::cout << "You Entered " << point1 << " for the first point" << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;
	GameObject gameObject1(id1, point1);

	int id2;
	std::cout << "Enter the second gameObject ID: ";
	std::cin >> id2;
	Vector2D point2;
	std::cout << "Enter the second point (x, y): ";
	std::cin >> point2;
	std::cout << "\n--------------------------------------------------------------" << std::endl;
	std::cout << "You Entered " << point2 << " for the second point" << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;
	GameObject gameObject2(id2, point2);

	std::cout << std::fixed << std::setprecision(3);
	std::cout << "Magnitude of first gameObject is: " << gameObject1.GetPosition().GetMagnitude() << std::endl;
	std::cout << "Magnitude of second gameObject is: " << gameObject2.GetPosition().GetMagnitude() << std::endl;
	std::cout << "Distance between first gameObject and second gameObject is: " << Vector2D::Distance(gameObject1.GetPosition(), gameObject2.GetPosition()) << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	std::cout << "The angle (in degrees) from the first gameObject to the second gameObject is: " << Vector2D::SignedAngle(gameObject1.GetPosition(), gameObject2.GetPosition()) << std::endl;

	std::cout << "--------------------------------------------------------------\n" << std::endl;
	std::cout << "First Game Object Details:" << std::endl;
	std::cout << gameObject1.ToString() << std::endl;

	std::cout << "Second Game Object Details:" << std::endl;
	std::cout << gameObject2.ToString() << std::endl;

}

