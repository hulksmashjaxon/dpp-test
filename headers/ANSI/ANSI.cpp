//
// Created by jxson on 11/3/2026.
//
#include "ANSI.h++"
#include <iostream>
#ifdef _WIN32
#include <windows.h>

namespace ansi::inline util {
    void enable_ansi() {
        HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);
        if (handle_out == INVALID_HANDLE_VALUE) return;

        DWORD dwMode = 0;
        if (!GetConsoleMode(handle_out, &dwMode)) return;

        dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
        SetConsoleMode(handle_out, dwMode);
    }
}
#else
namespace ansi::inline util {
    void enable_ansi() {
        // Linux and macOS distributions natively support ansi escape codes; if this is called in your code, it is essentially useless
    }
}

#endif
