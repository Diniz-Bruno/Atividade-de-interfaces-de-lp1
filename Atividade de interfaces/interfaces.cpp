class IControlavel{
    virtual bool ligar()=0;
    virtual bool desligar()=0;
    virtual~iligavel() =default;
};

class IRelatavel{
    virtual void gerarRelatorio()=0;
    virtual~IControlavel() =default;
};

class IAtualizavel{
    virtual void atualizarFirmware()=0;
    virtual~IAtualizavel() =default;

};

