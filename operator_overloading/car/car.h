#pragma once
#ifndef GAME_H
#define GAME_H

class Car{
        
    public:
        int *fuel;
        Car();
        Car(int fuel);
        Car(Car &&obj);
        Car(const Car & obj);
        int GetFuel()const;
        void SetFuel(int fuel);
        Car operator+(const Car &car) const;
        Car& operator=(const Car &car);
        //std::ostream & operator <<(std::ostream& out, const Car &a);
};

#endif