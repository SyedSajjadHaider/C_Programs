#include<math.h>
#include<stdio.h>
int main(){

 prime_test_sqrt(99999991);

// prime_test_half(99999991);
}


//-------------------------------------------
prime_test_half(int num){
    printf("Half Trick Function \n");
	int tnum=0;
	tnum = num / 2;
	int count = 0;

	for(int i=1; i <= tnum; i++){
        printf("count_half\n");
		if( !(num%i) ){
			count = count + 1;
		}
	}
	if(count == 1){
	//	return 1;
		printf("prime");
	}else{
	//	return 0;
		printf("composite");
	}
}
//-----------------------------------------
prime_test_sqrt(int num){
    printf("sqrt Trick Function \n");
	int tnum=0;
	tnum = sqrt(num);
	int count = 0;

	for(int i=1; i <= tnum; i++){
        printf("count_sqrt\n");
		if( !(num%i) ){
			count = count + 1;
		}
	}
	if(count == 1){
	//	return 1;
		printf("prime");
	}else{
	//	return 0;
		printf("composite");
	}

}

