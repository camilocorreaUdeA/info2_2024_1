#include<string>

using std::string;

bool busquedaSubString(string frase, string word){
    char* ptr = &frase.at(0);
    for(int i=0; i<frase.length()-word.length()+1; i++)
    {
        char* ptr2 = ptr;
        for(int j=0; j<word.length(); j++)
        {
            if(*ptr2 != word.at(j))
            {
                break;
            }
            ptr2++;
        }
        if(ptr2 - ptr == word.length())
        {
            return true;
        }
        ptr++;
    }
    return false;
}


/*
frase = holacomestaneldiadehoy
word = anel
word = xysdf

ptr -> h
ptr2 -> h -> o -> l -> len(word-1)
ptr -> o
ptr2 -> o -> l -> ->a -> len(word-1)
*/
