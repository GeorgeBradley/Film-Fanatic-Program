#pragma once
#include "Film_Singular.h"
#include <vector>
class Films
{
private:
	std::vector<Film>objFilms;
public:
	bool Add_Film() 
	{
		std::string sInputFilmName = "";
		std::string sInputFilmRating = "";
		int iInputTimesWatched = 0;
		std::cout << "Film name: ";
		std::cin >> sInputFilmName;
		for (std::size_t st = 0; st < objFilms.size(); st++)
		{
			if (sInputFilmName == objFilms.at(st).sFilmName) 
			{
				std::cout << "We couldn't add the film as it already exists!" << std::endl;
				return false;
			}
		}
		std::cout << "Enter either 'PG', '12', '15' or '18'" << std::endl;
		std::cout << "Film rating: ";
		std::cin >> sInputFilmRating;
		if (sInputFilmRating != "PG" || sInputFilmRating != "12" || sInputFilmRating != "15" || sInputFilmRating != "18")
		{
			std::cout << "That's an invalid rating!";
			return false;
		}

		std::cout << "Enter times watched: ";
		std::cin >> iInputTimesWatched;

		objFilms.push_back(Film{ sInputFilmName, sInputFilmRating, iInputTimesWatched });
	}

};

