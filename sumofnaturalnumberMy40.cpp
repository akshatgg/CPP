 #include<iostream>
 using namespace std;
 int main()
 {
    int i=1 ,j=0;
    
    while(i<10)
    {
        j=j+i;
        cout<<j-i<<"+"<<i<<"="<<j<<endl;
           
        i++;
    }
    return 0;
}