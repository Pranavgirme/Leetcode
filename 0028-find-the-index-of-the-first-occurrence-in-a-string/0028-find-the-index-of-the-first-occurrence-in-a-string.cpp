class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size())return -1;
        return haystack.find(needle);
    }
};