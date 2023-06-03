bool PythagoreanTriple( const int a, const int b, const int c ) {
   return a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b;
}
