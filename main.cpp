//
//  main.cpp
//  Example
//
//  Movie Data !
//  Created by Emmanuel Idehen on 2/7/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


struct MovieData
{
    
    string director;
    int runtime;
    string title;
    int year;
    
    
    MovieData(string directors, int runtimes, string titles, int years)
    {
        director = directors;
        runtime = runtimes;
        title = titles;
        year = years;
        
    }
    
};


void print (MovieData x)
{
    cout << x.director << "  " << x.runtime <<"  " << x.title <<"   "<< x.year << endl;
    
    
}

int main()
{
    
    MovieData obj1("hey",0,"hh",0);
    MovieData obj2("hey",0,"kk",0);
    
    print(obj1);
    print(obj2);
    
    return 0;
}
