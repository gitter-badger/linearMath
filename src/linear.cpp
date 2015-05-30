#include "core.h"

//vectors
cell AMX_NATIVE_CALL AddVectors(AMX* amx, cell* params)
{
	btVector3 vector1(amx_ctof(params[1]), amx_ctof(params[2]), amx_ctof(params[3]));
	btVector3 vector2(amx_ctof(params[4]), amx_ctof(params[5]), amx_ctof(params[6]));
	btVector3 resultant;
	addVectors(vector1, vector2, resultant);
	cell* mem_add[3];
	amx_GetAddr(amx, params[7], &mem_add[0]);
	amx_GetAddr(amx, params[8], &mem_add[1]);
	amx_GetAddr(amx, params[9], &mem_add[2]);
	*mem_add[0] = amx_ftoc(resultant.getX());
	*mem_add[1] = amx_ftoc(resultant.getY());
	*mem_add[2] = amx_ftoc(resultant.getZ());
	return 1;
}

cell AMX_NATIVE_CALL DotProduct(AMX* amx, cell* params)
{
	btVector3 vector1(amx_ctof(params[1]), amx_ctof(params[2]), amx_ctof(params[3]));
	btVector3 vector2(amx_ctof(params[4]), amx_ctof(params[5]), amx_ctof(params[6]));
	btScalar resultant;
	dotProduct(vector1, vector2, resultant);
	return amx_ftoc(resultant);
}

cell AMX_NATIVE_CALL CrossProduct(AMX* amx, cell* params)
{
	btVector3 vector1(amx_ctof(params[1]), amx_ctof(params[2]), amx_ctof(params[3]));
	btVector3 vector2(amx_ctof(params[4]), amx_ctof(params[5]), amx_ctof(params[6]));
	btVector3 resultant;
	crossProduct(vector1, vector2, resultant);
	cell* mem_add[3];
	amx_GetAddr(amx, params[7], &mem_add[0]);
	amx_GetAddr(amx, params[8], &mem_add[1]);
	amx_GetAddr(amx, params[9], &mem_add[2]);
	*mem_add[0] = amx_ftoc(resultant.getX());
	*mem_add[1] = amx_ftoc(resultant.getY());
	*mem_add[2] = amx_ftoc(resultant.getZ());
	return 1;
}

cell AMX_NATIVE_CALL GetVectorAngle(AMX* amx, cell* params)
{
	btVector3 vector1(amx_ctof(params[1]), amx_ctof(params[2]), amx_ctof(params[3]));
	btVector3 vector2(amx_ctof(params[4]), amx_ctof(params[5]), amx_ctof(params[6]));
	float angle;
	getVectorAngle(vector1, vector2, angle);
	return amx_ftoc(angle);
}

cell AMX_NATIVE_CALL GetDistance(AMX* amx, cell* params)
{
	btVector3 vector1(amx_ctof(params[1]), amx_ctof(params[2]), amx_ctof(params[3]));
	btVector3 vector2(amx_ctof(params[4]), amx_ctof(params[5]), amx_ctof(params[6]));
	float distance;
	getDistance(vector1, vector2, distance);
	return amx_ftoc(distance);
}

cell AMX_NATIVE_CALL GetMagnitude(AMX* amx, cell* params)
{
	btVector3 vector(amx_ctof(params[1]), amx_ctof(params[2]), amx_ctof(params[3]));
	float magnitude;
	getMagnitude(vector, magnitude);
	return amx_ftoc(magnitude);
}

cell AMX_NATIVE_CALL GetNormalized(AMX* amx, cell* params)
{
	btVector3 vector(amx_ctof(params[1]), amx_ctof(params[2]), amx_ctof(params[3]));
	btVector3 normalized;
	getNormalized(vector, normalized);
	cell* mem_add[3];
	amx_GetAddr(amx, params[4], &mem_add[0]);
	amx_GetAddr(amx, params[5], &mem_add[1]);
	amx_GetAddr(amx, params[6], &mem_add[2]);
	*mem_add[0] = amx_ftoc(normalized.getX());
	*mem_add[1] = amx_ftoc(normalized.getY());
	*mem_add[2] = amx_ftoc(normalized.getZ());
	return 1;
}

cell AMX_NATIVE_CALL GetClosestAxis(AMX* amx, cell* params)
{
	btVector3 vector(amx_ctof(params[1]), amx_ctof(params[2]), amx_ctof(params[3]));
	int axis;
	getClosestAxis(vector, axis);
	return axis;
}

cell AMX_NATIVE_CALL GetFurthestAxis(AMX* amx, cell* params)
{
	btVector3 vector(amx_ctof(params[1]), amx_ctof(params[2]), amx_ctof(params[3]));
	int axis;
	getFurthestAxis(vector, axis);
	return axis;
}

cell AMX_NATIVE_CALL RotateVector(AMX* amx, cell* params)
{
	btVector3 vector(amx_ctof(params[1]), amx_ctof(params[2]), amx_ctof(params[3]));
	btVector3 axis(amx_ctof(params[4]), amx_ctof(params[5]), amx_ctof(params[6]));
	btVector3 resultant;
	rotateVector(vector, axis, amx_ctof(params[7]), resultant);
	cell* mem_add[3];
	amx_GetAddr(amx, params[8], &mem_add[0]);
	amx_GetAddr(amx, params[9], &mem_add[1]);
	amx_GetAddr(amx, params[10], &mem_add[2]);
	*mem_add[0] = amx_ftoc(resultant.getX());
	*mem_add[1] = amx_ftoc(resultant.getY());
	*mem_add[2] = amx_ftoc(resultant.getZ());
	return 1;
}

cell AMX_NATIVE_CALL GetReflectedVector(AMX* amx, cell* params)
{
	btVector3 vector(amx_ctof(params[1]), amx_ctof(params[2]), amx_ctof(params[3]));
	btVector3 normal(amx_ctof(params[4]), amx_ctof(params[5]), amx_ctof(params[6]));
	btVector3 resultant;
	getReflectedVector(vector, normal, resultant);
	cell* mem_add[3];
	amx_GetAddr(amx, params[7], &mem_add[0]);
	amx_GetAddr(amx, params[8], &mem_add[1]);
	amx_GetAddr(amx, params[9], &mem_add[2]);
	*mem_add[0] = amx_ftoc(resultant.getX());
	*mem_add[1] = amx_ftoc(resultant.getY());
	*mem_add[2] = amx_ftoc(resultant.getZ());
	return 1;
}

//quaternions
cell AMX_NATIVE_CALL GetQuaternionAngle(AMX* amx, cell* params)
{
	btQuaternion quat(amx_ctof(params[1]), amx_ctof(params[2]), amx_ctof(params[3]), amx_ctof(params[4]));
	float angle;
	getQuaternionAngle(quat, angle);
	return amx_ftoc(angle);
}

cell AMX_NATIVE_CALL GetAxisOfRotation(AMX* amx, cell* params)
{
	btQuaternion quat(amx_ctof(params[1]), amx_ctof(params[2]), amx_ctof(params[3]), amx_ctof(params[4]));
	btVector3 angle;
	getAxisOfRotation(quat, angle);
	cell* mem_add[3];
	amx_GetAddr(amx, params[7], &mem_add[0]);
	amx_GetAddr(amx, params[8], &mem_add[1]);
	amx_GetAddr(amx, params[9], &mem_add[2]);
	*mem_add[0] = amx_ftoc(angle.getX());
	*mem_add[1] = amx_ftoc(angle.getY());
	*mem_add[2] = amx_ftoc(angle.getZ());
	return 1;
}

cell AMX_NATIVE_CALL DotProductQuaternion(AMX* amx, cell* params)
{
	btQuaternion quat1(amx_ctof(params[1]), amx_ctof(params[2]), amx_ctof(params[3]), amx_ctof(params[4]));
	btQuaternion quat2(amx_ctof(params[5]), amx_ctof(params[6]), amx_ctof(params[7]), amx_ctof(params[8]));
	btScalar product;
	dotProductQuaternion(quat1, quat2, product);
	return amx_ftoc(product);
}

cell AMX_NATIVE_CALL GetQuaternionMagnitude(AMX* amx, cell* params)
{
	btQuaternion quat(amx_ctof(params[1]), amx_ctof(params[2]), amx_ctof(params[3]), amx_ctof(params[4]));
	btScalar magnitude;
	getQuaternionMagnitude(quat, magnitude);
	return amx_ftoc(magnitude);
}

cell AMX_NATIVE_CALL GetInverseQuaternion(AMX* amx, cell* params)
{
	btQuaternion quat(amx_ctof(params[1]), amx_ctof(params[2]), amx_ctof(params[3]), amx_ctof(params[4]));
	btQuaternion inverse;
	getInverseQuaternion(quat, inverse);
	cell* mem_add[4];
	amx_GetAddr(amx, params[5], &mem_add[0]);
	amx_GetAddr(amx, params[6], &mem_add[1]);
	amx_GetAddr(amx, params[7], &mem_add[2]);
	amx_GetAddr(amx, params[8], &mem_add[2]);
	*mem_add[0] = amx_ftoc(inverse.getX());
	*mem_add[1] = amx_ftoc(inverse.getY());
	*mem_add[2] = amx_ftoc(inverse.getZ());
	*mem_add[3] = amx_ftoc(inverse.getW());
	return 1;
}

AMX_NATIVE_INFO linearNatives[] =
{
	{"AddVectors", AddVectors},
	{"DotProduct", DotProduct},
	{"CrossProduct", CrossProduct},
	{"GetVectorAngle", GetVectorAngle},
	{"GetDistance", GetDistance},
	{"GetMagnitude", GetMagnitude},
	{"GetNormalized", GetNormalized},
	{"GetClosestAxis", GetClosestAxis},
	{"GetFurthestAxis", GetFurthestAxis},
	{"RotateVector", RotateVector},
	{"GetReflectedVector", GetReflectedVector},
	//quaternions
	{"GetQuaternionAngle", GetQuaternionAngle},
	{"GetAxisOfRotation", GetAxisOfRotation},
	{"DotProductQuaternion", DotProductQuaternion},
	{"GetQuaternionMagnitude", GetQuaternionMagnitude},
	{"GetInverseQuaternion", GetInverseQuaternion},
	{0, 0}
};

PLUGIN_EXPORT int PLUGIN_CALL AmxLoad( AMX *amx ) 
{
	return amx_Register(amx, linearNatives, -1);
}


PLUGIN_EXPORT int PLUGIN_CALL AmxUnload( AMX *amx ) 
{
	return AMX_ERR_NONE;
}
