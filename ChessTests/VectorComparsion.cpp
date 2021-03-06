#include "pch.h"
#include "VectorComparsion.h"

bool IncludedInVector(Position position, vector<Position> vector)
{
	for (int i = 0; i < vector.size(); i++)
	{
		if (vector.at(i) == position)
		{
			return true;
		}
	}
	return false;
}

bool CompareVector(vector<Position> vector1, vector<Position> vector2)
{
	if (vector1.size() != vector2.size())
	{
		return false;
	}
	for (int i = 0; i < vector1.size(); i++)
	{
		if (!IncludedInVector(vector1.at(i), vector2))
		{
			return false;
		}
	}
	return true;
}
