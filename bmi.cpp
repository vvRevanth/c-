#include <iostream>
using namespace std;
int main() 

{
	
    double m,h;

    cout<<"Calculate the Body Mass Index(BMI)\n\n";
    cout<<"Enter your hight (in m):";
    cin>>h;
    
    cout<<"Enter your weight (in kg):";
    cin>>m;
    
    double a = (h*h);
    double n = m / a;
	    
    cout<<"\n"<<"Your Body Mass Index(BMI) is:";
    cout<<n<<"\n"<<endl;
	 
    if(n < 18.5 ){
       cout<<"Underweight \n\nA BMI of under 18.5 indicates that you have insufficient weight, so you may need to put on some weight. You should ask a doctor for advice.";
    }
     
    else if(n > 18.5 && n < 24.9 ){
        cout<<"Health \n\nA BMI of 18.5-24.9 indicates that you have a healthy weight for your height. By maintaining a healthy weight, you can lower your risk of developing serious health problems.";
    }
    
    else if(n > 25.0 && n < 29.9){
        cout<<"Overweight \n\nA BMI of 25-29.9 indicates that you is slightly overweight. You should reduce some weight.";
    }
    
	else if(n > 30.0){
        cout<<"Obese \n\nA BMI of over 30 indicates that you has obesity. You need to reduce weight.";
    }

    return 0;
  
}


