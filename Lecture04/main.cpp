#include <iostream>
#include <cstdint>
using namespace std;

// all simple statements and declarations end in a semicolon
// if there is dynamic class need constructor, destructor, copy constructor, and operator =

class String {
private:
    char* p;
    uint32_t len;
    uint32_t capacity;
    // used for efficiency

public:
    String(const char s[]) {
        // strlen
        // count how many letters until ascii NUL '\0'
        int i;
        for (i = 0; s[i] != '\0'; i++)
            ;
            // not storing zero character
        p = new char[i];
        len = i;
        capacity = i;
        for (int j = 0; j < len; j++) {
            p[j] = s[j];
        }
    }
    // what to do for empty string
    String() {
        // preallocated for empty strings
        p = new char[1];
        len = 0;
        capacity = 1;
    }
    // COPY CONSTRUCTOR
    String(const String& orig) : p(new char[orig.capacity]), len(orig.len), capacity(orig.capacity) {
        for (uint32_t i = 0; i < len; i++) {
            p[i] = orig.p[i];
        }
    }

    String& operator = (const String& orig) {
        // how does it now what copy is?
        String copy(orig);
        swap(copy.p, p);
        swap(copy.len, len);
        swap(copy.capacity, capacity);
    }
    // used to give back the memory
    // called before death of the object. undoes the memeory that was allocated
    // dont need to write len = 0 unless you are paranoid about left over memory after running
    // *** CREATION AND DESTRUCTION OF OBJECTS TAKES TIME AND THEY SHOULD BE RESUED IF ABLE ***
    ~String() {
        // need the [] or else horrible things can happen
        delete [] p;
    }
    friend ostream& operator << (ostream& s, const String& str);
};

// instead of void print... DO NOT MAKE COPY UNLESS YOU HAVE TO
ostream& operator <<(ostream& s, const String& str) {
    // will keep going until it finds a zero and will likely crash
    for (uint32_t i = 0; i < str.len; i++) {
        s << str.p[i];
    }
    return s;
}
// if they are sharing memory then they arent really copies. if you write on one paper it wont change on a copy...what are computers
// when you copy objects with pointers the pointers are the same which is pretty fatal because when object 1 dies then the memory is deleted but when the second one has to delete it there is nothing there. Cannot delete the same memory twice

string operator +(const String& a, const String& b) {
    String result;
    len = a.len + b.len;
    result.p = new char[len];
    capacity = len;
    for (uint32_t i = 0; i < a.len; i++) {
        result.p[i] = a.p[i];
    }
    for (uint32_t j = a.len; j < result.len; j++) {
        result.p[j] = b.p[j - a.len];
    }
}

// def = array d, e, f, \0 (need end character)

int main() {
    String s1("def");
    String s2; // empty string
    cout << s1;
    cout << s1 << s2, 5 + 4 << '\n';
    cout << s1 << endl; //def
    cout << s2 << endl; //print nothing
    String s3("abc", 5); // abc abc abc abc abc
    String s4 = s3; // make copy using copy constructor
    String s5(s3);
    String s6 = s4 + s1; // concatenate
    cout << s5 << endl;

    // operator equals first deallocate what was in s4 before copying

    return 0;
}