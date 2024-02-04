std::string declareWinner( Fighter* fighter1, Fighter* fighter2, std::string firstAttacker ) {
  const auto turns1{ 1. * fighter1->getHealth() / fighter2->getDamagePerAttack() };
  const auto turns2{ 1. * fighter2->getHealth() / fighter1->getDamagePerAttack() };
  return turns1 > turns2 ? fighter1->getName()
       : turns2 > turns1 ? fighter2->getName()
       : firstAttacker;
}
