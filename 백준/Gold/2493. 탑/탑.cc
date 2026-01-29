#include <iostream>
#include <stack>
#include <utility> // pair 사용

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    // {높이, 번호}를 저장하는 스택
    stack<pair<int, int>> s;
    
    // 0번 위치에 무한히 높은 탑이 있다고 가정하면 처리가 쉬움
    s.push({100000001, 0}); 

    for (int i = 1; i <= N; i++) {
        int height;
        cin >> height;

        // 나보다 낮은 탑은 앞으로도 수신 가능성이 없으므로 제거 (Monotonic Stack)
        while (s.top().first < height) {
            s.pop();
        }

        // 나보다 큰 가장 가까운 탑의 번호 출력
        cout << s.top().second << " ";

        // 현재 탑을 스택에 추가
        s.push({height, i});
    }

    return 0;
}