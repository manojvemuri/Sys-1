#include <stdio.h>
#include <limits.h>

void set_bits(int value, int pos, int n) 
{
  int x= value;
  for(int i = pos ; i < pos + n ; i++)
  {
    x = (1 << i) | x;
  }
  printf("0x%X\n",x);
}

void reset_bits(int value, int pos, int n)
 {
  int x = 1, i;
  for(i = 0; i < n; i++){
    value = value & ~(x << (pos + i)); 
  }
  printf("\n0x%x", value);
}

void extract_bits(int value, int pos, int n) 
{
  int x=0;
  while(x!=pos)
    {
      value=value>>1;
      x++;
    }
  int number=0,pow_of_2=1;
  while(n!=0)
    {
      int m=value%2;
      number+=m*pow_of_2;
      n--;
      pow_of_2*=2;
      value=value>>1;
    }
  printf("\n0x%x",number);    
}

void count_bits(int value) {
  int count = 0; 
  while (value) { 
    count += value & 1; 
    value>>=1;
    } 
  printf("\n%d",count); 
}

/* test code; do not modify */
int main() {
  int i;
  int value = 0xA1B2C3D4;

  for (i = 1; i < 32; i+=8)
  	set_bits(value, i, 4);
  for (i = 31; i >= 0; i-=8)
  	reset_bits(value, i, 4);
  for (i = 0; i < 32; i+=8)
	extract_bits(value, i, 4);
  for (i = 0; i < 8; i++)
	count_bits(i);
  return 0;
}
