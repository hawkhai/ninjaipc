/* Server */
#include <ninjaipc.h>

using namespace NinjaIPC;

int main() {
    auto channel = Channel::make("Readme", sizeof(int));
    while (true) {
        auto i = channel->receive<int>();
        int r = 321;
        channel->reply(r);
        std::cout << "Received " << i << " sent " << r << '\n';
    }
}