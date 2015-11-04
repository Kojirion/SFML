#include <benchmark/benchmark.h>
#include <SFML/Graphics/Font.hpp>

static void font_glyph(benchmark::State& state) {
    sf::Font font;

    while (state.KeepRunning())
        font.getGlyph(0,12,false);
}

BENCHMARK(font_glyph);

static void font_kerning(benchmark::State& state) {
    sf::Font font;

    while (state.KeepRunning())
        font.getKerning(0,1,12);
}

BENCHMARK(font_kerning);

static void font_line_spacing(benchmark::State& state) {
    sf::Font font;

    while (state.KeepRunning())
        font.getLineSpacing(12);
}

BENCHMARK(font_line_spacing);

static void getUnderlinePosition(benchmark::State& state) {
    sf::Font font;

    while (state.KeepRunning())
        font.getUnderlinePosition(12);
}

BENCHMARK(getUnderlinePosition);

static void getUnderlineThickness(benchmark::State& state) {
    sf::Font font;

    while (state.KeepRunning())
        font.getUnderlineThickness(12);
}

BENCHMARK(getUnderlineThickness);

static void getTexture(benchmark::State& state) {
    sf::Font font;

    while (state.KeepRunning())
        font.getTexture(12);
}

BENCHMARK(getTexture);
