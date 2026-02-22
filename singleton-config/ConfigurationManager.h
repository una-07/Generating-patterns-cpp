#pragma once
#include <string>
#include <map>
#include <mutex>

class ConfigurationManager {
private:
    static ConfigurationManager* instance;
    static std::mutex mtx;

    std::map<std::string, std::string> settings;

    ConfigurationManager();

public:
    static ConfigurationManager* GetInstance();

    void Set(const std::string& key, const std::string& value);
    std::string Get(const std::string& key);

    void LoadFromFile(const std::string& filename);
    void SaveToFile(const std::string& filename);
};

