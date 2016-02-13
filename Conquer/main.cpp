//
//  main.cpp
//  MergeSort
//
//  Created by Sriram Vellangallor Subramanian on 2/12/16.
//  Copyright © 2016 Sriram Vellangallor Subramanian. All rights reserved.
//

#include <iostream>
using namespace::std;

void conquer(int *array,int n){
    for (int i=0; i<n; i++) {
        //© 2016 Sriram Vellangallor Subramanian. All rights reserved.
        cout<<array[i]<<" "<<(i==n-1?"\n":"");
    }
    if (n<2) {
        return;
    }
    conquer(array, n/2);
    conquer(array+(n/2), n/2);
}

int main(int argc, const char * argv[]) {
    // insert code here... XCode generated
    int n;
    cout << "Number of elements\n";
    cin>>n;
    int array[n];
    for (int i=0; i<n; i++) {
        cin>>array[i];
    }
    conquer(array, n);
    return 0;
}
