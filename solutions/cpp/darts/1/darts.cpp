#include "darts.h"

namespace darts {

    int score(double x, double y){
        double x2 = x * x;
        double y2 = y * y;
        double radius = std::sqrt(x2 + y2);

        if(radius <= 1){
            return 10;
        } else if(radius <= 5){
            return 5;
        } else if(radius <= 10){
            return 1;
        }
        return 0;
    }
// TODO: add your solution here

}  // namespace darts
