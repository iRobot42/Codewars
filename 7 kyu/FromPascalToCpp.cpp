#define begin
#define end
#define repeat   do{
#define until(x) }while(!(x))
int fromPascalToCpp( int Sum, int finish, int start ) {
  begin
    repeat
      Sum = Sum + start;
      start = start + 1;
    until(start>=finish);
  end;
  return Sum;
}
