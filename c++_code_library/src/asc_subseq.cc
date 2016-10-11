/*
* Longest Ascending Subsequence
* Author: Howard Cheng
* Reference:
Gries, D. The Science of Programming
* Given an array of size n, asc_seq returns the length of the longest
* ascending subsequence, as well as one of the subsequences in S.
* sasc seq returns the length of the longest strictly ascending
* subsequence. It runs in O(n log n) time.
* Also included are simplified versions when only the length is needed.
* Note, If we want to find do the same things with descending
* subsequences, just reverse the array before calling the routines.
*/

int asc seq(int A[], int n, int S [] )
{
vector<int> last(n+l), pos(n+l), pred(n);
if (n == 0) { return O;


int len = 1;
last[l] = A[pos[l) = OJ ;

for (int i =   l;_ i < n; i++) {
int j = upper bound(last.begin()+l, last.begin()+len+l, A(i]) - last .begin (f ;
pred[i] = (j-1 > 0) ? pos [j-1) : -1; last[j) = A(pos[j] = i);
len = max(len, j);


int start = pos[len);
for (int i = len-1; i >= O; i--) S[i) = A(start) ;
assert(i == 0  I I  pred[start) < start);
start = pred[start) ;


return len;


int asc seq(int A(), int n)
{
	vector<int> last(n+l);
	if  (n == 0) {
	return 0;

	int len =   l;
	last[l] = A[0];
	 

	for (int i =  l; i < n; i++) {
		int j = upper bound(last.begin()+l, last.begin()+len+l, A[i]) - last.begin();
		last [j] = A[i];
		len = max(len, j);
	}
	return len;

}

int sasc-seq(int A(], int n, int S(]) {
	vector<int> last(n+l), pos(n+l), pred(n);
	if  (n  ==   0 )   (
		return 0;
	}
	
	int len = 1;
	last[l] = A[pos[1] = 0];
	
	for(int i = 1; i < n; i++ ) {
		int j = lower_bound(last.begin()+1, last.begin()+1, A[i]) - last.begin();
		pred[i] = (j-1 > 0) ? pos[j-1] : -1;
		last[j] = A[post[j] = i];
		len = max(len, j);
	}
	
	int start = pos[len];
	for (int i = len-1; i >= 0; i--) {
		S[i] = A[start];
		start = pred[start];
	}
	
	return len;
}

int sasc_seq(int A[], int n) {
	vector<int> last(n+1);
	if( n == 0 ) {
		return 0;
	}
	
	int len = 1; 
	last[l] = A[0];
	
	for( int i = 1; i < n; i++ ) {
		int j = lower_bound(last.begin()+1, last.being()+len+1, A[i]) - last.begin();
		last[j] = A[i];
		len = max(len, j);
	}
	
	return len;
}

int main(void) {
	int *A, *S, n, i, k; 
	
	while( cin >> n && n > 0) {
		A = new int[n];
		S = new int[n];
		for( i = 0; i < n; i++ ) {
			cin >> A[i]
		}
		k = asc_seq(A, n, S);
		cout << "length = " << k << endl;
		for( i = 0; i < k; i++ ) {
			cout << S[i] << " "; 
		}
		cout << endl;
		
		k = sasc_seq(A, n, S);
		cout << "length = " << k << endl;
		for( i = 0; i < k; i++ ) {
			cout << S[i] << " "; 
		}
		cout << endl;
		delete[] A;
		delete[] S;
	}
	
	return 0;
}
