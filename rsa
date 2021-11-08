void asymEncrypt(double p, double q){
	double n, z, d, gcd, e, c, encrypt, decrypt, i, m = 5;
	
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
	
	for(d=0; fmod((e*d)-1, z) != 0; d++){}
	
	printf("d = %.0f\n", d);
	
	printf("\nPublic Key is (%.0f, %.0f)\n", n, e);
	printf("Private Key is (%.0f, %.0f)\n", n, d);
	
	printf("\nm = %.0f\n", m);
	c = fmod(pow(m,e), n);
	printf("The encryption of m is c = %.0f\n", c);
	
	printf("\nc = %.0f\n", c);
	m = fmod(pow(c,d), n);
	printf("The decryption of c is m = %.0f\n", m);
	
}
