//
//  main.cpp
//  Die.h
//
//  Created by Navon M on 1/15/26.
//

#ifndef Die_h
#define Die_h

class Die {
private:
    int sides;

public:
    Die();              // default constructor (6 sides)
    Die(int s);         // constructor with custom sides

    int roll();         // returns random number 1 to sides
    int getSides() const;
};

#endif
