#include "first_class.hpp"

class Log{
 public:
  enum Level {
    LevelError = 0, LevelWarning, LevelInfo,
  };
 private:
  Level m_log_level = LevelInfo; // m_ means member variable

 public:
  void set_level(Level level){
    m_log_level = level;
  }

  void error(const char* message){
    if(m_log_level >= LevelError)
      std::cout << "[ERROR]: " << message << std::endl;
  }

  void warn(const char* message){
    if(m_log_level >= LevelWarning)
      std::cout << "[WARNING]: " << message << std::endl;
  }

  void info(const char* message){
    if(m_log_level >= LevelInfo)
      std::cout << "[INFO]: " << message << std::endl;
  }

};

void first_class_main() {
  Log log;
  log.set_level(Log::LevelError);
  log.warn("XD");
  log.error("XD");
  log.info("XD");
}