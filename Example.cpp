#include "SimpleLogger.h"

struct AAA
{
  float p = 123.2322;
  int r = 123;
  std::string s = "pepe";

  friend std::ostream& operator <<(std::ostream& os, const AAA& a) {
    os << a.p << " " <<a.r << " " << a.s;
    return os;
  }
};


int main() 
{
  AAA ppp;
  
  Logger::Init();
  
  Logger::Info("Hola", 123, "aaaa");
  Logger::Warn("Hola", 123, "aaaa");
  Logger::Error("Hola", 123, "aaaa");
  Logger::Error(ppp);
  
  std::cin.get();
}