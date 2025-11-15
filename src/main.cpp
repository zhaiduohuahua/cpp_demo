#include<iostream>
#include<fstream>
#include<vector>
#include<limits>
using namespace std;

int main(){
    string filename = "data/numbers.txt";
    ifstream fin(filename);

    if(!fin.is_open()){
        cerr << "无法打开文件：" << filename << std::endl;
        return 1;
    }

    vector<double> nums;
    double x;
    while(fin >> x){
        nums.push_back(x);
    }

    if(nums.empty()){
        cout << "文件中没有合法数字" << endl;
        return 0;
    }

    double sum = 0.0;
    double min_val = numeric_limits<double>::max();
    double max_val = numeric_limits<double>::lowest();

    for(double v : nums){
        sum += v;
        if(v < min_val) min_val = v;
        if(v > max_val) max_val = v;
    }

    double avg = sum / nums.size();

    cout << "从文件读到：" << nums.size() << " 个数字\n";
    cout << "和：" << sum << endl;
    cout << "平均值：" << avg << endl;
    cout << "最小值：" << min_val << endl;
    cout << "最大值：" << max_val << endl;

    return 0;
}// test git workflow
