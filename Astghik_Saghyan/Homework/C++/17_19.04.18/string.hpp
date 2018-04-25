#ifndef STRING_HPP
#define STRING_HPP


class String: public Var {
    public:
    std::string str;
    String(std::string str);
    std::string toString(std::string str);
};

#endif
