#include "auto_kw_in_cpp.hpp"
#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>



class Device{};

class DeviceManager{
 private:
  std::unordered_map<std::string, std::vector<Device*>> m_Devices;
 public:
  const std::unordered_map<std::string, std::vector<Device*>>& GetDevices() const {
    return m_Devices;
  }
};


void auto_kw_in_cpp_main() {
  std::vector<std::string> strings;
  strings.emplace_back("Apple");
  strings.emplace_back("Orange");

  for (std::vector<std::string>::iterator item = strings.begin(); item != strings.end(); item++) {
    std::cout << *item << std::endl;
  }

  for (auto item = strings.begin(); item != strings.end(); item++) {
    std::cout << *item << std::endl;
  }

  DeviceManager dm;
  const std::unordered_map<std::string, std::vector<Device*>>& devices = dm.GetDevices();

  using DeviceMap = std::unordered_map<std::string, std::vector<Device*>>;
  typedef std::unordered_map<std::string, std::vector<Device*>> DeviceMap;
  const DeviceMap& d2 = dm.GetDevices();
  const auto& d3 = dm.GetDevices();

}