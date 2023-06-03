int basicOp( char op, int val1, int val2 ) {
  return op == '+' ? val1 + val2
       : op == '-' ? val1 - val2
       : op == '*' ? val1 * val2
       : op == '/' ? val2 ? val1 / val2 : 0 : 0;
}
