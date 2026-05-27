#include"aparelho.cpp"
#include"interfaces.cpp"
#include"header.h"

class MaquinaDeLavaRoupa:public Aparelho, public IControlavel, public IRelatavel, public IAtualizavel{
    private:

    public:
        MaquinaDeLavaRoupa(std::string nome):Aparelho(nome){
    
    }


};