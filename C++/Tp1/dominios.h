#ifndef DOMINIOS_CPP_INCLUDED
#define DOMINIOS_CPP_INCLUDED


/// \ Domínio Pai, que sera base para os demais
///
class Dominio {

    protected:
        string valor;
        void validar(string);


    public:
        const static string SENHA_INVALIDA = 12345;
        void setValor(string);
        string getValor() const;
};



/// \brief Domínio Matrícula
///
/// Possui uma função validar. Se a matrícula (tipo string) passada para a função for válida, a matricula é
/// armazenada. Caso contrário, ocorre o lançamento de uma exceção.
///
/// **Formato aceito de Matrícula**:
/// -(DDDDDDDX)
/// 1. D é um digito de 0 a 9
/// 2. X é um digito verificador calculado com módulo 10
///
/// **Exemplos de matrículas validas**:
/// -
/// -
/// -

class Matricula : public Dominio{
    protected:
        string valor;

/// @throw invalid_argument se não for valido
        void validar(string);
    public:

        const static string MATRICULA_INVALIDA = 12345;
        void setValor(string);
        string getValor() const;
};

inline string Matricula::getValor() const {
    return valor;
}
/// \brief Dominio Senha
///
/// **Formato aceito de Senha**:
/// (XXXXXX)
/// 1. X podendo ser:
/// 1- caracter de A - Z
/// 2- digito   de 0 - 9
/// 3- caracter especial '@', #, $, % e &
/// Nao sera aceito caracteres duplicados
///
/// **Exemplos de senhas validas**:
/// -
/// -
/// -



class Senha : public Dominio{
    protected:
        string valor;

/// @throw invalid_argument se não for valido
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

/// \brief Dominio Classe
///
/// **Formato aceito de Classe**:
/// 1. Palavras abaixo:
/// 1- UNIDADE
/// 2- INTEGRACAO
/// 3- FUMACA
/// 4- SISTEMA
/// 5- REGRESSAO
/// 6- ACEITACAO


class Classe : public Dominio{
    protected:
        string valor;

/// @throw invalid_argument se não for valido
        void validar(string);
    public:
        const static string SENHA_INVALIDA = 12345;
        void setValor(string);
        string getValor() const;
};

inline string Senha::getValor() const {
    return valor;
}


/// \brief Dominio Data
///
/// Possui uma função validar. Se a data (tipo string) passada para a função for válida,
/// a data é armazenada. Caso contrário, ocorre o lançamento de uma exceção.
///
/// **Formato de data aceita**:
/// (DD/MES/ANO)
///
/// **Formato dos dias aceito**:
/// 1- Números entre 01 - 31. Número menor que 10 deve ser acompanhado por um zero.
///
/// **Formato dos meses aceitos**:
/// - Jan
/// - Fev
/// - Mar
/// - Abr
/// - Mai
/// - Jun
/// - Jul
/// - Ago
/// - Set
/// - Out
/// - Nov
/// - Dez
///
/// **Formato de ano aceito*:
/// 1- Números de 2000 - 2999
///
/// **Observações**:
/// A funçao leva em consideração se o ano é bissexto ou não
/// - O mês de Fev vai até o dia 28 ou 29(caso seja ano bissexto)
/// - Os meses: Abr, Jun, Set, Nov vão até o dia 30
/// - Os meses: Jan, Mar, Mai, Jul, Ago, Out, Dez vão até o dia 31


class Data : public Dominio{
    protected:
        string valor;

/// @throw invalid_argument se não for valido
        void validar(string);
    public:
        const static string SENHA_INVALIDA = 12345;
        void setValor(string);
        string getValor() const;
};

inline string Senha::getValor() const {
    return valor;
}


/// \brief Domínio Resultado
///
/// **Formato aceito de Resultado**:
/// 1. Palavras abaixo:
/// 1- APROVADO
/// 2- REPROVADO

class Resultado : public Dominio{
    protected:
        string valor;

/// @throw invalid_argument se não for valido
        void validar(string);
    public:
        const static string SENHA_INVALIDA = 12345;
        void setValor(string);
        string getValor() const;
};

inline string Senha::getValor() const {
    return valor;
}

/// \brief Dominio Telefone
///
/// **Formato aceito de Telefone**:
/// (+XXXXXXX) ou (+XXXXXXXXXXXXXXX)
///  7 digitos        15 digitos
/// 1. X podendo ser:
/// 1- digito   de 0 - 9

class Telefone : public Dominio{
    protected:
        string valor;

/// @throw invalid_argument se não for valido
        void validar(string);
    public:
        const static string SENHA_INVALIDA = 12345;
        void setValor(string);
        string getValor() const;
};

inline string Senha::getValor() const {
    return valor;
}


/// \brief Dominio Codigo
///
/// **Formato aceito de Codigo**:
/// (LLLDDD)
/// 1. L é uma letra de A - Z, a - z
/// 2. D é um digito de 0 - 9

class Codigo : public Dominio{
    protected:
        static const regex PADRAO_ACEITO;

/// @throw invalid_argument se não for valido
        void validar(string);
    public:
        const static string SENHA_INVALIDA = 12345;
        Codigo(const string&)
};

/// \brief Dominio Texto
///
/// **Formato aceito de Texto**:
/// Pode ter de 10 a 20 caracteres
/// 1. X podendo ser:
/// 1- Letra de A - Z, a - z
/// 2- Digito de 0 - 9
/// 3- Sinal de pontuacao . , ; ? ! : -
/// 4- Caracter especial '@', #, $, % ou &
///
/// **Observações**:
/// Não ha espacos em branco na sequencia
/// Nao ha acentuação

class Texto : public Dominio{
    protected:
        string valor;

/// @throw invalid_argument se não for valido
        void validar(string);
    public:

        const static string MATRICULA_INVALIDA = 12345;
        void setValor(string);
        string getValor() const;
};

inline string Texto::getValor() const {
    return valor;
}

