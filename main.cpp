/**
 * @file main.cpp - Entrypoint file
 * @author JAXON BELTRAN <jxson.main@gmail.com>
 * @copyright 2026 Jxson
 * @license MIT
*/

#include <algorithm>
#include <vector>
#include  <format>

#include "headers/ANSI/ANSI.h++"
#include "headers/logger/logger.h++"
#include  "dotenv/dotenv.hpp"

static std::pair<bool, std::string_view> check_env_vars(const std::vector<std::string_view> &required_envs) {
    auto it = std::ranges::find_if(required_envs, [](std::string_view env) {
        // this is a lambda; goes by this: [capture clause](parameters) -> return type (can be inferred) { body }
        return std::getenv(std::string(env).c_str()) == nullptr;
    });
    if (it == required_envs.end()) {
        return {false, {}};
    }
    return {true, *it};
}

int main() {
    ansi::enable_ansi();
    dotenv::load(".env"); // woops

    const std::vector<std::string_view> required_envs = {"EXAMPLE_VARIABLE"};
    auto [is_missing, missing_var] = check_env_vars(required_envs);
    if (is_missing) {
        logger::error(std::format("environment variable missing: {}", missing_var));
        return 1;
    }

    logger::info("Starting bot..");
    return 0;
}
