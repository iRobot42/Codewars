class Person {
  const int age;
public:
  Person( int a ) : age( a ) {}
  bool operator == ( const Person& that ) const { return *this >= that && that >= *this; }
  bool operator != ( const Person& that ) const { return !( *this == that ); }
  bool operator <= ( const Person& that ) const { return *this < that || *this == that; }
  bool operator >= ( const Person& that ) const { return !( *this < that ); }
  bool operator <  ( const Person& that ) const { return age < that.age; }
  bool operator >  ( const Person& that ) const { return !( *this <= that ); }
};
