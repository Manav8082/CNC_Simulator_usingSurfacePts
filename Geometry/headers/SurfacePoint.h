#pragma once
#include <iostream>

namespace Geometry
{
	class SurfacePoint
	{
	private:
		double x;
		double y;
		double z;
	public:

		SurfacePoint();
		SurfacePoint(double, double, double);
		~SurfacePoint();

		double X();
		double Y();
		double Z();
		friend std::ostream& operator<<(std::ostream& os, const SurfacePoint& sp);
		bool operator()(const SurfacePoint& other) const;
		bool operator==(const SurfacePoint& other) const;
		bool operator!=(const SurfacePoint& other) const;
		
	};
}