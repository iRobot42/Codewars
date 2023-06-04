std::vector<int> humanYearsCatYearsDogYears( int h ) {
  return { h, h == 1 ? 15 : 4 * h + 16, h == 1 ? 15 : 5 * h + 14 };
}
