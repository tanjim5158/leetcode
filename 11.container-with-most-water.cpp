
class Solution {
public:
    int maxArea(vector<int>& h) {
        int maxarea=0;
        int i =0; int j = h.size()-1;
        while(i<j){
            int hight = min(h[i],h[j]);
            int area = hight * (j-i);
            maxarea = max(maxarea, area);
            if(h[i]<h[j])i++;
            else j--;
        }
        return maxarea;

    }
};