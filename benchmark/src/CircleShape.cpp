#include <benchmark/benchmark.h>
#include <SFML/Graphics/CircleShape.hpp>

static void CircleShape_setRadius(benchmark::State& state) {
    sf::CircleShape shape;

    while (state.KeepRunning())
        shape.setRadius(60.f);
}

BENCHMARK(CircleShape_setRadius);

static void CircleShape_getRadius(benchmark::State& state) {
    sf::CircleShape shape;

    while (state.KeepRunning())
        volatile float x = shape.getRadius();
}

BENCHMARK(CircleShape_getRadius);

static void CircleShape_setPointCount(benchmark::State& state) {
    sf::CircleShape shape;

    while (state.KeepRunning())
        shape.setPointCount(60);
}

BENCHMARK(CircleShape_setPointCount);

static void CircleShape_getPointCount(benchmark::State& state) {
    sf::CircleShape shape;

    while (state.KeepRunning())
        volatile std::size_t x = shape.getPointCount();
}

BENCHMARK(CircleShape_getPointCount);

static void CircleShape_getPoint(benchmark::State& state) {
    sf::CircleShape shape;

    while (state.KeepRunning())
        volatile sf::Vector2f x = shape.getPoint(30);
}

BENCHMARK(CircleShape_getPoint);
