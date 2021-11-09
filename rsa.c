void asymEncrypt(double p, double q){
	double n, z, d, gcd, e, c, i;
	int j, temp;
	char m[50] = "LEAGUE";
	int k[50];
	
	n = p*q;
	z = (p-1)*(q-1);
	printf("n=%.0f z=%.0f\n", n, z);
	e = n-1;
	printf("e = %.0f\n", e);

	do{
		for(i=1; i<=e && i<= z; i++){
    			if(fmod(e, i) == 0 && fmod(z, i) == 0){
    				gcd = i;
			}
		}
		e = gcd + 1;
	}while(fmod(z, e) == 0);
	
	
	printf("e = %.0f\n", e);
	
	for(d=0; ; d++){
    		if(d!=z && (e*d)-1 != z){
        		if(fmod((e*d)-1, z) ==0){
            			break;
     			}
  		}
	}  
	
	printf("d = %.0f\n", d);
	
	printf("\nPublic Key is (%.0f, %.0f)\n", n, e);
	printf("Private Key is (%.0f, %.0f)\n", n, d);
	
	printf("\nm = ");
	for(j=0; m[j] != '\0'; j++){
		printf("%c", m[j]);
	}
	

	printf("\n\nThe encryption of m is: ", c);
	for(j = 0; (j < 50 && m[j] != '\0'); j++){
		m[j] = tolower(m[j]);
		temp = (int)(m[j])-96;
		k[j] = fmod(pow(temp,e), n);
		printf("%d ", k[j]);
	}

	printf("\nThe decryption of c is: ", m);
	for(j = 0; (j < 50 && m[j] != '\0'); j++){
		k[j] = ((int)fmod(pow(k[j]+96,d), n));
		printf("%c ", k[j]);
	}
	
}
