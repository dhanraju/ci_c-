// A program to demonstrate need of namespace.

int main() {
    int value;
    value = 0;
    double value; // Error here
    value = 0.0;
}

/*
Output:

Compiler Error:
need_of_ns.cc: In function 'int main()':
need_of_ns.cc:6:12: error: conflicting declaration 'double value'
     double value; // Error here
            ^~~~~
need_of_ns.cc:4:9: note: previous declaration as 'int value'
     int value;
         ^~~~~

Explanation:
In each scope, a name can only represent one entity. So, there cannot be two
vairables with the same name in the same scope. Using namespaces, we can create
two variables or member functions having the same name.
*/