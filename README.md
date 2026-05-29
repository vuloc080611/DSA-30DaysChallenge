# 🚀 30 Days of DSA Challenge – C++

Chào mừng đến với thử thách **30 ngày chinh phục Cấu trúc dữ liệu & Giải thuật bằng C++**.  
Mỗi ngày một bài toán kinh điển hoặc nâng cao, có **đề bài, ví dụ, ràng buộc** và **code C++ hoàn chỉnh**.

---

## 🗓️ Lộ trình 30 ngày

### Ngày 1: Two Sum
**Đề bài:** Cho mảng số nguyên `nums` và một số nguyên `target`, tìm hai chỉ số của hai phần tử có tổng bằng `target`. Mỗi input có đúng một lời giải, không được dùng cùng một phần tử hai lần.  
**Ví dụ:** `nums = [2,7,11,15], target = 9` → `[0,1]`  
**Yêu cầu:** Độ phức tạp O(n)

---

### Ngày 2: Valid Palindrome
**Đề bài:** Cho chuỗi `s`, kiểm tra xem nó có phải palindrome hay không, chỉ xét các ký tự chữ cái và số, không phân biệt hoa thường.  
**Ví dụ:** `"A man, a plan, a canal: Panama"` → `true`  
**Yêu cầu:** Dùng hai con trỏ, O(n) time, O(1) space.

---

### Ngày 3: Reverse Linked List
**Đề bài:** Cho con trỏ `head` của danh sách liên kết đơn, đảo ngược danh sách và trả về `head` mới.  
**Ví dụ:** `1->2->3->4->5` → `5->4->3->2->1`  
**Yêu cầu:** Cài đặt lặp, O(n) time, O(1) space.

---

### Ngày 4: Merge Two Sorted Lists
**Đề bài:** Cho `head` của hai danh sách liên kết đã sắp xếp tăng dần, hợp nhất chúng thành một danh sách tăng dần.  
**Ví dụ:** `1->2->4` và `1->3->4` → `1->1->2->3->4->4`  
**Yêu cầu:** Dùng đệ quy hoặc vòng lặp, O(n+m).

---

### Ngày 5: Best Time to Buy and Sell Stock
**Đề bài:** Cho mảng `prices` là giá cổ phiếu theo ngày. Chỉ được mua một lần rồi bán một lần sau đó. Tìm lợi nhuận tối đa có thể. Nếu không thể sinh lời, trả về 0.  
**Ví dụ:** `[7,1,5,3,6,4]` → 5 (mua ngày 2 giá 1, bán ngày 5 giá 6)  
**Yêu cầu:** O(n) time, O(1) space.

---

### Ngày 6: Contains Duplicate
**Đề bài:** Cho mảng số nguyên `nums`, trả về `true` nếu có phần tử xuất hiện ít nhất hai lần, ngược lại `false`.  
**Ví dụ:** `[1,2,3,1]` → `true`  
**Yêu cầu:** Dùng hash set, O(n).

---

### Ngày 7: Valid Anagram
**Đề bài:** Cho hai chuỗi `s` và `t`, viết hàm kiểm tra `t` có phải là đảo chữ (anagram) của `s` hay không.  
**Ví dụ:** `s = "anagram", t = "nagaram"` → `true`  
**Yêu cầu:** Đếm tần suất, O(n).

---

### Ngày 8: Maximum Subarray (Kadane)
**Đề bài:** Cho mảng số nguyên `nums`, tìm dãy con liên tiếp có tổng lớn nhất và trả về tổng đó.  
**Ví dụ:** `[-2,1,-3,4,-1,2,1,-5,4]` → 6 (dãy `[4,-1,2,1]`)  
**Yêu cầu:** Thuật toán Kadane O(n), O(1).

---

### Ngày 9: Product of Array Except Self
**Đề bài:** Cho mảng `nums`, trả về mảng `answer` sao cho `answer[i]` bằng tích tất cả các phần tử của `nums` ngoại trừ `nums[i]`. Không dùng phép chia và phải O(n).  
**Ví dụ:** `[1,2,3,4]` → `[24,12,8,6]`  
**Yêu cầu:** Dùng mảng tiền tố và hậu tố, O(n) time, O(1) space ngoài mảng trả về.

---

### Ngày 10: 3Sum
**Đề bài:** Cho mảng số nguyên `nums`, tìm tất cả bộ ba `[nums[i], nums[j], nums[k]]` với `i != j != k` sao cho tổng bằng 0. Không được chứa bộ ba trùng lặp.  
**Ví dụ:** `[-1,0,1,2,-1,-4]` → `[[-1,-1,2],[-1,0,1]]`  
**Yêu cầu:** Sắp xếp + hai con trỏ, O(n²).

---

### Ngày 11: Container With Most Water
**Đề bài:** Cho mảng `height` (chiều cao các cột), tìm hai cột sao cho chúng tạo với trục x một thùng chứa được nhiều nước nhất. Trả về diện tích lớn nhất.  
**Ví dụ:** `[1,8,6,2,5,4,8,3,7]` → 49  
**Yêu cầu:** Hai con trỏ, O(n).

---

### Ngày 12: Longest Substring Without Repeating Characters
**Đề bài:** Cho chuỗi `s`, tìm độ dài xâu con dài nhất không chứa ký tự lặp lại.  
**Ví dụ:** `"abcabcbb"` → 3 (`"abc"`)  
**Yêu cầu:** Cửa sổ trượt + hash set, O(n).

---

### Ngày 13: Group Anagrams
**Đề bài:** Cho mảng các chuỗi `strs`, nhóm các từ đảo chữ (anagram) lại với nhau. Trả về danh sách các nhóm.  
**Ví dụ:** `["eat","tea","tan","ate","nat","bat"]` → `[["bat"],["nat","tan"],["ate","eat","tea"]]`  
**Yêu cầu:** Hash map với key là chuỗi đã sắp xếp, O(n * k log k).

---

### Ngày 14: Top K Frequent Elements
**Đề bài:** Cho mảng số nguyên `nums` và số nguyên `k`, trả về `k` phần tử xuất hiện thường xuyên nhất.  
**Ví dụ:** `nums = [1,1,1,2,2,3], k = 2` → `[1,2]`  
**Yêu cầu:** Dùng hash map + heap, O(n log k).

---

### Ngày 15: Longest Consecutive Sequence
**Đề bài:** Cho mảng số nguyên chưa sắp xếp, tìm độ dài dãy liên tiếp dài nhất (các phần tử liền kề tăng dần 1 đơn vị). Yêu cầu O(n).  
**Ví dụ:** `[100,4,200,1,3,2]` → 4 (dãy `1,2,3,4`)  
**Yêu cầu:** Dùng hash set, kiểm tra phần tử bắt đầu dãy.

---

### Ngày 16: Minimum Window Substring
**Đề bài:** Cho hai chuỗi `s` và `t`, tìm xâu con ngắn nhất của `s` chứa tất cả các ký tự của `t` (bao gồm cả trùng lặp).  
**Ví dụ:** `s = "ADOBECODEBANC", t = "ABC"` → `"BANC"`  
**Yêu cầu:** Cửa sổ trượt nâng cao, O(m+n).

---

### Ngày 17: Merge Intervals
**Đề bài:** Cho mảng các khoảng `intervals` với `intervals[i] = [start_i, end_i]`, hợp nhất các khoảng chồng lấn và trả về mảng các khoảng không chồng lấn.  
**Ví dụ:** `[[1,3],[2,6],[8,10],[15,18]]` → `[[1,6],[8,10],[15,18]]`  
**Yêu cầu:** Sắp xếp + quét, O(n log n).

---

### Ngày 18: Spiral Matrix
**Đề bài:** Cho ma trận `m x n`, in ra các phần tử theo thứ tự xoắn ốc (theo chiều kim đồng hồ).  
**Ví dụ:** `[[1,2,3],[4,5,6],[7,8,9]]` → `[1,2,3,6,9,8,7,4,5]`  
**Yêu cầu:** Mô phỏng, O(m*n).

---

### Ngày 19: Rotate Image
**Đề bài:** Cho ma trận vuông `n x n` đại diện cho ảnh, xoay ảnh 90 độ theo chiều kim đồng hồ tại chỗ.  
**Ví dụ:** `[[1,2,3],[4,5,6],[7,8,9]]` → `[[7,4,1],[8,5,2],[9,6,3]]`  
**Yêu cầu:** Chuyển vị + đảo hàng, O(n²) time, O(1) space.

---

### Ngày 20: Word Search
**Đề bài:** Cho lưới ký tự `board` và một từ `word`, trả về `true` nếu từ đó tồn tại trong lưới (các ô kề cạnh, không dùng lại ô).  
**Ví dụ:** `board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"` → `true`  
**Yêu cầu:** Quay lui (DFS), O(m*n * 4^L).

---

### Ngày 21: Number of Islands
**Đề bài:** Cho lưới nhị phân `grid` (`'1'` là đất, `'0'` là nước), đếm số hòn đảo (vùng đất kết nối 4 hướng).  
**Ví dụ:** 
grid = [["1","1","0","0","0"],
["1","1","0","0","0"],
["0","0","1","0","0"],
["0","0","0","1","1"]]
→ 3  
**Yêu cầu:** DFS hoặc BFS, O(m*n).

---

### Ngày 22: Clone Graph
**Đề bài:** Cho tham chiếu của một nút trong đồ thị vô hướng liên thông, sao chép sâu (deep copy) toàn bộ đồ thị và trả về nút tương ứng trong bản sao.  
**Yêu cầu:** Dùng DFS/BFS kèm hash map, O(V+E).

---

### Ngày 23: Course Schedule
**Đề bài:** Có `numCourses` khóa học và mảng `prerequisites` với `prerequisites[i] = [a_i, b_i]` (muốn học `a_i` phải học `b_i` trước). Kiểm tra xem có thể hoàn thành tất cả khóa học không (không có chu trình phụ thuộc).  
**Ví dụ:** `numCourses = 2, prerequisites = [[1,0]]` → `true`  
**Yêu cầu:** Phát hiện chu trình trong đồ thị có hướng (Kahn hoặc DFS), O(V+E).

---

### Ngày 24: Implement Trie (Prefix Tree)
**Đề bài:** Cài đặt cấu trúc Trie với các phương thức `insert(word)`, `search(word)`, `startsWith(prefix)`.  
**Ví dụ:** insert("apple"), search("apple") → true, search("app") → false, startsWith("app") → true.  
**Yêu cầu:** Mỗi thao tác O(L) với L là độ dài từ.

---

### Ngày 25: Design Add and Search Words Data Structure
**Đề bài:** Mở rộng Trie, hỗ trợ từ chứa ký tự đại diện `'.'` trong `search(word)` (khớp bất kỳ ký tự nào).  
**Ví dụ:** addWord("bad"), addWord("dad"), search("pad") → false, search(".ad") → true.  
**Yêu cầu:** DFS trong Trie với nhánh dấu chấm.

---

### Ngày 26: Word Break
**Đề bài:** Cho chuỗi `s` và danh sách từ `wordDict`, trả về `true` nếu `s` có thể được phân tách thành chuỗi các từ có trong từ điển (có thể dùng lại từ).  
**Ví dụ:** `s = "leetcode", wordDict = ["leet","code"]` → `true`  
**Yêu cầu:** Quy hoạch động O(n^2).

---

### Ngày 27: House Robber
**Đề bài:** Bạn là một tên trộm chuyên nghiệp, định cướp các ngôi nhà dọc một con phố. Mỗi nhà có số tiền `nums[i]`, nhưng nhà liền kề có hệ thống báo động, nếu cướp hai nhà liền kề thì báo động sẽ kêu. Tính số tiền tối đa có thể cướp được.  
**Ví dụ:** `[2,7,9,3,1]` → 12 (cướp nhà 1,3,5)  
**Yêu cầu:** Quy hoạch động O(n), O(1) space.

---

### Ngày 28: Decode Ways
**Đề bài:** Một thông điệp chứa các chữ cái từ A-Z được mã hóa thành số với ánh xạ `'A' -> 1, 'B' -> 2, ..., 'Z' -> 26`. Cho một chuỗi số `s`, trả về số cách giải mã nó.  
**Ví dụ:** `"226"` → 3 (BBF, BZ, VF)  
**Yêu cầu:** Quy hoạch động O(n).

---

### Ngày 29: Coin Change
**Đề bài:** Cho mảng `coins` chứa mệnh giá các đồng xu (số lượng không giới hạn) và số `amount`, tính số đồng xu ít nhất để tạo thành số tiền đó. Nếu không thể, trả về -1.  
**Ví dụ:** `coins = [1,2,5], amount = 11` → 3 (5+5+1)  
**Yêu cầu:** Quy hoạch động O(amount * n).

---

### Ngày 30: Burst Balloons (Hard)
**Đề bài:** Cho n quả bóng bay, mỗi quả có số điểm `nums[i]`. Khi bạn làm nổ quả bóng `i`, bạn nhận được số coin = `nums[i-1] * nums[i] * nums[i+1]` (nếu không có bóng bên trái/phải thì coi là 1). Tìm số coin tối đa có thể thu được khi nổ tất cả.  
**Ví dụ:** `[3,1,5,8]` → 167 (thứ tự nổ: 1,5,3,8 hoặc 1,5,8,3)  
**Yêu cầu:** Quy hoạch động đoạn O(n³).

---

## ⚙️ Hướng dẫn sử dụng
1. Clone repo về máy.
2. Mỗi file `.cpp` là một chương trình độc lập. Biên dịch với `g++ -std=c++11 DayXX_TenBai.cpp -o run`.
3. Chạy `./run` để xem kết quả test mẫu.
4. Tự thêm các test case khác để kiểm tra.

## 🌟 Đóng góp
Hãy tự do gửi pull request để cải thiện code, thêm test case hoặc dịch sang ngôn ngữ khác.

---

**Let’s code every day and master DSA together! 🚀**
