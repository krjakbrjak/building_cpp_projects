#include <climits>
#include <limits>

int main(int argc, char **argv) {
    static_assert(INT_MAX == std::numeric_limits<int>::max(), "What is going on?!");
    return 0;
}