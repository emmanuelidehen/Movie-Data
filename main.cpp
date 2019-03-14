//
//  main.cpp
//  Movie
//
//  Created by Emmanuel Idehen on 2/5/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;
#include "Movie.h"

int main() {
    
   
    Movie person;
    person.year = 2012;
    person.director = "mr paul";
    person.runtime = 12.0;
    person.title = "the god's of egpyt";
  //  Movie::Movie(Movie& person, int year, double runtime, std::string director, std::string title);
   // Movie(Movie& person, 2012, 12.0, "mr paul", "the god's of egpyt");
   
  void display(Movie& person);
 
    
    
    
    
    
    
    
    return 0;
}
