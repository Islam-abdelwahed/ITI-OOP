void aggregation()
{
    cout << "\n\n--- Aggregation Test ---\n";

    Point p1(0,0), p2(5,5), p3(10,0);

    RectangleAgg R(&p1, &p2);
    TriangleAgg T(&p1, &p2, &p3);

    R.print();
    T.print();
}
