char getGrade( int a, int b, int c ) {
  const int g{ ( a + b + c ) / 3 };
  return g < 60 ? 'F' : g < 70 ? 'D' : g < 80 ? 'C' : g < 90 ? 'B' : 'A';
}
