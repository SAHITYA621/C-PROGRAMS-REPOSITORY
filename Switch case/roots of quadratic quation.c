#include<stdio.h>

float main(){
	
	float a,b,c,discriminant,r1,r2,imaginary;
	
	printf("ENTER THE VALUES OF a,b,c\n  ax^2+bx+c\n= a = b= c=");
	scanf("%f" ,&a,&b,&c);
	
	discriminant= b*b-4*a*c;
	
	switch(discriminant>0){
		
		case 1:
			
			r1=(-b+sqrt(discriminant))/2*a;
			r2=(-b+sqrt(discriminant))/2*a;
			
			printf("TWO DISTINCT AND REAL ROOTS EXISTS:%2.f and %2.f" ,r1,r2);
			
			break;
			
		case 0:
		
		switch(discriminant<0){
			
			r1=r2=-b/(2*a);
			imaginary= sqrt(-discriminant)/(2*a);
			
			printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", 
                            r1, imaginary, r2, imaginary);
                            
                break;
                
                r1 = r2 = -b / (2 * a);

                    printf("Two equal and real roots exists: %.2f and %.2f", r1, r2);
                    
                    break;

		} 
	}
	
	return 0;
}

