unsigned long long f( unsigned x, unsigned y, unsigned z ) {
  const auto X{ x + 1ull }, Y{ y + 1ull }, Z{ z + 1ull };
  return x * Y * Z + X * y * Z + X * Y * z;
}
