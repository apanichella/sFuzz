#include <iostream>
#include "Common.h"

using namespace dev;
using namespace eth;
using namespace std;

namespace fuzzer {
  class ExceptionDisorder : public Oracle {
    u256 numDisorder = 0;
    public:
      bool analyze(CallLog callLog);
  };
}