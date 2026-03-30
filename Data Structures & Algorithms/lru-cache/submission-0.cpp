class LRUCache {
private:
    struct Node
    {
        int key;
        int value;
    };

    list<Node*> lst;
    unordered_map<int, list<Node*>::iterator> mp;
    int m_capacity;

public:
    LRUCache(int capacity) {
        m_capacity = capacity;
    }
    
    void MoveNodetoFrontofList(list<Node*>::iterator it)
    {
        lst.splice(lst.begin(), lst, it);
    }

    int get(int key) {
        if(mp.count(key))
        {
            MoveNodetoFrontofList(mp[key]);
            
            return (*mp[key])->value;
        }    
        else
            return -1;
    }
    
    void put(int key, int value) {
        if(mp.count(key))
        {           
            (*mp[key])->key = key;           
            (*mp[key])->value = value;           
        } 
        else
        {
            Node* n = new Node;
            n->key = key;
            n->value = value;

            if((int)lst.size() >= m_capacity)
            {
                Node* last = lst.back();
                mp.erase(last->key);
                lst.pop_back();
                delete last;
            }
            lst.push_front(n);

            mp[key] = lst.begin();
        }

         MoveNodetoFrontofList(mp[key]);
         
    }
};