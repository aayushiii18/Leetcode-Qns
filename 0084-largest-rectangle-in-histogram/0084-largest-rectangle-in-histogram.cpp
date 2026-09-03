class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> st;
        int maxarea=0;
        for(int i=0;i<heights.size();i++){
            int start=i;


            while(!st.empty() && st.top().first>heights[i]){
                int height=st.top().first;
                int index=st.top().second;
                st.pop();
                int width=i-index;
                int area=height*  width;
                maxarea=max(maxarea,area);
                start=index;
            }


            st.push({heights[i],start});
        }
        while(!st.empty()) {
            int height=st.top().first;
            int index=st.top().second;

            
            st.pop();
            int width=heights.size()-index;
            int area=height*width;
            maxarea=max(maxarea,area);
        }
        return maxarea;
    }
};