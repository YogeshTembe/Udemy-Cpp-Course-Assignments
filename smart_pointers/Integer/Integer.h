#include <iostream>

class Integer{
    private:
        int *ptr;
    public:
        Integer();
        Integer(int a);
        int GetValue();
        void SetValue(int a);
        ~Integer();
};