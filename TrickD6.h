//
// Created by JAD on 27/10/2025.
//

#ifndef UNTITLED2__TRICKD6_H_
#define UNTITLED2__TRICKD6_H_
#include <algorithm>
#include "D6.h"
class TrickD6 : public D6 {
 public:
  TrickD6() : D6() {}

  ~TrickD6() = default;

  [[nodiscard]] int roll() const override;
};

#endif //UNTITLED2__TRICKD6_H_
