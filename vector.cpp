#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v; //creating vector named v of type int

    //Inserting element in vector v
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    //Deleting last element from vector v;
    v.pop_back();

    cout<<"Elements of vector v after 6 insertion and 1 deletion\n";
    for(auto x: v)
        cout<<x<<" ";
    cout<<endl;

    v.insert(v.begin()+3, 10);  //Inserting an element 10 at position 3 in vector v;

    vector<int> vec(v); //creating another vector vec with all elements of v

    //Check availbility of an element in vector using find function
    if(find(vec.begin(), vec.end(), 10)!=vec.end()){
        cout<<"Element is present\n";
    }
    else {
        cout<<"Element not found\n";
    }

    return 0;
}
