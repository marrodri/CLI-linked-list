//
//  Node.h
//  FirstProgramReview
//
//  Created by Marthel Rodriguez on 8/31/23.
//

#ifndef Node_h
#define Node_h

//template<Typename T> helps to define the structure to have a wild datatype when being
// initialized. This can be helpful for preventing multiple structs that are copycats with the
// slight variant of changing the datatype for storing the main data.
template<typename T>
struct Node {
    T data;
    Node<T> *next;
};

#endif /* Node_h */
