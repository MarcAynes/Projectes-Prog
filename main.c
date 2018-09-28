int factorial (int n){
  int i;
  int res = 1;

  for (i = 1; i < n; n++){
    res = res * i;
  }
  return res;
}
