int factorial (int n){
  int i;
  int res = 0;

  for (i = 0; i < n; n++){
    res = res * i;
  }
  return res;
}
