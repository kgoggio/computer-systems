#include <stdio.h>
#include <limits.h>

// Convert 0x9DC7B3F2 from hex to binary:10011101110001111011001111110010
// Convert 01110011 01011101 10110100 01101010 from binary to hex:735DB46A
// Convert 0x0000F3 from hex to decimal notation:243
// Convert 11100101  from binary to decimal notation:229

void hex2dec(const char *hex_num) {
  //pointer
    int decimalNum;
    int base = 1;
    int i = 0;
    int hex_size = 0;
    while(hex_num[hex_size]!= '\0') {
      hex_size += 1

    }
      
    for(i = hex_size- 1 ; i >= 0 ; --i){
        if(hex_num[i]>='0'&&hex_num[i]<='9'){
            decimalNum += (hex_num[i]-48)*base;
            base *= 16;
        }
        else{
            decimalNum += (hex_num[i] - 55)*base;
            base *=16;
        }
    }
    printf("%d\n",decimalNum);
}

void dec2hex(int num) {
    int num_count = 1;
    int num_count_quotient = num;
      
    while(num_count_quotient >=0) {
        if(num_count_quotient<10){
            break;
        } else {
            num_count_quotient /= 10;
            num_count += 1;
        }
    }
    long int remainderNum, quotient;
    int i=1; 
    int j, temp;
    char hexNum[num_count];
    quotient = num;
    if(num==0){
      hexNum = '0';
    }
  while (quotient !=0) {
      temp = quotient % 16;
      if (temp <10) {
          temp = temp + 48;
      }else {
          temp = temp +55;
      }
      hexNum[i++] = temp;
      quotient = quotient/16;

}
	for (j = i -1 ;j> 0;j--) {
	printf("%c",hexNum[j]);
	}
}


// test code; do not modify
int main() {
  char *hex_nums[] = {"0", "1", "BEEF", "ABCDEF98"};
  int dec_nums[] = {0, 1, 159, 987654321};
  int i;
  int x = 0x1F2E3D4C, b = 0xFF;

  printf("=== hex2dec ===\n");
  for (i = 0; i < sizeof(hex_nums)/sizeof(char *); i++)
  	hex2dec(hex_nums[i]);

  printf("=== dec2hex ===\n");
  for (i = 0; i < sizeof(dec_nums)/sizeof(int); i++)
  	dec2hex(dec_nums[i]);

  return 0;
}
