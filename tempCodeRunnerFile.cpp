int N;
    cin >> N;
    vector<tuple<string, int, char, int, int, int>> students(N);
    for (int i = 0; i < N; ++i) {
        string nm;
        int cls, id, math_marks, eng_marks;
        char s;
        cin >> nm >> cls >> s >> id >> math_marks >> eng_marks;
        students[i] = make_tuple(nm, cls, s, id, math_marks, eng_marks);
    }
    sort(students.begin(), students.end(), [](const auto& a, const auto& b) {
        int total_marks_a = get<4>(a) + get<5>(a);
        int total_marks_b = get<4>(b) + get<5>(b);
        if (total_marks_a == total_marks_b) {
            return get<3>(a) < get<3>(b);
        }
        return total_marks_a > total_marks_b;
    });
    for (const auto& student : students) {
        cout <<get<0>(student)<<" "     
             <<get<1>(student)<<" "  
             <<get<2>(student)<<" "
             <<get<3>(student)<<" "
             <<get<4>(student)<<" " 
             <<get<5>(student)<<endl; 
    }