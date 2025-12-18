struct emp
{
    int id = -1;
    char name[20];
    int age;
};

void store_employee(emp* employes){
    for(int i=0;i<3;i++){
        cout<<"Please enter employee "<<i+1<<" id: ";
        cin>>employes[i].id;
        cout<<"Please enter employee "<<i+1<<" name: ";
        cin>>employes[i].name;
        cout<<"Please enter employee "<<i+1<<" age: ";
        cin>>employes[i].age;
    }
}

void print_employee(emp* employes){
    for(int i=0;i<3;i++){
        cout<<"Employee "<<i+1<<" id: "<<employes[i].id<<endl;
        cout<<"Employee "<<i+1<<" name: "<<employes[i].name<<endl;
        cout<<"Employee "<<i+1<<" age: "<<employes[i].age<<endl;
    }
}

void task3(){
    emp employes[3];
    emp* ptr = employes;
    store_employee(ptr);

    print_employee(ptr);
}
