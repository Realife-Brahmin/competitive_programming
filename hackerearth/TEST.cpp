// C++ STL algorithm, nth_element()

 #include <vector>

 #include <algorithm>

 // for greater<int>()

 #include <functional>

 #include <iostream>

 using namespace std;

  

//user defined function, return whether first element is greater than the second
 
   bool great(int elem1, int elem2)
 
   {return (elem1 > elem2);}
 
    
 
    int main(void)
 
    {
 
    // container
 
    vector <int> vec;
 
    // iterator
 
    vector <int>::iterator Iter1;
 
    int i, j, k;
 
     
 
     // pushing data in ranges
 
     for(i = 0; i <= 5; i++)
 
     vec.push_back(i);
 
     for(j = 10; j <= 15; j++)
 
     vec.push_back(j);
 
     for(k = 20; k <= 25; k++)
 
     vec.push_back(k);
 
      
 
      // print the data
 
      cout<<"vec vector data: ";
 
      for(Iter1 = vec.begin(); Iter1 != vec.end(); Iter1++)
 
      cout<<*Iter1<<" ";
 
      cout<<endl;
 
      cout<<"\nOperation: nth_element(vec.begin(), vec.begin()+3, vec.end())"<<endl;
 
      nth_element(vec.begin(), vec.begin()+3, vec.end());
 
      cout<<"Position 3 partitioned vec vector data: ";
 
      for(Iter1 = vec.begin(); Iter1 != vec.end(); Iter1++)
 
      cout<<*Iter1<<" ";
 
      cout<<endl;
 
      // to sort in descending order, specify binary predicate
 
      cout<<"\nOperation: nth_element(vec.begin(), vec.begin()+4, vec.end(),greater<int>())"<<endl;
 
      nth_element(vec.begin(), vec.begin()+4, vec.end(), greater<int>());
 
      cout<<"Position 4 partitioned (greater()) vec vector data: ";
 
      for(Iter1 = vec.begin(); Iter1 != vec.end(); Iter1++)
 
      cout<<*Iter1<<" ";
 
      cout<<endl;
 
      cout<<"\nOperation: random_shuffle(vec.begin(), vec.end())"<<endl;
 
      random_shuffle(vec.begin(), vec.end());
 
      cout<<"Shuffled vec vector data: ";
 
      for(Iter1 = vec.begin(); Iter1 != vec.end(); Iter1++)
 
      cout<<*Iter1<<" ";
 
      cout<<endl;
 
      // a user-defined binary predicate...
 
      cout<<"\nOperation: nth_element(vec.begin(), vec.begin() + 5, vec.end(), great)"<<endl;
 
      nth_element(vec.begin(), vec.begin() + 5, vec.end(), great);
 
      cout<<"Position 5 partitioned (great()) vector data: ";
 
      for(Iter1 = vec.begin(); Iter1 != vec.end(); Iter1++)
 
      cout<<*Iter1<<" ";
 
      cout<<endl;
 
      return 0;
 
      }
