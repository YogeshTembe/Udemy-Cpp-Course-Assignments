#pragma once
#ifndef GAME_H
#define GAME_H

class Car{
        
    public:
        int *fuel;
        Car();
        Car(int fuel);
        Car(Car &&obj);
        //Car(const Car & obj);
        int GetFuel()const;
        void SetFuel(int fuel);
};

#endif