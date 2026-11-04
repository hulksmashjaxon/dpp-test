/**
 * @file logger.h++ - ${Description}
 * @author JAXON BELTRAN <jxson.main@gmail.com>
 * @copyright 2026 Jxson
 * @license MIT
 */
#pragma once
#include <string_view>

namespace logger {
    void log(std::string_view text);

    void warn(std::string_view text);

    void error(std::string_view text);

    void debug(std::string_view text);

    void info(std::string_view text);
} // logger
