#ifndef MYAPP_ARAGMAN_H
#define MYAPP_ARAGMAN_H


#include <string>

class ARagMan
{
public:
bool angram(std::string ana, std::string gram);

private:
   std::string _ana = "silent";
   std::string _gram = "listen";
};


#endif //MYAPP_ARAGMAN_H
