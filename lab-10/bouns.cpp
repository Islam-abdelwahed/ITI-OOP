
template<class T>
class CRUD
{
    int s;
    int i=0;
    T arr[10];
public:
    void insert_obj(T obj)
    {
        if(i<s)
        {
            arr[i]=obj;
            i++;
        }
        else cout<<"\n Array is Full";
    }
    void display()
    {
        cout << "\nCurrent Data: ";
        for(int j=0; j<i; j++)
        {
            cout << arr[j].print() << " ";
        }
        cout << endl;
    }
    void update_obj(int index, T newVal)
    {
        arr[index] = newVal;
        cout << "\nUpdated Successfully.";
    }

    void delete_obj(int index)
    {
        for(int j=index; j<i-1; j++)
        {
            arr[j] = arr[j+1];
        }
        i--;
        cout << "\nDeleted Successfully.";
    }
};

void bouns(){

  CRUD<Student> c;

  c.insert_obj()
}
