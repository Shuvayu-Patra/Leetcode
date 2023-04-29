class NumberContainers {
    unordered_map<int, int> map;
    unordered_map<int, set<int>>pam;
public:
    NumberContainers() {
    }
    
    void change(int index, int number) {
        if(map.find(index) != map.end()) {
            pam[map[index]].erase(index);
        }
        map[index] = number;
        pam[map[index]].insert(index);
    }
    
    int find(int number) {
        if(pam[number].empty()) {
            return -1;
        }
        auto it = pam[number].begin();
        return *it;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */