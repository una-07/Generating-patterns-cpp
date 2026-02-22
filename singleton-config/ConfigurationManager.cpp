#include "ConfigurationManager.h"
#include <fstream>
#include <stdexcept>

ConfigurationManager* ConfigurationManager::instance = nullptr;
std::mutex ConfigurationManager::mtx;

ConfigurationManager::ConfigurationManager() {}

ConfigurationManager* ConfigurationManager::GetInstance() {
    std::lock_guard<std::mutex> lock(mtx);
    if (!instance) {
        instance = new ConfigurationManager();
    }
    return instance;
}

void ConfigurationManager::Set(const std::string& key, const std::string& value) {
    settings[key] = value;
}

std::string ConfigurationManager::Get(const std::string& key) {
    if (settings.find(key) == settings.end()) {
        throw std::runtime_error("Setting not found");
    }
    return settings[key];
}

void ConfigurationManager::LoadFromFile(const std::string& filename) {
    std::ifstream file(filename);
    std::string key, value;
    while (file >> key >> value) {
        settings[key] = value;
    }
}

void ConfigurationManager::SaveToFile(const std::string& filename) {
    std::ofstream file(filename);
    for (auto& pair : settings) {
        file << pair.first << " " << pair.second << std::endl;
    }
}
