#include "Film_Collection.h"
bool Films::Add_Film()
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
	if (sInputFilmRating != "PG" && sInputFilmRating != "12" && sInputFilmRating != "15" && sInputFilmRating != "18")
	{
		std::cout << "That's an invalid rating!";
		return false;
	}
	std::cout << "Enter times watched: ";
	std::cin >> iInputTimesWatched;
	objFilms.push_back(Film{ sInputFilmName, sInputFilmRating, iInputTimesWatched });
}

bool Films::Increment_Times_Watched()
{
	std::string sInputFilmTitle;
	std::cout << "Input the title of the film you wish to increment the number of times watched to: ";
	std::cin >> sInputFilmTitle;
	for (std::size_t st = 0; st < objFilms.size(); st++)
	{
		if (sInputFilmTitle == objFilms.at(st).sFilmName)
		{
			objFilms.at(st).iTimesWatched++;
			return true;
		}
	}
	std::cout << "Sorry, the title doesn't exist!";
	return false;

}
void Films:: Display_All_Films() {
	for (std::size_t st = 0; st < objFilms.size(); st++)
	{
		objFilms.at(st).Display_Film();
	}
}
