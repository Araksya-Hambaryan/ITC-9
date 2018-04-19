#include "string.hpp"

String :: String() {
    setStrValue("");
}

String :: String(std :: string value) {
    setStrValue(value);
}

String :: ~String() {}

void String :: operator=(std :: string value) {
    setStrValue(value);
}
