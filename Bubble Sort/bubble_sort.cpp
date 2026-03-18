#include<iostream>
#include<vector>

int main(){
	std::vector<int> ar = {5,9,7,0,3,4,1,2};
	for (int i = 0;i<ar.size()-1;i++){
		bool isStoped = true;
		for(int j=0;j<ar.size()-i-1;j++){
			if(ar[j]> ar[j+1]){
				std::swap(ar[j],ar[j+1]);
				isStoped = false;
			}	
		}
		if(isStoped) break;
		for(auto x:ar) std::cout<<x<<",";
		std::cout<<std::endl;
		
	}

}