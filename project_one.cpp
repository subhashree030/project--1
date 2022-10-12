#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char fruit[20];
  char key1[20]="apple";
  char key2[20]="banana";
  char key3[20]="potato";

  float quantity;
  char c;
  char conf='y';
  float a= 0.018;
  float b= 0.015;
  float p= 0.02;
  float total= 0;
  cout << "Welcome to XYZ"<<endl;
  cout<< "--------------";
  cout<<"\nOrder Now! Discount: 18% above Rs 500."<<endl;
  cout<<"\nAvailable Fruits/vege:\n\tApple:Rs18/kg\n\tPotato:Rs20/kg\n\tBanana:Rs15/kg"<<endl;
  cout<<"OK sir/mam, what would you like to order:";
  cin>>fruit;
  cout<<"Enter the quantity in gram: ";
  cin>>quantity;

   if(strcmp(fruit,key1)==0)
      { //total=0;
        total+= a*quantity;

      }
   else if(strcmp(fruit,key2)==0)
      {
        total+=b*quantity;

      }
  else if(strcmp(fruit,key3)==0)
      {
        total+=p*quantity;
      }

  cout<<"do you want to order anything else [Y/N] : ";
  cin>>c;
while(c==89||c==121) {

  cout<<"what else would you like to order: ";
  cin>>fruit;

  cout<<"Enter the quantity in gram: ";
  cin>>quantity;

    if(strcmp(fruit,key1)==0)
      {
        total+= a*quantity;

      }
   else if(strcmp(fruit,key2)==0)
      {
        total+=b*quantity;

      }
  else if(strcmp(fruit,key3)==0)
      {
        total+=p*quantity;
      }

  cout<<"do you want to order anything else [Y/N] : ";
  cin>>c;
  }
  cout<<"Total Bill: ";
if(total>500){
  total-=(total*18)/100;
   printf("%.2f",total);
}
else{
  printf("%.2f",total);
}
  cout<<"\nAre you sure to confirm order : ";
  cin>>conf;
  while(conf=='y'){
  string name;
  string add;
  int pin;
  int mob;
  string email;
  char pay[20];
  char key4[20]="online";
  cout<<"Name:";
  cin>>name;
  cout<<"Address: ";
  cin>>add;
  cout<<"Pin: ";
  cin>>pin;
  cout<<"Mobile: ";
  cin>>mob;
  cout<<"E-mail: ";
  cin>>email;
  cout<<"payment Opt [cod/online] : ";
  cin>>pay;
  if(strcmp(pay,key4)==0){
    cout<<"if online : please payment to 9874562136@ybl.";
  }
  cout<<"\nHooray! Order Placed . Our delivery boy will reach you out soon."<<endl;
  cout<<"\nNB: If you want to cancel your order please call and cancel your order within three minute. Otherwise payment non-refundable."<<endl;
  break;
  }
  return 0;
}