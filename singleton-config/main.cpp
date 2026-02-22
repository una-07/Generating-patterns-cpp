#include "ConfigurationManager.h"
#include <iostream>
#include <thread>

void Test() {
    auto* config = ConfigurationManager::GetInstance();
    config->Set("theme", "dark");
    std::cout << config->Get("theme") << std::endl;
}

int main() {
    std::thread t1(Test);
    std::thread t2(Test);

    t1.join();
    t2.join();

    return 0;
}
