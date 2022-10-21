#ifndef WINGMANN_WING_CONCEPTS___DETAIL___CONCEPTS_DETAIL_H
#define WINGMANN_WING_CONCEPTS___DETAIL___CONCEPTS_DETAIL_H

#include <concepts>

namespace wingmann::concepts::__detail {

template<typename T, typename... Types>
constexpr bool is_any_of_v = std::disjunction_v<std::is_same<T, Types>...>;

template<typename T>
constexpr bool is_integral_v = is_any_of_v<
    std::remove_cv_t<T>,
    signed char,
    unsigned char,
    short,
    unsigned short,
    int,
    unsigned int,
    long,
    unsigned long,
    long long,
    unsigned long long>;

template<typename T>
constexpr bool is_floating_point_v = is_any_of_v<
    std::remove_cv_t<T>,
    float,
    double,
    long double>;

template<typename T>
constexpr bool is_character_v = is_any_of_v<
    std::remove_cv_t<T>,
    char,
    signed char,
    unsigned char,
    wchar_t,
    char8_t,
    char16_t,
    char32_t>;

} // namespace wingmann::concepts::__detail

#endif // WINGMANN_WING_CONCEPTS___DETAIL___CONCEPTS_DETAIL_H
