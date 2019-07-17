#include <sstream>
#include <map>
#include "ARagMan.h"

bool ARagMan::angram(std::string ana, std::string gram)
{
    std::map<int, char> anaMap;
    std::map<int, char> gramMap;
    for (int i = 0; i < sizeof(ana); ++i) {
        anaMap.insert(i, ana[i])
    }
}