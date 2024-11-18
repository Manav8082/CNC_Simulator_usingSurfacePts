#include "SurfacePoint.h"
#define TOLERANCE 0.000001
using namespace Geometry;

SurfacePoint::SurfacePoint()
	:x(0.0),
	y(0.0),
	z(0.0)
{
}
 
SurfacePoint::SurfacePoint(double _x, double _y, double _z)
	:x(_x),
	y(_y),
	z(_z)
{
}

SurfacePoint::~SurfacePoint()
{
}
double SurfacePoint::X()
{
	return x;
}
 
double SurfacePoint::Y()
{
	return y;
}
 
double SurfacePoint::Z()
{
	return z;
}

bool Geometry::SurfacePoint::operator()(const SurfacePoint& other) const
{
	if (x > other.x) return true;
	if (x < other.x) return false;
	return z > other.z;
}
 
//bool SurfacePoint::operator==(const SurfacePoint& other) const
//{
//	return x == other.x && y == other.y && z == other.z;
//}

bool SurfacePoint::operator==(const SurfacePoint& other) const {
	constexpr double EPSILON = 1e-6; // Tolerance for floating-point comparison
	return (std::abs(x - other.x) < EPSILON) &&
		(std::abs(y - other.y) < EPSILON) &&
		(std::abs(z - other.z) < EPSILON);
}

bool SurfacePoint::operator!=(const SurfacePoint& other) const
{
	return !(*this == other);
}

std::ostream& Geometry::operator<<(std::ostream& os, const SurfacePoint& sp)
{
	os << sp.x << " " << sp.y << " " << sp.z << std::endl;
	return os;
}