#include <stdio.h>
#include <limits.h>
#include <string.h>
void sum()
{
  int data[] = { 12, 14, 16, 18, 20, 22 };
  size_t data_len = sizeof (data) / sizeof(data[0]);
  int sum=0,i;
  for(i=0;i<data_len;i++)
    {
      printf("\n %d \n",data[i]);
      sum=sum+data[i];
    }
  
  printf("sum :  %d\n",sum); 
}

void product() 
{
  int data[] = { 11, 13, 15, 17, 19, 21 };
  size_t data_len = sizeof (data) / sizeof(data[0]);
  int product=1,i;
  for(i=0;i<data_len;i++)
    {
      printf("\n %d \n",data[i]);
      product=product*data[i];
    }
  printf("product :  %d\n",product);
}

void bin2dec(const char *bin_num) 
{
  int i = 0, num = 0;
  while (bin_num[i]) 
  {
    num *= 2;
    num += bin_num[i] - '0';
    i++;
  }
  printf("\n%d\n",num);
}

void dec2bin(int num) {
  int a[680],i=0;
  printf("\nBinary of %d is=",num);
  if (num==0)
    {
      printf("0");
    }
  for(i=0;num>0;i++)
    {    
	a[i]=num%2;    
	num=num/2;    
    }       
  for(i=i-1;i>=0;i--)    
    {    
      printf("%d",a[i]);    
    }    
}

void hex2dec(const char *hex_num) 
{
  int len=strlen(hex_num);
  int n = 0;
  for(int i=0;i<len;i++)
  {
    char c = hex_num[i];
    if(c>='0' && c<='9')
    {
      n = 16*n + (c-48);
    }
    else
    {
      n = 16*n + (c-55);
    }
  }
  printf("\nDecimal of %s is= %d \n",hex_num,n);
}

void dec2hex(int num) 
{
  char hdnum[100];
  int i = 1,j,temp;
  printf("\nEquivalent hexadecimal value of decimal number %d: ",num); 
  if (num==0)
    {
      printf("0");
    }

  while(num!=0) 
    {     
      temp = num % 16;
      if(temp < 10) 
        { 
	  hdnum[i] = temp + 48; 
	  i++; 
        } 
      else
        { 
	  hdnum[i] = temp + 55; 
	  i++; 
        } 
          
      num = num/16;
    }
  for(int j=i-1; j>0; j--)
    {
      printf("%c",hdnum[j]); 
    }
}


// test code; do not modify
int main() {
  char *bin_nums[] = {"0", "10010110", "10111011001001"};
  char *hex_nums[] = {"F", "9AC", "F35E8"};
  int dec_nums[] = {0, 1, 77, 159, 65530, 987654321};
  int i;

  sum();

  product();

  for (i = 0; i < sizeof(bin_nums)/sizeof(char *); i++)
  	bin2dec(bin_nums[i]);

  for (i = 0; i < sizeof(dec_nums)/sizeof(int); i++)
  	dec2bin(dec_nums[i]);

  for (i = 0; i < sizeof(hex_nums)/sizeof(char *); i++)
  	hex2dec(hex_nums[i]);

  for (i = 0; i < sizeof(dec_nums)/sizeof(int); i++)
  	dec2hex(dec_nums[i]);

  return 0;
}
