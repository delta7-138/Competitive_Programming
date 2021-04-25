#include <bits/stdc++.h>
using namespace std;
class Card{
    public: 
    int index;
    int color;
    Card(){
        index = 0;
        color = 0;
    }
    Card(const Card &c){
        this->index = c.index;
        this->color = c.color;
    }
    void increment(){
        index = index + 1;
    }
};

void level(vector<Card> deck){
    for(Card c: deck){
        cout<<c.index<<" ";
    }
}

void bottom_up_heapify(vector<Card> deck , int i){
    int p = (i-1)/2;
    while(p>=0 && deck[p].index>deck[i].index){
        Card tmp = deck[p];
        deck[p] = deck[i];
        deck[i] = tmp;
        i = p;
        p = (i-1)/2;
    }
}

void solve(vector <Card>deck , vector <int>q){
    for(int i : q){
        int tmp = 0;
        for(int j = 0; j<deck.size(); j++){
            if(deck[j].color == i){
                cout<<deck[j].index<<" ";
                tmp = deck[j].index;
                deck[j].index = 1;
                break;
            }else{
                deck[j].index = deck[j].index + 1;
            }
        }
        bottom_up_heapify(deck , tmp-1);
    }
}

int main(){
    int n,q , inp;
    cin>>n>>q;
    vector<Card>deck;
    vector<int>qlist;

    for(int i = 0; i<n; i++){
        cin>>inp;
        Card card;
        card.index = (i+1);
        card.color = inp;
        deck.push_back(card);
    }
    for(int i = 0; i<q; i++){
        cin>>inp;
        qlist.push_back(inp);
    }
    solve(deck , qlist);
    return 0;
}