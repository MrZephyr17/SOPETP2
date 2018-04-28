#ifndef _UTILS_H
#define _UTILS_H

#include <string>
#include <vector>

std::vector<std::string> splitList(const std::string &list);

int invalidArguments();

bool isNumber(const std::string &str);

std::string getCode(int motive);

#endif /* _UTILS_H_ */
