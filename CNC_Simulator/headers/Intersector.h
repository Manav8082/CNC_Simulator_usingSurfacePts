#include "Triangulation.h"
using namespace Geometry;
using namespace std;

class Intersector
{
private:
	SurfacePoint* isIntersecting(Point& p1, Point& p2, double y, const vector<double>& uniqueValues);
public:
	Intersector();
	~Intersector();
	vector<SurfacePoint> intersect(Triangle& t, double y, const Triangulation& tri);

};