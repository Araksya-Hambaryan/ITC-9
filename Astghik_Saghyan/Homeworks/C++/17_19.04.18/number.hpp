#ifndef NUMBER_HPP
#define NUMBER_HPP


class Number: public Var {
    public:
    int number;
    Number(int num);
    std::string toString(int num);
};

#endif
