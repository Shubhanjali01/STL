// /*
// vector is same as dynamic array which can resize according to the given input
// vector can in #include<vector> library
// syntax--> vector<dataType> vectorName;

// what i learn from this 

// + syntax of vector,inserting(pusing from the back side) element in it
// + size and capacity of vector
// + print the vector
// + front and end element accessing
// + swapping of two vectors

//  */


// #include <iostream>
// #include <bits/stdc++.h>
// #include <vector>



// int main()
// {

//     // creation of vector
//     std::vector<int> v;

// // insert element into the vector
//   v.push_back(67);//capacity 1
//   v.push_back(7);//capacity 2
//   v.push_back(47);//capacity 4
//   v.push_back(27);//capacity 4
//   v.push_back(47);//capacity 8
//   v.push_back(88);//capacity 8
//   v.push_back(89);//capacity 8
//   v.push_back(81);//capacity 8
//   v.push_back(85);//capacity 16     // i seen that whenever size and capacity become equal then after than capacity become double 
 

//  //  size and capacity
//     cout << "Size:" << v.size() << endl;         // 9
//     cout << "capacity:" << v.capacity() << endl; // 16

  

//    // access the all vector element
//     cout << "Vector is :";
//     for (int i = 0; i < 9; i++){
//         cout << v[i] << " ";      //67 7 47 27 47 88 89 81 85
//     }
//     cout << endl;


// // fornt(),back()and at()
//    cout<<"front element:"<<v.front()<<endl;
//    cout<<"back element:"<<v.back()<<endl;
//    cout<<"at position element:"<<v.at(4)<<endl;
//    cout<<"position element second way:"<<v[4]<<endl;


//  // clear all the vector elements
//      v.clear();


//  // now size and capacity
//     cout << "Size:" << v.size() << endl;         // 0
//     cout << "capacity:" << v.capacity() << endl; // 16


//             //HOW IS IT POSIBLE IF SIZE IS ZERO STILL VECTOR CAN STORE ELEMENT HOW??
//        cout << "Vector v is :";
//     for (int i = 0; i < 9; i++){   
//         cout << v[i] << " ";      //67 7 47 27 47 88 89 81 85
//     }
//     cout << endl;

  
// //new vector v1
// vector<int >v1(5,100);
// vector<int >v2(5,450);



// //size and capacity
// cout << "Size:" << v1.size() << endl;         // 0
//     cout << "capacity:" << v1.capacity() << endl; // 16



//    // access the all vector element
//    cout<<"before swapping "<<endl;
//     cout << "Vector v1 is :";
//     for (int i = 0; i < 5; i++){
//     cout << v1[i] << " ";      //100 100 100 100 100
//     }cout << endl;

//     cout << "Vector v2 is :";
//     for (int i = 0; i < 5; i++){
//     cout << v2[i] << " "; // 450 450 450 450 450 
//     }cout << endl;



    
//   // Swaps v1 and v2
//     v1.swap(v2);



//   cout<<"after swapping "<<endl;
//     cout << "Vector v1 is :";
//     for (int i = 0; i < 5; i++){
//          cout << v1[i] << " "; 
//     }cout << endl;

//        cout << "Vector v2 is :";
//     for (int i = 0; i < 5; i++){
//          cout << v2[i] << " "; 
//     }cout << endl;



//     return 0;
// }




// // C++ program to illustrate the
// // iterators in vector
// #include <iostream>
// #include <vector>

// // using namespace std;

// int main()
// {
// 	std::vector<int> g1;

// 	for (int i = 1; i <= 5; i++)
// 		g1.push_back(i);

// 	cout << "Output of begin and end: ";
// 	for (auto i = g1.begin(); i != g1.end(); ++i)
// 		cout << *i << " ";

// 	cout << "\nOutput of cbegin and cend: ";
// 	for (auto i = g1.cbegin(); i != g1.cend(); ++i)
// 		cout << *i << " ";

// 	cout << "\nOutput of rbegin and rend: ";
// 	for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
// 		cout << *ir << " ";

// 	cout << "\nOutput of crbegin and crend : ";
// 	for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
// 		cout << *ir << " ";

// 	return 0;
// }


