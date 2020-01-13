# include <stdio.h>
# include <assert.h>

# define MAX_LUNG 2500

typedef struct {
	int nbit;
	int bit[MAX_LUNG];
}numero;

numero zero;

int p2[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0,1,1,1};

int q2[] = {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,1};

int e2[] = {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1};

int d2[] = {1,0,1,1,1,0,1,0,0,0,0,0,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,0,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,0,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,0,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,0,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,0,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,0,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,0,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,0,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,0,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,0,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,0,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,0,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,0,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,0,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,0,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0,1,1,1,1,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,1,1,1,1,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,1,1,1,1,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,1,1,1,1,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,1,1,1,1,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,1,1,1,1,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,1,1,1,1,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,1,1,1,1,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,1,1,1,1,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,1,1,1,1,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,1,1,1,1,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,1,1,1,1,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,1,1,1,1,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,1,1,1,1,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,1,1,1,1,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,1,1,1,1,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,1,1,0,1,0,0,1,0,1,1,1,1,0,0,1};

numero binario(int x) { /* trasformazione di un numero intero in binario, gia' convertito */
	numero n = zero;
	int i=0;
	if (x == 0) {
		n.nbit = 1;
		return n;
	}
	while(x) {
		n.bit[i]=x%2;
		x=x/2;
		i++;
	}
	n.nbit=i;
	return n;
}

int decimale(numero x) { /* da numero gia' convertito, restituisce intero decimale corrispondente */
	int c=0, due=1;
	int i, j;
	for (i=0; i<x.nbit; i++) {
		if(x.bit[i]) {
			for (j=0; j<i; j++) { /* potenza di 2 */
				due = due * 2;
			}
			c = c + due;
			due = 1;
		}
	}
	printf ("%d", c);
	return c;
}

numero conv(numero p) { /* conversione del vettore del numero */
	int i;
	numero n = zero;
	n.nbit = p.nbit;
	for (i=0; i<n.nbit; i++) {
		n.bit[i] = p.bit[n.nbit - 1 - i];
	}
	return n;
} 

int max(numero p, numero q) {
	if (p.nbit <= q.nbit) return q.nbit;
	return p.nbit;
}

int min(numero p, numero q) {
	if (p.nbit >= q.nbit) return q.nbit;
	return p.nbit;
}

numero somma(numero p, numero q){
	int i;
	numero z = zero;
	int rip = 0;
	for (i=0; i<max(p, q); i++) {
		z.bit[i] = (q.bit[i] + p.bit[i] + rip)%2;
		if ((q.bit[i] + p.bit[i] + rip)/2 == 1) rip=1;
		else rip = 0;
	}
	z.bit[max(p,q)]=rip;
	z.nbit = max(p,q)+rip;
	return z;
}

numero sottrazione(numero p, numero q){ /* p e' il + big, non controlla qual e' il maggiore */
	int i, j, m;
	numero s = zero;
	for (i=0; i<p.nbit; i++){
		if(p.bit[i] >= q.bit[i]) s.bit[i] = p.bit[i] - q.bit[i];
		else {
			for (j=i; j<p.nbit; j++) { /* riporto x sottrazione */
				if (p.bit[j] == 1) {
					p.bit[j] = 0;
					for (m=j-1; m>i; m--){
						p.bit[m] = 1;
					}
				break;
				}
			}
			s.bit[i] = 1;
		}
	}
	for (i=p.nbit; i>=0; i--){
		if (s.bit[i] == 1) {
			s.nbit = i+1; 
			break;
		}
	}
	if (s.nbit == 0) s.nbit = 1;
	return s;
}

numero supplemento(int i, numero q) { /* spostamento di i-cifre nel vettore (aggiunta zeri) */
	int j;
	numero x = zero;
	if ((q.nbit == 1) && (q.bit[0] == 0)) {
		return q;
	}
	for (j=0; j<=q.nbit; j++) {
		x.bit[q.nbit - j + i] = q.bit[q.nbit - j];
	}
	for (j=0; j<i; j++) {
		x.bit[j] = 0;
	}
	x.nbit=q.nbit+i;
	/* for (i=0; i<x.nbit; i++) {
		printf("%d", x.bit[i]);
	}
	printf("\n");
	printf("%d\n", x.nbit); */  /* stampa di controllo */
	return x; /* e' sempre al contrario!!! */
}

numero piugrande(numero p, numero q){
	int i;
	if (p.nbit < q.nbit) return q;
	if (p.nbit > q.nbit) return p;
	else {
		for (i=p.nbit-1; i>=0; i--) {
			if (p.bit[i] < q.bit[i]) return q;
			if (p.bit[i] > q.bit[i]) return p;
		}
	return p;
	}
}

int escamotage(numero p, numero q){ 
	if(p.nbit!=q.nbit) return 0;
	else {
		int i;
		for(i=0; i<p.nbit; i++) {
			if(p.bit[i]!=q.bit[i]) return 0;
		}
	return 1;
	} /* restituisce 1 se sono uguali, 0 se sono diversi */
}

numero modulo(numero p, numero q){ /* p e' la classe di resti, q e' il modulo! */
	numero t = zero;
	t.nbit = 1;
	if (escamotage (p,q)) return t;
	if (escamotage(piugrande(p,q), q)) return p; /* controllo se sono ==, oppure se sono diversi */ 
	else {
		while (escamotage(piugrande(p,q), p)) {
			t = supplemento(max(p,q) - min(p,q), q);
			if (escamotage(piugrande(p,t), t) && escamotage(p,t)==0) {
				t = supplemento(max(p,q) - min(p,q) - 1, q);
			}
			p = sottrazione(p,t);
		}
		return p;
	}
}

numero prodotto (numero q, numero p) { /* prodotto di q*p = controllo p e sposto q (funzione supplemento) */
	int i;
	numero c = zero;
	c.nbit = 1;
	for (i=0; i<p.nbit; i++) {
		numero r = zero;
		r.nbit = 1;
		if (p.bit[i] == 1) {
			r = supplemento(i, q) ;
			c = somma(c, r);
		}
	}
	return c;
}

numero potenza (numero x, numero exp, numero pq) { /* base = x, exp = esponente, pq = modulo */
	int i;
	numero u = zero; 
	u.nbit = 1;
	u.bit[0] = 1;
	if (exp.bit[0]) u = x;
	for (i=1; i<exp.nbit; i++) {
		x = prodotto(x, x);
		x = modulo(x, pq);
		if (exp.bit[i]) {
			u = prodotto(u, x);
			u = modulo(u, pq);
		}
	}
	return modulo(u, pq);
}

/* numero potenza(numero x, numero exp, numero pq){
	int i;
	numero p = zero;
	p.bit[0]=1;
	p.nbit=1;
	for(i=0; i<exp.nbit; i++) {
		if (exp.bit[i]==1) {
			p=prodotto(p,x);
			p=modulo(p,pq);
		}
		if (i!=exp.nbit-1) {
			x=prodotto(x,x);
			x=modulo(x,pq);
		}
	}
	for (i=0; i<p.nbit; i++) {
		printf("%d", p.bit[i]);
	}
	printf("\n");
	return modulo(p, pq);
}*/


int main () {
	int i;
	numero p = zero;
	p.nbit = 512; 
	for(i=0; i<p.nbit; i++) {
		p.bit[i]=p2[i];
	}
	p=conv(p);
	
	numero q = zero;
	q.nbit = 513;
	for(i=0; i<q.nbit; i++) {
		q.bit[i]=q2[i];
	}
	q=conv(q);
	
	numero pq=prodotto(p,q);
	
	numero e = zero;
	e.nbit = 17;
	for(i=0; i<e.nbit; i++) {
		e.bit[i]=e2[i];
	}
	e=conv(e);
	
	numero d = zero;
	d.nbit = 1021;
	for(i=0; i<d.nbit; i++) {
		d.bit[i]=d2[i];
	}
	d=conv(d);
	
	int r = 6;
	numero x = binario(r);
	
	numero cifr = potenza(x,e,pq);
	
	for (i=0; i<cifr.nbit; i++) {
		printf("%d", cifr.bit[i]); }
	printf("\n\n");
	
	numero decifr = potenza(cifr,d,pq);
	
	for (i=0; i<decifr.nbit; i++) {
		printf("%d", decifr.bit[i]);}
	printf("\n\n");
	
	int y=decimale(decifr);
	printf("%d\n\n", y);
	return 0;
}

/*int main() {
	numero n = zero, m = zero, z= zero, d = zero;
	int i, x=0, y=1, t=5;
	n = binario(x);
	for (i=0; i<n.nbit; i++) {
		printf("%d", n.bit[i]);
	}
	printf("\n");
	m = binario(y);
	for (i=0; i<m.nbit; i++) {
		printf("%d", m.bit[i]);
	}
	printf("\n");
	
	z = binario(t);
	for (i=0; i<z.nbit; i++) {
		printf("%d", z.bit[i]);
	}
	printf("\n");
	
	d = potenza(n,m,z);
	for (i=0; i<d.nbit; i++) {
		printf("%d", d.bit[i]);
	}
	printf("\n");
	printf("%d\n", d.nbit);
	return 0;
	
}*/

