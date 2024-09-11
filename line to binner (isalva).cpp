#include<iostream>
using namespace std;

    
int main() {
    string line;
    int data[100];
    int jmlh=0;
    cout<<"Input a line convert to ascii: ";
    getline(cin, line);
    
    //convert to ascii line
    for(char c: line){
        //cout<<(int) c<<" ";
        if (isalpha(c)) {
            data[jmlh]=(int) c;
            jmlh++;
        }
    } cout<<endl;
    
    cout<<"total huruf\t\t: "<<jmlh<<endl;
    
    //rewrite ascii number
    cout<<"The Ascii is\t: ";
    for(int i=0; i<jmlh; i++){
        cout<<data[i]<<" ";
    } cout<<endl;
    
    //convert to binner
    cout<<"the binner of line:\n";
    for(int i=0; i<jmlh; i++){
        int binary[8] ;//= {0};
        int index=0;
    while(data[i]>0){
        binary[index]=data[i] % 2;
        data[i]/=2;
        index++;
    }
    for(int n=7; n>=0; n--){
        cout<<binary[n]<<"";
        }; cout<<" ";
    }
}
