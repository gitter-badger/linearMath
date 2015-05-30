# linearMath
Linear mathematics plugin for sa-mp. This plugin is based upon Bullet's LinearMath library, to provide fast and efficient vector as well as quaternion math calculations. It completely utilizes, **S**ingle **I**nstruction, **M**ultiple **D**ata (**SIMD**) method of parallel computing which makes it fast as well as efficient.

##Functions

```pawn

//vectors
native	AddVectors(Float:x1, Float:y1, Float:z1, Float:x2, Float:y2, Float:z2, &Float:x, &Float:y, &Float:z);
native	Float:DotProduct(Float:x1, Float:y1, Float:z1, Float:x2, Float:y2, Float:z2);
native	CrossProduct(Float:x1, Float:y1, Float:z1, Float:x2, Float:y2, Float:z2, &Float:x, &Float:y, &Float:z);
native	Float:GetVectorAngle(Float:x, Float:y, Float:z);
native	Float:GetDistance(Float:x1, Float:y1, Float:z1, Float:x2, Float:y2, Float:z2);
native	Float:GetMagnitude(Float:x, Float:y, Float:z);
native	GetNormalized(Float:x, Float:y, Float:z , &Float:nx, &Float:ny, &Float:nz);
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
```

##Description

`AddVectors` - Addition of two vectors.

`DotProduct` - Dot product of two vectors.

`CrossProduct` - Cross product of two vectors.

`GetVectorAngle` - Returns the angle of the vector.

`GetDistance` - Returns the distance between two vectors.

`GetMagnitude` - Returns the magnitude/size/length of two vectors.

`GetNormalized` - Normalizes the vector.

`GetClosestAxis` - Returns the closest axis of a vector.

`GetFurthestAxis` - Returns the Furthest axis of a vector.

`RotateVector` - Rotates the vector according to the specified angle and axis.

`GetReflectedVector` - Returns the reflected vector.

`GetQuaternionAngle` - Returns the angle of a quaternion.

`GetAxisOfRotation` - Returns the axis of rotation of a quaternion.

`DotProductQuaternion` - Dot product of two quaternions.

`GetQuaternionMagnitude` - Magnitude of a quaternion.

`GetInverseQuaternion` - Inverse of a quaternion.
