#pragma once
#include <string>
#include <iostream>
class Film
{
public:
	std::string sFilmName;
	std::string sFilmRating;
	int iTimesWatched;

	Film(std::string sFN, std::string sFR, int iTW);

};

