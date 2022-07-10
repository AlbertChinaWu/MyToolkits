#pragma once

#include <string>

#include "COperator.h"

class CSimpleFactory {
 public:
  static COperator *CreateOperator(std::string &strOpSign);
};
