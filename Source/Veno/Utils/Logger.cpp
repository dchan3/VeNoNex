//
// Created by versustune on 09.06.20.
//

#include "Logger.h"

void VeNo::Logger::debugMessage(const std::string &message) {
#ifdef DEBUG
    std::cout << "\u001b[38;5;172m[DEBUG]\u001b[0m\t" << message << "\n";
#endif
}

void VeNo::Logger::infoDebugMessage(const std::string &message) {
#ifdef DEBUG
    std::cout << "\u001b[38;5;111m[INFO]\u001b[0m\t" << message << "\n";
#endif
}
