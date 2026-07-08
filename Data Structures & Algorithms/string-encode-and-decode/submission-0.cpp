class Solution {
public:

    string encode(vector<string>& strs) {
        string encodedresult="";
        for(string s:strs){
            encodedresult += to_string(s.size()) + "#" + s;
        }
        return encodedresult;
    }

    vector<string> decode(string s) {
            vector<string>result;
            int i =0;
            while(i<s.size()){
                int j = s.find('#' ,i);
                int length = stoi(s.substr(i,j-i));
                string word = s.substr(j+1 ,length);
                result.push_back(word);
                i = j + length +1;
            }
            return result;
    }
};
