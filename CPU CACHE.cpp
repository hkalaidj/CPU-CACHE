#include <iostream>
#include <deque>
#include<windows.h>
using namespace std;
int choice;
int count=0;
int main()
{
    system("Color B0");

    int i;

    cout<< "******TO EXIT THE PROGRAM ENTER 555*****"<<endl;
    cout<< "INITIAL ARRAY HAS THESE INTEGERS 32 34 56 88 102 110 145 240 "<<endl;
    //cout <<"INPUT AN INTEGER BETWEEN 0 AND 255 : " ;
    int cmem[8]={32,34,56,88,102,110,145,240};
deque <int> memdeque;
for(int H=0;H<8;H++){

memdeque.push_back(cmem[H]);

}
    do{
            cout<<""<<endl;
    cout <<"INPUT AN INTEGER BETWEEN 0 AND 255 : " ;
cin >>i;
if (i>=0 && i<256 ){
        cout<<""<<endl;
 cout<<"THE INDEX FOR THE NEW ELEMENT IS:"<<i%8<<endl;


if(i==memdeque[i%8]){
    cout<<"IT IS A HIT"<<endl;

}

else if(i!=memdeque[i%8]){

    cout<<"IT IS A MISS "<<endl;
 memdeque.erase(memdeque.begin( ) + (i%8));

    //fix here
deque<int>::iterator itr=memdeque.begin();
    ++itr;
    memdeque.insert(memdeque.begin( ) + (i%8),i);
count++;

}

cout<<"NUMBER OF CACHE MISSES= "<<count<<endl;
cout<<"THE NEW CONTENTS OF THE CACHE IS : ";
std::deque<int>::iterator it = memdeque.begin();
  ++it;
for (it=memdeque.begin(); it!=memdeque.end(); ++it)

    std::cout << ' ' << *it;
    std::cout << '\n';
}
else{
        cout<<"YOU HAVE ENTERED AN INVALID NUMBER OR OUT OF RANGE"<<endl;
    }
    }

while(i!=555);

    return 0;
}
