#include <iostream>
#include <cmath>

int convert(std::string num) {
    int a = 0;
    for(int i = 0; i < num.size(); ++i) {
        a = a + ((int)num[i] - 48) * pow(10, num.size() - 1 - i);
    }
    return a;
}

int main() {
    std::cout << "enter begin time xx xx" << std::endl;
    std::string bhour0;
    std::cin >> bhour0;
    std::string bminut0;
    std::cin >> bminut0;
    std::string ehour0;
    std::cin >> ehour0;
    std::string eminut0;
    std::cin >> eminut0;
    int bhour = convert(bhour0);
    int bminut = convert(bminut0);
    int ehour = convert(ehour0);
    int eminut = convert(eminut0);
    int ring = 0;
    while (0 > bhour || 0 > bminut || 0 > ehour || 0 > eminut || 12 < bhour || 12 < ehour || 60 < bminut || 60 < eminut || bhour > ehour || (ehour == bhour && bminut > eminut)) {
        std::cout << "enter correct time '00' '00'" << std::endl;
        std::cin >> bhour0;
        std::cin >> bminut0;
        std::cin >> ehour0;
        std::cin >> eminut0;
        bhour = convert(bhour0);
        bminut = convert(bminut0);
        ehour = convert(ehour0);
        eminut = convert(eminut0);
    }
    if (12 == ehour && 0 < eminut) {
        eminut = -1;
    }
    if (12 == bhour && (0 != bminut || 12 != ehour || 0 != eminut)) {
        eminut = -1;
    }
    ring = 2 * (ehour - bhour) ;
    if (0 == bminut || 7 == bminut) {
        ring = ring +1;    
    }
    if (7 < bminut) {
        ring = ring -1;
    }
    if (7 <= eminut) {
        ring = ring + 1;
    }
    std::cout << "will ring " << ring << " items" << std::endl;
    return 0;
}
