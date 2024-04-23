/* Client */
#include <ninjaipc.h>
#include <iostream>

using namespace NinjaIPC;

int main() {
    auto channel = Channel::connect("Readme", sizeof(int));
    while (true) {
        int i = 123;
        int r = channel->send(i);
        std::cout << "Sent " << i << " Received " << r << '\n';
    }
}
