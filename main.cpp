#include <string>
#include <vector>

void count_spaces() {
    std::string text = "a b  c   d";
    int spaces = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') spaces += 1;
    }
    (void)spaces;
}

void min_of_two() {
    int a = 33, b = 57;
    int m = (a < b) ? a : b;
    (void)m;
}

void small_factorial() {
    int result = 1;
    for (int i = 1; i <= 6; ++i) result *= i;
    (void)result;
}

void count_vowels() {
    std::string text = "prism bridge";
    int vowels = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        char ch = text[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels += 1;
    }
    (void)vowels;
}

extern "C" int eager_compass();
extern "C" void cedar_orbit();
extern "C" void hidden_spruce();
extern "C" void misty_hollow();

int main() {
    count_spaces();
    min_of_two();
    small_factorial();
    count_vowels();
    cedar_orbit();
    hidden_spruce();
    misty_hollow();
    return eager_compass();
}
