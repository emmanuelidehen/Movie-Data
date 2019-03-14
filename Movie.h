//
//  Movie.h
//  Movie
//
//  Created by Emmanuel Idehen on 2/5/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//
#include<string>
#ifndef Movie_h
#define Movie_h
struct Movie{
    std::string title;
    std::string director;
    int year;
    double runtime;
    
    
    Movie();
    Movie(Movie& person, int year, double runtime, std::string director, std::string title);
  
    ~Movie();
    
    void display(Movie& person);
    
    
};

#endif /* Movie_h */
