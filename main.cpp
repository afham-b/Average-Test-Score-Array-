#include <iostream>
#include <string> 
#include <iomanip>
using namespace std; 

int main(){

double average; 
//double difference; 
int count = 0; 
double scores[count]; 
int sum = 0;
 
cout <<" Calculate the averages and difference" <<endl; 
cout << endl;
cout << "Enter your scores (or a -1 when you're done)." <<endl;
cin >> scores[count]; 
while (scores[count]!= -1){
  sum+= scores[count];
  count++;
  cout << "Enter your test score"<<endl; 
  cin >> scores[count];  
}

//cout<< sum; 
//cout << count; 

average = 1.0 *sum/count; 

//cout << average; 

  cout << scores[0]; 
  cout << scores[1]; 
  cout << scores[2];
  cout << scores[3]; 

cout << endl << "score" << "       " << "Differences" << endl; 
cout << "------" <<"       " << "--------" << endl; 
for ( int i=0; i<count; i++){
  cout <<scores[i] <<"           "<<setw(5)<< scores[i]-average <<endl; 
} 

return 0; 
}


