#include <fmt/format.h>

int main()
{
    auto constexpr source = R"(#include <fmt/format.h>

int main()
{{
    auto constexpr source = R"{}{}{}";

    fmt::print(source, '(', source, ')');
}}
)";

    fmt::print(source, '(', source, ')');
}
