//
// Created by kwezi on 2023/11/15.
//
//Selection sort
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <list>

using namespace std;

vector<int> selectionsort(vector<int>unsort){
    vector<int>sort;
    int min =100000000;
    int pos = 0;
    //dealing with the unsorted list
    while (unsort.size() > 0){
        for (int i = 0 ; i < unsort.size();++i){
            if (unsort[i]< min){
                min = unsort[i];
                pos = i;
            }

        }
        int hold = unsort[pos];
        unsort[pos] = unsort[0];
        unsort[0]= hold;
        sort.push_back(unsort[0]);
        unsort.erase(unsort.begin());
        //deals with sorted list
        std::sort(sort.begin(),sort.end());
        min = 100000000;
        pos = 0;
    }


    return sort;

}

vector<int> insertionsort(vector<int>unsort){
    vector<int>sort;
    int hold = 0;

    while (unsort.size()> 0){
        sort.push_back(unsort[0]);

        unsort.erase(unsort.begin());
        int j = sort.size()-1;
        while (j > 0){
            if (sort[j-1] > sort[j]){
                hold = sort[j-1];
                sort[j-1] = sort[j];
                sort[j]= hold;

            }
            j = j-1;

        }


    }
    return sort;
}


int quicksort(vector<int>unsort){
    //we pick the pivot based randomise for now
    /*if (unsort.size() == 1){
       return unsort[0];
    }
        vector<int>left;
        vector<int>right;
        int pivot = rand() % unsort.size();
        int i =unsort.size()-1;
        while (i <= 0){
            if (unsort[i] > unsort[pivot]){
                left.push_back(unsort[i]);

            }
            else if (unsort[i] <= unsort[pivot]){
                right.push_back(unsort[i]);

            }
        }
        quicksort(left);
        quicksort(right);
        //return unsort[pivot];

}
vector<int> q(vector<int>unsort){
    vector<int>sort ;
    sort.push_back(quicksort(unsort));
    return sort;
    */

}

list<int> bubblesort(vector<int>unsort){

    int hold = 0;
    list<int>sort;
    while (unsort.size() > 0){
        for (int i = 0; i < unsort.size(); ++i){
            if (unsort[i+1]< unsort[i]){
                hold = unsort[i+1];
                unsort[i+1] = unsort[i];
                unsort[i]= hold;
            }
            hold =0;
        }
        sort.push_front(unsort[unsort.size()]);
        unsort.pop_back();
    }
    return sort;

}

int main(){
    int hold =0;
    vector<int>input;
    for (int k = 0 ; k < 7; ++k){
        cin>>hold;
        input.push_back(hold);
        hold =0;
    }
    vector<int>output = selectionsort(input);
    vector<int>out2 = insertionsort(input);
    list<int>out3 = bubblesort(input);
    for (int i =0; i< output.size();++i){
        cout<<output[i]<<' ';
    }
    cout<<endl;
    for (int j =0; j < output.size(); ++j){
        cout<<out2[j]<<' ';
    }
    cout<<endl;
    for (int item : out3){
        cout<<item<<' ';
    }
}
