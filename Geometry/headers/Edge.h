#pragma once
#include "Point.h"

namespace Geometry
{
	class Edge
	{
	private:
		Point start;
		Point end;
	public:
		Edge(Point&, Point&);
		~Edge();
		bool operator==(Edge&) const;
	};
}