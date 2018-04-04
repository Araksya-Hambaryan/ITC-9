#include <iostream>


int main() {
    int bhour = 0;
    int bminut = 0;
    int ehour = 0;
    int eminut = 0;
    int ring = 0;
//    bool k = 1;
    std::cout << "enter begin time xx xx" << std::endl;
    std::cin >> bhour >> bminut ;
    std::cin >> ehour >> eminut ;
//    if ('0' > (char)bhour > '9' || '0' > (char)ehour > '9' || '0' > (char)bminut > '9' || '0' > (char)eminut > '9') {
//        k = 0;
//    }
//    while (0 == k) {
//        std::cout << "enter correct time xx xx" << std::endl;
//        std::cin >> bhour >> bminut ;
//        std::cin >> ehour >> eminut ;
//        if ('0' > (char)bhour > '9' || '0' > (char)ehour > '9' || '0' > (char)bminut > '9' || '0' > (char)eminut > '9') {
//            k = 0;
//        } else {
//           k = 1;
//        }
//    }
    if (12 == ehour && 0 < eminut) {
        eminut = -1;
    }
    if (12 == bhour && (0 != bminut || 12 != ehour || 0 != eminut)) {
        eminut = -1;
    }
    while (0 > bhour || 0 > bminut || 0 > ehour || 0 > eminut || 12 < bhour || 12 < ehour || 60 < bminut || 60 < eminut || bhour > ehour || (ehour == bhour && bminut > eminut)) {
        std::cout << "enter correct time" << std::endl;
        std::cin >> bhour >> bminut ;
        std::cin >> ehour >> eminut ;
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
