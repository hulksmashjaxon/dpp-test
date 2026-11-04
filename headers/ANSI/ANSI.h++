//
// Created by jxson on 11/3/2026.
//
#pragma once
#include <string_view>

namespace ansi::inline colors {
    /** Reset all formatting and colors */
    constexpr std::string_view reset = "\033[0m";

    // Std formatting
    /** Bold font */
    constexpr std::string_view bold = "\033[1m";
    /** Dimmed font */
    constexpr std::string_view dim = "\033[2m";
    /** Italicized font */
    constexpr std::string_view italic = "\033[3m";
    /** Underlined font */
    constexpr std::string_view underline = "\033[4m";

    // Std fgrnd color
    /** Black foreground */
    constexpr std::string_view black = "\033[30m";
    /** Red foreground */
    constexpr std::string_view red = "\033[31m";
    /** Green foreground */
    constexpr std::string_view green = "\033[32m";
    /** Yellow foreground */
    constexpr std::string_view yellow = "\033[33m";
    /** Blue foreground */
    constexpr std::string_view blue = "\033[34m";
    /** Magenta foreground */
    constexpr std::string_view magenta = "\033[35m";
    /** Cyan foreground */
    constexpr std::string_view cyan = "\033[36m";
    /** White foreground */
    constexpr std::string_view white = "\033[37m";

    // Bright fgrnd color
    /** Bright black foreground */
    constexpr std::string_view gray = "\033[90m";
    /** Bright red foreground */
    constexpr std::string_view b_red = "\033[91m";
    /** Bright green foreground */
    constexpr std::string_view b_green = "\033[92m";
    /** Bright yellow foreground */
    constexpr std::string_view b_yellow = "\033[93m";
    /** Bright blue foreground */
    constexpr std::string_view b_blue = "\033[94m";
    /** Bright magenta foreground */
    constexpr std::string_view b_magenta = "\033[95m";
    /** Bright cyan foreground */
    constexpr std::string_view b_cyan = "\033[96m";
    /** Bright white foreground */
    constexpr std::string_view b_white = "\033[97m";

    // Std background colors
    /** Black background */
    constexpr std::string_view bg_black = "\033[40m";
    /** Red background */
    constexpr std::string_view bg_red = "\033[41m";
    /** Green background */
    constexpr std::string_view bg_green = "\033[42m";
    /** Yellow background */
    constexpr std::string_view bg_yellow = "\033[43m";
    /** Blue background */
    constexpr std::string_view bg_blue = "\033[44m";
    /** Magenta background */
    constexpr std::string_view bg_magenta = "\033[45m";
    /** Cyan background */
    constexpr std::string_view bg_cyan = "\033[46m";
    /** White background */
    constexpr std::string_view bg_white = "\033[47m";
}

namespace ansi::inline util {
    /// @brief Enable ANSI escape code support on Windows-based operating systems.
    ///
    /// @note This method is useless on macOS and Linux distributions
    void enable_ansi();
}
