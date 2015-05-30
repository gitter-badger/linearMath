/*
    Copyright (C) 2015  codectile

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#include "LinearMath\btVector3.h"
#include "LinearMath\btQuaternion.h"


//vectors
void addVectors(btVector3& vector1, btVector3& vector2, btVector3& resultant)
{
	resultant = vector1 + vector2;
}

void dotProduct(btVector3& vector1, btVector3& vector2, btScalar& product)
{
	product = vector1.dot(vector2);
}

void crossProduct(btVector3& vector1, btVector3& vector2, btVector3& product)
{
	product = vector1.cross(vector2);
}

void getVectorAngle(btVector3& vector1, btVector3& vector2, btScalar& angle)
{
	angle = vector1.angle(vector2);
}

void getDistance(btVector3& vector1, btVector3& vector2, btScalar& distance, bool flag = false)
{
	if(flag == false)
		distance = vector1.distance(vector2);
	else
		distance = vector1.distance2(vector2);
}

void getMagnitude(btVector3& vector, btScalar& magnitude, bool flag = false)
{
	if(flag == false)
		magnitude = vector.length();
	else
		magnitude = vector.length2();
}

void getNormalized(btVector3& vector, btVector3& normalized)
{
	normalized = vector.normalize();
}

void getClosestAxis(btVector3& vector, int& axis)
{
	axis = vector.closestAxis();
}

void getFurthestAxis(btVector3& vector, int& axis)
{
	axis = vector.furthestAxis();
}

void rotateVector(btVector3& vector, btVector3& axis, btScalar& angle, btVector3& resultant)
{
	resultant = vector.rotate(axis, angle);
}

void getReflectedVector(btVector3& incident, btVector3& hitpoint, btVector3& reflected)
{
	reflected = incident - (2 * (incident.dot(hitpoint)) * (hitpoint.normalize()));
}

//quaternions
void getQuaternionAngle(btQuaternion& quat, btScalar& angle)
{
	angle = quat.getAngle();
}

void getAxisOfRotation(btQuaternion& quat, btVector3& angle)
{
	angle = quat.getAxis();
}

void dotProductQuaternion(btQuaternion& quat1, btQuaternion& quat2, btScalar& product)
{
	product = quat1.dot(quat2);
}

void getQuaternionMagnitude(btQuaternion& quat, btScalar& magnitude, bool flag = false)
{
	if(flag == false)
		magnitude = quat.length();
	else
		magnitude = quat.length2();
}

void getInverseQuaternion(btQuaternion& quat, btQuaternion& inverse)
{
	inverse = quat.inverse();
}
