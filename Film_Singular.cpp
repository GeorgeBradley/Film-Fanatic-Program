#include "Film_Singular.h"
Film::Film(std::string sFN, std::string sFR, int iTW)
	:sFilmName(sFN), sFilmRating(sFR), iTimesWatched(iTW)
{
	std::cout << "Constructor for " << sFilmName << " is being called!" << std::endl;
}

void Film::Display_Film()const
{
	std::cout << "Film name: " << sFilmName << std::endl;
	std::cout << "Film rating: " << sFilmRating << std::endl;
	std::cout << "Times watched: " << iTimesWatched << std::endl;

}