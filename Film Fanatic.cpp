// Film Fanatic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Film_Collection.h"
int main()
{
    Films objFilms;

    objFilms.Add_Film();
    objFilms.Increment_Times_Watched();
    objFilms.Display_All_Films();
   
}