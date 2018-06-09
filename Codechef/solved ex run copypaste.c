    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>
    #define gc getchar_unlocked
    #define pc putchar_unlocked
    inline long long readInt(){
    long long n = 0, c = gc(), f = 1;
    while(c != '-' && (c < '0' || c > '9')) c = gc();
    if(c == '-') f = -1, c = gc();
    while(c >= '0' && c <= '9')
    n = (n<<3) + (n<<1) + c - '0', c = gc();
    return n * f;
    }

    inline void writeInt(long long a)
    {
    char snum[20];
    int i=0;
    do {
    snum[i++]=a%10+48;
    a=a/10;
    }while(a!=0);
    i=i-1;
    while(i>=0)
    pc(snum[i--]);
    pc('\n');
    }

    int main()
    {
    int n,count=0;
    int x1,y1,x2,y2,x3,y3,t,d1,d2,d3;
    n = readInt();
    while(n--)
    {
    x1 = readInt();
    y1 = readInt();
    x2 = readInt();
    y2 = readInt();
    x3 = readInt();
    y3 = readInt();
    d1 = pow(abs(x1-x2),2) + pow(abs(y1-y2),2);
    d2 = pow(abs(x3-x2),2) + pow(abs(y2-y3),2);
    d3 = pow(abs(x1-x3),2) + pow(abs(y1-y3),2);
    if(d1<d2)
    {
    t = d2;
    d2 = d1;
    d1 = t;
    }
    if(d1<d3)
    {
    t = d3;
    d3 = d1;
    d1 = t;
    }
    if( d1 == d2 + d3 )
    count++;
    }
    writeInt(count);
    return 0;
    }
