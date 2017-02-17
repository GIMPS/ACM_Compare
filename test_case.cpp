#include <bits/stdc++.h>
using namespace std;
#define random(a,b) ((a)+rand()%((b)-(a)+1))

stringstream ss;

int main( int argc, char *argv[] )
{ 
    int seed=time(NULL);
    if(argc)
    {
        ss.clear();
        ss<<argv[1];
        ss>>seed;
    }
    srand(seed);


    //Generate test case below

    printf("1\n");
    int n=10;
    int m=random(1,20);
    printf("%d %d\n",n,m);
    for(int i=0 ; i<n ; ++i)
    {
        printf(" %d ",random(0,m));
    }
    printf("\n");
    return 0;
}