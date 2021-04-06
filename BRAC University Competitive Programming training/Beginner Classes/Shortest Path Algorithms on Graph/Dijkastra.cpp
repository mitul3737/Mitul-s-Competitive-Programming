#include<bits/stdc++.h>
using namespace std;

const int nmax=100000+10;
const int inf=1e9;
vector<pair<int,int>> adjacentlist[nmax];//adjacent neighbours list
int  dist[nmax]; //distance arrray



void dijkstra(int source,int V){
    for(int i=1; i<=V;i++){
        dist[i]=inf;
        dist[source]=0;

        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>pq; //First in priority queue we kept pair it means we will keep pairs then vector meant that what we will use to implement this que, then greater is to implement order  when eventually makes things ===(distance,u)

        for(int i=1; i<=V; i++){
            pq.push(make_pair(dist[i],i));
        }

        while(!pq.empty()) {
            int u = pq.top().second;
            int d = pq.top().first;

            pq.pop();


            if ( dist[u]!= d){// as we have added later pq.push(make_pair(distance[v.first],v.first)); which makes copy and thuhs abvoiding the copy

                continue;
            }
            for (auto v: adjacentlist[u]) { // auto as adjacentlist is a pair
                if (d + v.second < dist[v.first]) {
                    dist[v.first] = d + v.second; //relax    c.second is actually c which presents the cost
                    pq.push(make_pair(dist[v.first],
                                      v.first));// making pair as we cannot assign priority que and thus making a pair

                }

            }


        }
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int V,E;//modes=V , Edges=E
    cin>>V>>E;

    for(int i=0; i<E;i++){
        int u,v,c;
        cin>>u>>v>>c;

        adjacentlist[u].push_back(make_pair(v,c));
        adjacentlist[v].push_back(make_pair(u,c));




    }




    return 0;
}