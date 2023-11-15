#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    std::istringstream iss(macAddress);
    std::string octet;
    getline(isss, octet, ':');
    int firstOctet;
    std::stringstream(octet) >> std::hex >> firstOctet;
    if (firstOctet % 2 == 0) {
        return "Uni cast";
    } else if (firstOctet % 2 !=0 and firstOctet != 255) {
        return "Multicast";
    } else if (firstOctet == 255) {
        return "Broadcast";
    }
}
