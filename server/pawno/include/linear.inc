/*
	Plugin: linear
	Author: codectile
*/

//vectors
native	AddVectors(Float:x1, Float:y1, Float:z1, Float:x2, Float:y2, Float:z2, &Float:x, &Float:y, &Float:z);
native	Float:DotProduct(Float:x1, Float:y1, Float:z1, Float:x2, Float:y2, Float:z2);
native	CrossProduct(Float:x1, Float:y1, Float:z1, Float:x2, Float:y2, Float:z2, &Float:x, &Float:y, &Float:z);
native	Float:GetVectorAngle(Float:x, Float:y, Float:z);
native	Float:GetDistance(Float:x1, Float:y1, Float:z1, Float:x2, Float:y2, Float:z2);
native	Float:GetMagnitude(Float:x, Float:y, Float:z);
native	GetNormalized(Float:x1, Float:y1, Float:z1, Float:x2, Float:y2, Float:z2, &Float:x, &Float:y, &Float:z);
native	GetClosestAxis(Float:x, Float:y, Float:z);
native	GetFurthestAxis(Float:x, Float:y, Float:z);
native	RotateVector(Float:x1, Float:y1, Float:z1, Float:ax, Float:ay, Float:az, Float:angle, &Float:x, &Float:y, &Float:z);
native	GetReflectedVector(Float:x1, Float:y1, Float:z1, Float:nx, Float:ny, Float:nz, &Float:x, &Float:y, &Float:z);

//quaternions
native	Float:GetQuaternionAngle(Float:x, Float:y, Float:z, Float:w);
native	GetAxisOfRotation(Float:x, Float:y, Float:z, Float:w, &Float:x1, &Float:y1, &Float:z1);
native	Float:DotProductQuaternion(Float:x1, Float:y1, Float:z1, Float:w1, Float:x2, Float:y2, Float:z2, Float:w2);
native	Float:GetQuaternionMagnitude(Float:x, Float:y, Float:z, Float:w);
native	Float:GetInverseQuaternion(Float:x, Float:y, Float:z, Float:w, &Float:x1, &Float:y1, &Float:z1, &Float:w1);