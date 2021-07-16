#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'maxPairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY skillLevel
 *  2. INTEGER minDiff
 */
class HashMapTable
{
    // size of the hash table
    int table_size;
    // Pointer to an array containing the keys
    list<int> *table;

public:
    // creating constructor of the above class containing all the methods
    HashMapTable(int key);
    // hash function to compute the index using table_size and key
    int hashFunction(int key)
    {
        return (key % table_size);
    }
    // inserting the key in the hash table
    void insertElement(int key);
    // deleting the key in the hash table
    void deleteElement(int key);
    int searchElement(int key);
    // displaying the full hash table
    void displayHashTable();
};
//creating the hash table with the given table size
HashMapTable::HashMapTable(int ts)
{
    this->table_size = ts;
    table = new list<int>[table_size];
}
// insert function to push the keys in hash table
void HashMapTable::insertElement(int key)
{
    int index = hashFunction(key);
    table[index].push_back(key);
}
// delete function to delete the element from the hash table
int HashMapTable::searchElement(int key)
{
    int index = hashFunction(key);
    // finding the key at the computed index
    list<int>::iterator i;
    for (i = table[index].begin(); i != table[index].end(); i++)
    {
        if (*i == key)
            return 1;
    }
    return 0;
}

void HashMapTable::deleteElement(int key)
{
    int index = hashFunction(key);
    // finding the key at the computed index
    list<int>::iterator i;
    for (i = table[index].begin(); i != table[index].end(); i++)
    {
        if (*i == key)
            break;
    }
    // removing the key from hash table if found
    if (i != table[index].end())
        table[index].erase(i);
}
// display function to showcase the whole hash table
void HashMapTable::displayHashTable()
{
    for (int i = 0; i < table_size; i++)
    {
        cout << i;
        // traversing at the recent/ current index
        for (auto j : table[i])
            cout << " ==> " << j;
        cout << endl;
    }
}
int maxPairs(vector<long long int> skillLevel, long long int minDiff,HashMapTable ht) {
       int count=0;
       for(int i=0; i<skillLevel.size();i++)
       {
         if(ht.searchElement(skillLevel[i]) and (ht.searchElement(skillLevel[i]+minDiff)))
         {
            // cout<<skillLevel[i]<<" "<<skillLevel[i]+minDiff<<endl;
            ht.deleteElement(skillLevel[i]);
            ht.deleteElement(skillLevel[i]+minDiff);
            count++;
         }
       }
       return count;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string skillLevel_count_temp;
    getline(cin, skillLevel_count_temp);

    int skillLevel_count = stoi(ltrim(rtrim(skillLevel_count_temp)));

    vector<long long int> skillLevel(skillLevel_count);
    HashMapTable ht(skillLevel_count);
    for (int i = 0; i < skillLevel_count; i++) {
        string skillLevel_item_temp;
        getline(cin, skillLevel_item_temp);

        long long int skillLevel_item = stoi(ltrim(rtrim(skillLevel_item_temp)));

        skillLevel[i] = skillLevel_item;
        ht.insertElement(skillLevel_item);
    }

    string minDiff_temp;
    getline(cin, minDiff_temp);

    int minDiff = stoi(ltrim(rtrim(minDiff_temp)));

    int result = maxPairs(skillLevel, minDiff,ht);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
