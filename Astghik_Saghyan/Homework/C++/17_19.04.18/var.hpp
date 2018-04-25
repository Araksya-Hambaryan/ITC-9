#ifndef VAR_HPP
#define VAR_HPP


class Var{
    public:
    Var();
    Var(Var& vec);
    Var(Var&& vec);
    ~Var();
    std::string toString();
};

#endif
