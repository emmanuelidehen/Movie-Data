//
//  Movie.cpp
//  Movie
//
//  Created by Emmanuel Idehen on 2/5/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//

#include <stdio.h>
#include "Movie.h"
#include <iostream>
#include <string>
using namespace std;

Movie::Movie()
{
    std::string title;
    std::string director;
    int year;
    double runtime;
    
}

Movie::Movie(Movie& person, int year, double runtime, string director, string title)
{
    person.runtime = 19.2;
    person.director = "emma";
    person.title = "yoo";
    person.year = 1991;
}
void display(Movie& person)
{
    
    
  //
    cout << person.year <<person.title << person.runtime << person.director  <<endl;
    
    
}

Movie::~Movie()
{
    
}
