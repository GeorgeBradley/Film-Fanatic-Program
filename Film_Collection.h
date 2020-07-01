#pragma once
#include "Film_Singular.h"
#include <vector>
class Films
{
private:
	std::vector<Film>objFilms;

public:
	bool Add_Film();
	bool Increment_Times_Watched();
	void Display_All_Films();
};

