std::string how_much_i_love_you( int nb_petals ) {
  switch ( nb_petals % 6 ) {
    case 1: return "I love you";
    case 2: return "a little";
    case 3: return "a lot";
    case 4: return "passionately";
    case 5: return "madly";
    default: return "not at all";
  }
}
