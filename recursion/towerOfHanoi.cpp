#include<iostream>
#include<string>
using namespace std;
void towerOfHanoi(int blk, string src, string helper, string dest){
    if(blk==0){
        return;
    }
    towerOfHanoi(blk-1, src, dest, helper);
    cout<<"Move From "<< src << " to "<<dest<<endl;
    towerOfHanoi(blk-1, helper, src, dest);
}
int main(){
    towerOfHanoi(4,"A","B","C");
    return 0;

}