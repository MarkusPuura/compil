extern int printd( int ix,int k );
int k;
int main()  {
  int i,j, k;
  i = 45000;
  j = -123;
  printd(i+j);
  printd(45000+j, k);
  printd(i+123);
  printd(45000+123);
  printd(i+(j+0));
  printd((i+0)+j);
  printd((i+0)+(j+0));
  printd((i+0)+123);
  printd(45000+(j+0));
  return 0;
}
