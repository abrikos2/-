//Грудзинский Даниил Иннокетьевич РПО 24/2 
#include <iostream>
#include <cmath>
using namespace std;

#define task_20

#ifdef task_1
int main(){
    double a,b;
    cin >> a >> b;
    cout << a*b << endl;
    cout << 2*(a+b) << endl; 
    return 0;
}
#endif 

#ifdef task_2
int main(){
    double a,b,c;
    cin >> a >> b >> c;
    cout << a * b * c << endl;
    cout << 2 * (a*b + b*c + a*c) << endl;
    return 0;
}
#endif 

#ifdef task_3
int main(){
    double a,b;
    cin >> a >> b;
    cout << a*a + b*b << endl;
    cout << a*a - b*b << endl;
    cout << (a*a) * (b*b) << endl;
    cout << (a*a) / (b*b) << endl;
    return 0;
}
#endif 

#ifdef task_4
int main(){
    double  a,b;
    cin >> a >> b;
    cout << abs(a) + abs(b) << endl;
    cout << abs(a) - abs(b) << endl;
    cout << abs(a * b) << endl;
    cout << abs(a / b) << endl;
    return 0;
}
#endif 

#ifdef task_5
int main(){
    double a,b;
    cin >> a >> b;
    cout << sqrt((a*a) + (b*b)) << endl;
    cout << a + b + sqrt((a*a) + (b*b)) << endl;
    return 0;
}
#endif 

#ifdef task_6
int main(){
    double x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << sqrt(pow(x2-x1,2) + pow(y2-y1,2)) << endl;
    return 0;
}
#endif 

#ifdef task_7
int main(){
    double x1,x2,x3,y1,y2,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    double b = sqrt(pow(x3-x2,2) + pow(y3-y2,2));
    double c = sqrt(pow(x1-x3,2) + pow(y1-y3,2));
    double p = (a+b+c)/2;
    cout << a+b+c << endl;
    cout << sqrt(p*(p-a)*(p-b)*(p-c)) << endl;
    return 0;
}
#endif 

#ifdef task_8
int main(){
    int F;
    cin >> F;
    cout << (F-32) * (5/9) << endl;
    return 0;
}
#endif 

#ifdef task_9
int main(){
    int X,A,Y,B;
    cin >> X >> A >> Y >> B;
    cout << A / X << endl;
    cout << (A/X) / (B/Y) << endl;
    return 0;
}
#endif 

#ifdef task_10
int main(){
    int A,B;
    cin >> A >> B;
    cout << A / B;
    return 0;
}
#endif 

#ifdef task_11
int main(){
    int n;
    cin >> n;
    cout << (n/100) + ((n/10)%10) + (n%10) << endl;
    cout << (n/100) * ((n/10)%10) * (n%10) << endl;
    return 0;
}
#endif 

#ifdef task_12
int main(){
    int n;
    cin >> n;
    cout << (n/100) % 10 << endl;
    return 0;
}
#endif 

#ifdef task_13
int main(){
    int N;
    cin >> N;
    cout << N / 86400 << endl;
    return 0;
}
#endif 

#ifdef task_14
int main(){
    int K;
    cin >> K;
    cout << (K-1) % 7 << endl;
    return 0;
}
#endif 

#ifdef task_15
int main(){
    int A,B;
    cin >> A >> B;
    cout << ((A%2 == 1) && (B%2 == 1)) << endl;
    return 0;
}
#endif 

#ifdef task_16
int main(){
    int A,B;
    cin >> A >> B;
    cout << (A%2 == B%2) << endl;
    return 0;
}
#endif 

#ifdef task_17
int main(){
    int A,B,C;
    cin >> A >> B >> C;
    cout << ((A>0) + (B>0) + (C>0) == 2) << endl;
    return 0;
}
#endif 

#ifdef task_18
int main(){
    int A,B,C;
    cin >> A >> B >> C;
    cout << (A == -B || A == -C || B == -C) << endl;
    return 0;
}
#endif 

#ifdef task_19
int main(){
    int n;
    cin >> n;
    cout << (((n/100) < (n/10%10)) && ((n/10%10) < (n%10))) << endl;  
    return 0;
}
#endif 

#ifdef task_20
int main(){
    double x,y;
    cin >> x >> y;
    cout << (x<0) << endl;
    return 0;
}
#endif 