#include <iostream>
using namespace std;
int main(){

    char selection{};
    
   do{
    cout<<"\n---------------"<<endl;
    cout<<"1.do that"<<endl;
    cout<<"2.do this"<<endl;
    cout<<"3. do something else"<<endl;
    cout<<"Q.quit"<<endl;
    cout<<"\n Enter your selection"<<endl;

    cin>>selection;
    if(selection=='1')
    cout<<"you choose 1-do that"<<endl;
    else if(selection=='2')
    cout<<"you choose 2-do this"<<endl;
    else if(selection=='3')
    cout<<"you choose 3-do something else"<<endl;
    else if(selection!='q' ||selection!='Q' )
    cout<<"unknown option"<<endl;

   } while(selection!='q' && selection!='Q');



}