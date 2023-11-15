#include <string>

std::string problemSolution3(float height, char S) {
    if(S == 'M') {
        if (height < 1.70) {
            return "Short"
        } else if (height >= 1.70 and height < 1.85) {
            return "Normal";
        } else {
            return "Tall";
        }
    } else {
        if (height < 1.60) {
            return "Short";
        } else if (height >= 1.60 and height < 1.75) {
            return "Normal";
        } else {
            return "Tall";
        }
    }
}