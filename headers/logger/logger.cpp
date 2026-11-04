/**
 * @file logger.cpp - Implementations for custom logging
 * @author JAXON BELTRAN <jxson.main@gmail.com>
 * @copyright 2026 Jxson
 * @license MIT
 */
#include "logger.h++"

#include <iostream>

#include "../ANSI/ANSI.h++"

namespace logger {
    void log(std::string_view text) {
        std::cout << ansi::green << "[LOG] " << ansi::reset << text << std::endl;
    }

    void warn(std::string_view text) {
        std::cout << ansi::yellow << "[WARN] " << ansi::reset << text << std::endl;
    }

    void error(std::string_view text) {
        std::cout << ansi::red << "[ERROR] " << ansi::reset << text << std::endl;
    }

    void debug(std::string_view text) {
        std::cout << ansi::blue << "[DEBUG] " << ansi::reset << text << std::endl;
    }

    void info(std::string_view text) {
        std::cout << ansi::cyan << "[INFO] " << ansi::reset << text << std::endl;
    }
} // logger
