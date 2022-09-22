#include "first_class.hpp"

class Log{
 public:
  const int log_level_error = 0;
  const int log_level_warning = 1;
  const int log_level_info = 2;
 private:
  int m_log_level = log_level_info; // m_ means member variable

 public:
  void set_level(int level){
    m_log_level = level;
  }

  void error(const char* message){
    if(m_log_level >= log_level_error)
      std::cout << "[ERROR]: " << message << std::endl;
  }

  void warn(const char* message){
    if(m_log_level >= log_level_warning)
      std::cout << "[WARNING]: " << message << std::endl;
  }

  void info(const char* message){
    if(m_log_level >= log_level_info)
      std::cout << "[INFO]: " << message << std::endl;
  }

};

void first_class_main() {
  Log log;
  log.set_level(log.log_level_error);
  log.warn("XD");
  log.error("XD");
  log.info("XD");
}