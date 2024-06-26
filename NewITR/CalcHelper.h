#pragma once
#include "Types.h"
#include <set>

class CalcHelper
{
private:
	// ��� ������� �� ��������������� ������ �������� ������� ���������� ����������
	// ��, �������, ������ �� �������� ��� ��� ����������
	double polar_angle(Point2d p0, Point2d p1);
	int det(Point2d p1, Point2d p2, Point2d p3);
	double distance(Point2d p0, Point2d p1);
	std::vector<Point2d> quicksort(std::vector<Point2d>& a);
	double triangle_square(double A, double B, double C);
	double calculatePolygonSquare(std::vector<Point2d> res_pts);
	std::vector <std::vector <Segment>> GeneratePolygons(uint32_t numOfPolygons);
	bool IntersectionOfSegments(Segment s1, Segment s2, std::vector <Point2d>& vertex);
	void checkIntersecton(std::vector <std::vector<Segment>> polygons, std::set<Segment>& InnerPoint, std::vector<Point2d>& tempAns);
	std::set<Point2d> Filter_points(std::set<Segment> InnerPoint, std::vector<Point2d> tempAns, std::vector<std::vector<Segment>> polygons);
public:
	// *ui-team* retval �� ��������, ��������� �� ��������))
	CalcHelperRetVal GenerateAndCalcPolygons(int num_of_polygons);
};

