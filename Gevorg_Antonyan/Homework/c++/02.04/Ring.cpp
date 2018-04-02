#include <iostream>


int main() {
    int bhour = 0;
    int bminut = 0;
    int ehour = 0;
    int eminut = 0;
    int ring = 0;
    std::cout << "enter begin time xx xx" << std::endl;
    std::cin >> bhour >> bminut ;
    std::cin >> ehour >> eminut ;
    if (ehour == 12 && eminut > 0) {
        eminut = -1;
    }
    if (bhour == 12 && (bminut != 0 || 12 != ehour || 0 != eminut)) {
        eminut = -1;
    }
    while (0 > bhour || 0 > bminut || 0 > ehour || 0 > eminut || 12 < bhour || 12 < ehour || 60 < bminut || 60 < eminut) {
        std::cout << "enter correct time" << std::endl;
        std::cin >> bhour >> bminut ;
        std::cin >> ehour >> eminut ;
    }
    ring = 2 * (ehour - bhour) ;
    if (bminut == 0) {
        ring = ring +1;    
    }
    if (bminut > 7) {
        ring = ring -1;
    }
    if (eminut >= 7) {
        ring = ring + 1;
    }
    std::cout << "will ring " << ring << " items" << std::endl;
    return 0;
}
