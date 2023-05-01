#ifndef DOMINIOS_CPP_INCLUDED
#define DOMINIOS_CPP_INCLUDED
 /// DOMINIOS.H

class Dominio {
    private:
        string valor;
        void validar(string);
    public:
        const static string SENHA_INVALIDA = 12345;
        void setValor(string);
        string getValor() const;
};

class Matricula : public Dominio{
    private:
        string valor;
        void validar(string);
    public:
        const static string MATRICULA_INVALIDA = 12345;
        void setValor(string);
        string getValor() const;
};

inline string Matricula::getValor() const {
    return valor;
}

class Senha : public Dominio{
    private:
        string valor;
        void validar(string);
    public:
        const static string SENHA_INVALIDA = 12345;
        void setValor(string);
        string getValor() const;
};

inline string Senha::getValor() const {
    return valor;
}

inline string Senha::getValor() const {
    return valor;
}

class Classe : public Dominio{
    private:
        string valor;
        void validar(string);
    public:
        const static string SENHA_INVALIDA = 12345;
        void setValor(string);
        string getValor() const;
};

inline string Senha::getValor() const {
    return valor;
}

class Data : public Dominio{
    private:
        string valor;
        void validar(string);
    public:
        const static string SENHA_INVALIDA = 12345;
        void setValor(string);
        string getValor() const;
};

inline string Senha::getValor() const {
    return valor;
}

class resultado : public Dominio{
    private:
        string valor;
        void validar(string);
    public:
        const static string SENHA_INVALIDA = 12345;
        void setValor(string);
        string getValor() const;
};

inline string Senha::getValor() const {
    return valor;
}

class Telefone : public Dominio{
    private:
        string valor;
        void validar(string);
    public:
        const static string SENHA_INVALIDA = 12345;
        void setValor(string);
        string getValor() const;
};

inline string Senha::getValor() const {
    return valor;
}

class Codigo : public Dominio{
    private:
        static const regex PADRAO_ACEITO;
        void validar(string);
    public:
        const static string SENHA_INVALIDA = 12345;
        Codigo(const string&)
};
