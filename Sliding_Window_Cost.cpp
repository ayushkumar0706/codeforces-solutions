#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
int n, k;
cin>>n>>k;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

int sumLeft = 0, sumRight = 0;
multiset<int>left, right;

auto reBalance = [&](){
    if(left.size() > (right.size() + 1)){
        auto it = prev(left.end());
        sumLeft -= (*it);
        sumRight += (*it);
        right.insert(*it);
        left.erase(it);
    }

    if((!right.empty()) && (!left.empty())){
            if((*prev(left.end())) > (*right.begin())){
            auto it = right.begin();
            auto it_L = prev(left.end());
            sumLeft -= (*it_L);
            sumRight += (*it_L);
            right.insert(*it_L);
            left.erase(it_L);

            sumLeft += (*it);
            sumRight -= (*it);
            left.insert(*it);
            right.erase(it);
        }
    }

    if(left.size() < right.size()){
        auto it = right.begin();
        sumLeft += (*it);
        sumRight -= (*it);
        left.insert(*it);
        right.erase(it);
    }

};

for(int i=0; i<k; i++){
    left.insert(arr[i]);
    sumLeft += arr[i];
    reBalance();
}

int median = *prev(left.end());
cout<<((left.size() * median) - sumLeft) + (sumRight - (right.size() * median))<<" ";

for(int i=k; i<n; i++){
    if(left.find(arr[i-k]) != left.end()){
        left.erase(left.find(arr[i-k]));
        sumLeft -= (arr[i-k]);
    }
    else{
        right.erase(right.find(arr[i-k]));
        sumRight -= (arr[i-k]);
    }

    reBalance();
    left.insert(arr[i]);
    sumLeft += arr[i];
    reBalance();

    int median = *prev(left.end());
    cout<<((left.size() * median) - sumLeft) + (sumRight - (right.size() * median))<<" ";    
}

}