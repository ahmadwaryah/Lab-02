
#include <iostream>
using namespace std;

// Lab Tasks
//Task 1
// To ask the eligibility for voting.
// int main ()
// {
//     float x;
//     cout<<"What is Your age? ";
//     cin>>x;
//     if (x>= 18)
//     {
//         cout<<"you are eligible to vote :)"<<endl;
//     }
//     else
//     {
//         cout<<"As you are under 18, So you cant vote :("<<endl;
//     }
//     return 0;
// }

//Task 2:
//To get the range [10,50]
// int main ()
// {
//  float x;
//  cout<<"Number:";
//  cin>>x;
//  if (x>=10 && x<=50)
//  {
//      cout<<"The Number lies in range [10, 50]";
//  }
//  else
//  {
//      cout<<"The Number does not lies in range [10, 50]";
//  }
//  return 0;
// }

//Task 3:
// To get which number is greater and get maximum value.
//int main ()
//{
//    float x,c,v,b,n;
//    cout<<"Numbers? ";
//    cin>>x;
//    cin>>c;
//    if (x>c)
//    {
//        cout<<x<<" is greater than "<<c<<endl;
//    }
//    else if (x<c)
//    {
//     cout<<c<<" is greater than "<<x<<endl;  
//    }
//    else if (x==x)
//    {
//    cout<<x<<" is equal to "<<c<<endl;
//    }
//    v=x+c;
//    b=x*c;
//    if (v>b)
//    {
//     cout<<"Maximum value is " << v<<endl;
// }
// else if (b>v)
// {
//     cout<<"Maximum value is "<<b<<endl;
// }
// return 0;
//}

// Tak 4:
// To get average and give result.
//int main ()
//{
// float x, v ,b, n, a;
// cout<<"Scores out of 100? "<<endl;
// cin>>x;
// cin>>v;
// cin>>b;
// n=x+v+b;
// a=n/3;
// cout<<"Your average is "<<a<<endl;
// if (a>=60)
// {
// cout<<"Congratulations, You are pass :)";
// }
// else if (a<60)
// {
// cout<<"Better Luck Next Time :(";
// }
// return 0;
//}

// Home Tasks
//Task 01
// To give Grades.
//int main ()
// {
//  float x;
//  cout<<"Number out of 100: ";
//  cin>>x;
//  if (x>=90 && x<=100)
//  {
//      cout<<"A-Grade";
//  }
//  else if (x>=75 && x<90)
//  {
//      cout<<"B-Grade";
//  }
// else if (x>=60 && x<75)
//  {
//      cout<<"C-Grade";
//  }
//  else  if (x>=45 && x<60)
//  {
//      cout<<"D-Grade";
//  }
//  else if (x>=0 && x<45)
//  {
//      cout<<"F-Grade";
//  }
//  return 0;
// }

//Task 2:
// To know if a number is divisible by 2 and 5.
//int main ()
//{
// int x;
// cout<<"Number? ";
// cin>>x;
// if (x%2==0 && x%5==0)
// {
// cout<<x<<" is an even and divisible by 5 "<<endl;
//}
// else if (x%2!=0 && x%5==0)
// {
// cout<<x<<" is an not even but is divisible by 5 "<<endl;
// }
// else if (x%2==0 && x%5!=0)
// {
// cout<<x<<" is an even but not divisible by 5 "<<endl;
// }
// else if (x%2!=0 && x%5!=0)
// {
// cout<<x<<" is an not even and neither divisible by 5 "<<endl;
// }
//}
//Task 03:
// To check leap year.
//int main ()
//{
// int x;
// cout<<"Year? ";
// cin>>x;
// if (x%4==0)
// {
// cout<<x<<" is a leap year."<<endl;
// }
// else
// {
// cout<<x<<" is not a leap year."<<endl;
// }
//
//}

//Task 04:
// To check if a alphabet is vovel or consonant.
//int main ()
//{
// char x;
// cout<<"Alphabet: ";
// cin>>x;
// if (x=='a'|| x=='e' || x=='i' ||x=='o' ||x=='u' || x=='A'|| x=='E' || x=='I' ||x=='O' ||x=='U' )
// {
// cout<<"Alphatbet is Vovel.";
// }
// else
// {
// cout<<"Alphabet is consonent.";
// }
//}

//Task 5:
// To check if a person is eligible for scholarship.

//int main()
//{
//  float a,b,c, d ,e;
//cout << "what is your GPA?  " ;
//  cin >> a;
//  cout << "Total number of classes? ";
//    cin >> b;
//    cout << "classes attended? ";
//    cin >> c;
//    d= (c/b);
//    e= d*100;
//    if (a>=3.5 && e>=80)
//    {
//    cout << "You can apply for scholarships." << endl;
//    }
//   else if (a<3.5 || e<80)
//    {
//     cout << "Sory, You can not apply for scholarships." << endl;
//   }
//    }