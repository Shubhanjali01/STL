//Iteratior 
/*
begin(),  end(),  rbegin(),  rend(),  cbegin(),  crbegin(),  crend()
*/

//capacity 
/*
size(),  max_size(),  capacity(),  resize(),  empty(),  shrink_to_fit(),
*/

//access Element 
/*
reference operator(g),  at(a),  front(),  back(),  data()
*/

//Modifier
/*
assign(),  push_back(),  pop_back(), insert(),  erase(),  swap(),  emplace(),  emplace_back()
*/

#include<iostream>
#include<vector>

using namespace std;

int main(){

  
  //Iteratior 
/*
begin(),  end(),  rbegin(),  rend(),  cbegin(),  crbegin(),  crend()
*/
   cout<<" ....................Iterator.........................";

   //creation of vector 
  vector<int> v;

  //pushing element in vector using push_back()

  for(int i=1;i<=5;i++){
    v.push_back(i);
  }

  cout<<"\nprint begin to end all element of vector: ";
  for(auto i=v.begin();i!=v.end();i++){
    cout<<*i<<" ";
  }
  
  cout<<"\nprint reverse begin and end elements of vector: ";
  for(auto ir=v.rbegin();ir!=v.rend();ir++){
    cout<<*ir<<" ";
  }

 cout<<"\nprint constant iterator cbegin and cend elements of vector: ";
  for(auto i=v.cbegin();i!=v.cend();i++){
    cout<<*i<<" ";
  }

   cout<<"\nprint constent reverse iterator begin and end elements of vector: ";
  for(auto ir=v.crbegin();ir!=v.crend();ir++){
    cout<<*ir<<" ";
  }


//capacity 
/*
size(),  max_size(),  capacity(),  resize(),  empty(),  shrink_to_fit(),
*/
  cout<<" ....................Size and Capacity.........................";


  cout<<"\n size of the element inside the vector: "<<v.size();
  

  v.resize(4);

cout<<"\n now size is : "<<v.size();
cout<<"\n capacity of the vector :"<<v.capacity();


 if(v.empty()==false){
    cout<<"\nvector is not empty!";
 }
 else cout<<"\n vector is empty !";

v.shrink_to_fit();

cout<<"\n vector element are : ";
for(auto i=v.begin();i!=v.end();i++){
    cout<<*i<<" ";
}

//access Element 
/*
reference operator(g),  at(a),  front(),  back(),  data()
*/
 cout<<"\n ....................Access Element.........................";


//creation of new vector 
vector<int>p;

for(int i=1;i<=10;i++){
    p.push_back(i*10);
}

cout<<"\n Reference operator : p[4]= "<<p[4];
cout<<"\n at: p.at(3)"<<p.at(3);
cout<<"\n front() element :"<<v.front();
cout<<"\n back()  element :"<<v.back();

int *pos=p.data();
cout<<"\n The first element is :"<<*pos;

//Modifier
/*
assign(),  push_back(),  pop_back(), insert(),  erase(),  swap(),  emplace(),  emplace_back()
*/
 cout<<" \n....................Modifier.........................";


// creation of vector 
vector<int> b;

//vector with five same element 
b.assign(5,10);

cout<<"\nvector element are : ";
for(int i=0;i<b.size();i++){
    cout<<b[i]<<" ";              // 10 10 10 10 10
}
// insert 15 at the end of the vector
b.push_back(15);
int n=b.size();
cout<<" \n the last element is : "<<b[n-1];

//remove last element
b.pop_back();

cout<<"\nafter removing vector is : ";
//print vector
for(int i=0;i<b.size();i++){
    cout<<b[i]<<" "; 
}


//insert 3 at the beginning 
b.insert(b.begin(),3);

cout<<"\n first element is : "<<b[0];

//remove the first element 
b.erase(b.begin());

cout<<"\nfirst element is : "<<b[0];


//insert 4 at the begining 
b.emplace(b.begin(),4);
cout<<"\n the first element is : "<<b[0];

//insert 30 at the end using emplace_back
b.emplace_back(30);
n=b.size();
cout<<"\n the last element is : "<<b[n-1];

//erases the vector
b.clear();
cout<<"\n vector size after erase is : "<<b.size();

//perform swap operation
vector<int > b1,b2;
b1.push_back(1);
b1.push_back(2);
b2.push_back(3);
b2.push_back(4);

cout<<"\n\n vector b1 is : ";
for(int i=0;i<b1.size();i++){
    cout<<b1[i]<<" ";

}

cout<<"\n vector b2 is : ";
for(int i=0;i<b2.size();i++){
    cout<<b2[i]<<" ";
}

//Swap b1 and b2 
b1.swap(b2);

cout<<"\n After Swap \n Vector b1 is : ";
for(int i=0;i<b1.size();i++){
    cout<<b1[i]<<" ";
}

cout<<"\n Vector b2 is : ";
for(int i=0;i<b2.size();i++){
    cout<<b2[i]<<" ";
}


return 0;
}
