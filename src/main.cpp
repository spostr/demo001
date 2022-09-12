#include <iostream>
#define SPDLOG_ACTIVE_LEVEL SPDLOG_LEVEL_TRACE
#include <spdlog/spdlog.h>

int main() {
    spdlog::set_level(spdlog::level::debug);
    spdlog::set_pattern("%Y-%m-%d %H:%M:%S.%e|pid:%P|tid:%t|%s:%#|%!()|%l >> %v");

    SPDLOG_DEBUG("hello world");
    return 0;
}