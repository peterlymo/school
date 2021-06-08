//coded by LyMo 
#include <iostream>
using namespace std;
float a,b,answer;
void dataoutput(){
     cout<<"THE ANSWER IS : "<< answer<<endl;
    
}

float datainput(){
    cout<<"Enter First Number: ";
    cin>>a;
     cout<<"Enter Second Number: ";
    cin>>b;
    return a;
    return b;
}
float calsum(){
    answer = a + b;
    return answer;
}

float caldif(){
    answer = a - b;
    return answer;
}


float calpro(){
    answer = a * b;
    return answer;
}

float calqout(){
    if( b != 0){
    answer = a / b;
    return answer;

    }
    else{
        cout<<"Haiwezekani"<<endl;
    }

}

int main() {
    cout << "ACHENI UVIVU"<<endl;
    cout << "CHAGUA TENDO"<<endl;
    cout << "1. Kujumlisha"<<endl;
     cout << "2. kutoa"<<endl;
      cout << "3. kuzidisha"<<endl;
       cout << "4. kugawanya"<<endl;
        cout << " Andika namba: ";

    int choice;
    cin>>choice;
    
   datainput();
 
   switch(choice){
       case 1:
       calsum();
       dataoutput();
       break;
       
       case 2:
             caldif();
       dataoutput();
       break;
       
       case 3:
              calpro();
       dataoutput();
       break;
       
       case 4:
              calqout();
                  dataoutput();
       break;
       default:
       cout<<"wrong Choice";
   }

    return 0;
}