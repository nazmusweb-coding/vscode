#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string person = "Nazmus";
    string last_name("Sakib");

    // Append to string using operator+=
    person += " is ";
    person += last_name;
    person += '\n';
    cout << person << endl; 

    // Append to string using append
    string str;
    string str2="Writing ";
    string str3="print 10 and then 5 more";

    str.append(str2);                       // "Writing "
    str.append(str3,6,3);                   // "10 "
    str.append("dots are cool",5);          // "dots "
    str.append("here: ");                   // "here: "
    str.append(10u,'.');                    // ".........." u is a literal which means unsigned
    str.append(str3.begin()+8,str3.end());  // " and then 5 more"
    str.append(5,0x2E);                     // "....."

    cout << str << '\n';

    // Append charackters to string using push_back
    person.push_back('!');
    cout << person << endl;

    // Assign content to string using assign
    string str1;
    string base="The quick brown fox jumps over a lazy dog.";

    str.assign(base);
    cout << str << '\n';

    str.assign(base,10,9);
    cout << str << '\n';         // "brown fox"

    str.assign("pangrams are cool",7);
    cout << str << '\n';         // "pangram"

    str.assign("c-string");
    cout << str << '\n';         // "c-string"

    str.assign(10,'*');
    cout << str << '\n';         // "**********"

    str.assign(10,0x2D);
    cout << str << '\n';         // "----------"

    str.assign(base.begin()+16,base.end()-12);
    cout << str << '\n';         // "fox jumps over"

    // Insert into string uisng insert
    string str4="to be question";
    string str5="the ";
    string str6="or not to be";

    str4.insert(6,str5);                             // to be (the )question
    str4.insert(6,str6,3,4);                         // to be (not )the question
    str4.insert(10,"that is cool",8);                // to be not (that is )the question
    str4.insert(10,"to be ");                        // to be not (to be )that is the question
    str4.insert(15,1,':');                           // to be not to be(:) that is the question

    cout << str4 << endl;

    // Erase characters from string 
    string str ("This is an example sentence.");
    cout << str << '\n';
                                            // "This is an example sentence."
    str.erase (10,8);                       //            ^^^^^^^^
    cout << str << '\n';
                                            // "This is an sentence."
    str.erase (str.begin()+9);              //           ^           just erased 1 character n.
    cout << str << '\n';
                                            // "This is a sentence."
    str.erase (str.begin()+5, str.end()-9); //       ^^^^^
    cout << str << '\n';
                                            // "This sentence."

    // Replace portion of string
    string base1="this is a test string.";
    string str7="n example";
    string str8="sample phrase";
    string str4="useful.";

    string str=base1;               // "this is a test string."
    str.replace(9,5,str7);          // "this is an example string." (1)
    str.replace(19,6,str8,7,6);     // "this is an example phrase." (2)
    str.replace(8,10,"just a");     // "this is just a phrase."     (3)
    str.replace(8,6,"a shorty",7);  // "this is a short phrase."    (4)
    str.replace(22,1,3,'!');        // "this is a short phrase!!!"  (5)

    // Swap string values
    string buyer ("money");
    string seller ("goods");

    cout << "Before the swap, buyer has " << buyer;
    cout << " and seller has " << seller << '\n';

    seller.swap (buyer);

    cout << " After the swap, buyer has " << buyer;
    cout << " and seller has " << seller << '\n';

    // Delete last character
    

}


/*

    operator+=	Append to string                (public member function)
    append	    Append to string                (public member function)
    push_back	Append character to string      (public member function)
    assign	    Assign content to string        (public member function)
    insert	    Insert into string              (public member function)
    erase	    Erase characters from string    (public member function)
    replace	    Replace portion of string       (public member function)
    swap	    Swap string values              (public member function)
    pop_back	Delete last character           (public member function)

*/