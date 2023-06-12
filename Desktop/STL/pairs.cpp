//before going to write code remmember this points
/*
1.-->Pair is used to combine together two values that may be of different data types.
2.-->It is basically used if we want to store tuples ex. ( 1,t)
3.-->To access the elements,Syntax: pair <data_type1, data_type2> Pair_name
4.-->It come in( #include <utility>) Library 
5.-->swap: This function swaps the contents of one pair object with the contents of another pair object.
*/

#include<iostream>
#include<bits/stdc++.h>// all the function comes in this single library you can avoid writting anyother libraries
#include<utility>// pair is comes in this library

using namespace std;

void learningPairs(){


// It is used to define tuples like (1,4) both (first , second ) can be same datatype or different datatype as well 

// creation of pair
//syntax--->pair<dataType1,dataType2>pairName;

pair<int ,char> p;

//assign value in it
p.first=4;
p.second='S';

// access these above elements 
cout<<p.first<<" "<<p.second<<endl;


// another way of declaration of pair 
//syntax---> pair<dataType1,dataType2> p(value1,value2)

pair<string,double> p1("Shubhanjali",230.45);

//access the values
cout<<p1.first<<" "<<p1.second<<endl;

pair<string,int> g1("SuperbTut",345);
pair<char,int> g2('S',677);
pair<int ,int> g3(230,2304);

//access these elements 
cout<<g1.first<<" "<<g1.second<<endl;
cout<<g2.first<<" "<<g2.second<<endl;
cout<<g3.first<<" "<<g3.second<<endl;


//one another way to initialise the pair

// h1=make_pari("SuperbTut",345)
//or h2=("SuperbTut",345)

pair<string,int> h1=make_pair("Learning ",545);
pair<char,int> h2=make_pair('A',675);

cout<<h1.first<<" "<<h1.second<<endl;
cout<<h2.first<<" "<<h2.second<<endl;

}


int main(){
   
   //call the function which you made 
   learningPairs();

    return 0;
}
