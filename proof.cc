/*
 * The 16th Amendment was ratified in 1913
 */

#include <stdio.h>
#include <unistd.h>

int main(){
	int currentDate = 1913;
	// no amendment which may be made prior to the year 1808 shall affect in any way clause 4 and 1
	bool amendment = true; 
	// negative - no amendment
	bool negative = false;
	//positive - which may be made prior to the year 1808
	bool positive = true;
	//negative - shall affect in any way clause 4 and 1
	bool negative_2 = false;
	
	// is date prior to 1808? 
	if(currentDate < 1808){
		positive = true;
	}else{
		positive = false;
	}
	if(negative == false && positive == true && negative_2 == false){
		printf("You may make the amendment\n");
	}else{
		printf("NO AMENDMENT FOR YOU!\n");
	}
	return 0;
}
