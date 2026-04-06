#ifndef COMMON_H_INCLUDED
#define COMMON_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

// ****** ARGS_COUNT ******

#define ARGS_COUNT_(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, N, ...) N
#define ARGS_COUNT(...) ARGS_COUNT_(__VA_ARGS__, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)

// ****** MAP ******

#define MAP_1(f, x)       f(x)
#define MAP_2(f, x, ...)  f(x), MAP_1(f, __VA_ARGS__)
#define MAP_3(f, x, ...)  f(x), MAP_2(f, __VA_ARGS__)
#define MAP_4(f, x, ...)  f(x), MAP_3(f, __VA_ARGS__)
#define MAP_5(f, x, ...)  f(x), MAP_4(f, __VA_ARGS__)
#define MAP_6(f, x, ...)  f(x), MAP_5(f, __VA_ARGS__)
#define MAP_7(f, x, ...)  f(x), MAP_6(f, __VA_ARGS__)
#define MAP_8(f, x, ...)  f(x), MAP_7(f, __VA_ARGS__)
#define MAP_9(f, x, ...)  f(x), MAP_8(f, __VA_ARGS__)
#define MAP_10(f, x, ...) f(x), MAP_9(f, __VA_ARGS__)
#define MAP_11(f, x, ...) f(x), MAP_10(f, __VA_ARGS__)
#define MAP_12(f, x, ...) f(x), MAP_11(f, __VA_ARGS__)
#define MAP_13(f, x, ...) f(x), MAP_12(f, __VA_ARGS__)
#define MAP_14(f, x, ...) f(x), MAP_13(f, __VA_ARGS__)
#define MAP_15(f, x, ...) f(x), MAP_14(f, __VA_ARGS__)

#define MAP_COUNT(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, N, ...) N
#define MAP_CHOOSE(f, ...) MAP_COUNT(__VA_ARGS__, MAP_15, MAP_14, MAP_13, MAP_12, MAP_11, MAP_10, MAP_9, MAP_8, MAP_7, MAP_6, MAP_5, MAP_4, MAP_3, MAP_2, MAP_1)

#define MAP(f, ...) MAP_CHOOSE(f, __VA_ARGS__)(f, __VA_ARGS__)

#ifdef __cplusplus
}
#endif

#endif //COMMON_H_INCLUDED