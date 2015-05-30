#ifndef CORE_H
#define CORE_H

#include "SDK\amx\amx.h"
#include "SDK\plugincommon.h"
#include "LinearMath\btVector3.h"
#include "LinearMath\btQuaternion.h"


typedef void (*logprintf_t)(char* format, ...);


logprintf_t logprintf;
extern void *pAMXFunctions;

PLUGIN_EXPORT unsigned int PLUGIN_CALL Supports() 
{
	return SUPPORTS_VERSION | SUPPORTS_AMX_NATIVES;
}

PLUGIN_EXPORT bool PLUGIN_CALL Load(void **ppData) 
{
	pAMXFunctions = ppData[PLUGIN_DATA_AMX_EXPORTS];
	logprintf = (logprintf_t) ppData[PLUGIN_DATA_LOGPRINTF];

	logprintf(" ________________________ ");
	logprintf("|       linearMath       |");
	logprintf("|         Plugin         |");
	logprintf("|        Attached        |");
	logprintf("|    Author: codectile   |");
	logprintf(" ________________________ ");
	return true;
}

PLUGIN_EXPORT void PLUGIN_CALL Unload()
{
	logprintf(" ________________________ ");
	logprintf("|       linearMath       |");
	logprintf("|         Plugin         |");
	logprintf("|       Dettached        |");
	logprintf("|    Author: codectile   |");
	logprintf(" ________________________ ");
}

//vectors
void addVectors(btVector3& vector1, btVector3& vector2, btVector3& resultant);
void dotProduct(btVector3& vector1, btVector3& vector2, btScalar& product);
void crossProduct(btVector3& vector1, btVector3& vector2, btVector3& product);
void getVectorAngle(btVector3& vector1, btVector3& vector2, btScalar& angle);
void getDistance(btVector3& vector1, btVector3& vector2, btScalar& distance, bool flag = false);
void getMagnitude(btVector3& vector, btScalar& magnitude, bool flag = false);
void getNormalized(btVector3& vector, btVector3& normalized);
void getClosestAxis(btVector3& vector, int& axis);
void getFurthestAxis(btVector3& vector, int& axis);
void rotateVector(btVector3& vector, btVector3& axis, btScalar& angle, btVector3& resultant);
void getReflectedVector(btVector3& incident, btVector3& hitpoint, btVector3& reflected);
//quaternions
void getQuaternionAngle(btQuaternion& quat, btScalar& angle);
void getAxisOfRotation(btQuaternion& quat, btVector3& angle);
void dotProductQuaternion(btQuaternion& quat1, btQuaternion& quat2, btScalar& product);
void getQuaternionMagnitude(btQuaternion& quat, btScalar& magnitude, bool flag = false);
void getInverseQuaternion(btQuaternion& quat, btQuaternion& inverse);

#endif
