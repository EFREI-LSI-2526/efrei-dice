//
// Created by JAD on 14/10/2025.
//

#ifndef UNTITLED2__DICE_H_
#define UNTITLED2__DICE_H_

class Dice {
 private:
  int nbSides;
 public:
  Dice();
  explicit Dice(int nbSides);
  Dice(const Dice &other);
  ~Dice() = default;
  [[nodiscard]] int roll() const;
  [[nodiscard]] int roll(int nbRolls) const;
  [[nodiscard]] int getNbSides() const;
};

#endif //UNTITLED2__DICE_H_
