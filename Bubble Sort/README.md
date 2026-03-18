# Bubble Sort $O(n^2)$
> Sắp xếp nổi bọt

Sắp xếp nổi bọt là một thuật toán sắp xếp cơ bản trong các thuật toán sắp xếp mà chúng ta sẽ gặp trong quá trình học và làm bài tập.

Hãy tưởng tượng đơn giản khi siêu nước hoặc một nồi nước đang sôi, chúng ta sẽ thấy hiện tượng bọt khí nổi lên trên bề mặt của mặt chất lỏng, qua đó cho ta hình dung ra một hiện tượng đó là những phần nhẹ ( có giá trị nhỏ ) sẽ nổi lên trên trong khi đó các phần tử cao (có giá trị lớn) sẽ chìm dần xuống dưới.

 Dựa trên ý tưởng này chúng ta sẽ hình dung phần nào các mà thuật toán **bubble sort** hoạt động.
## Ví dụ 
Dãy số: 3,4,1,2
|Step | array  |
|:---:|:-----: |
| 0   | 3,4,1,2| 
| 1   | 3,1,2,4| 
| 2   | 1,2,3,4|

Giải thích:
- Ta xét từng cặp số liền kề, nếu số đằng sau nhỏ hơn số đằng trước, ta sẽ thực hiện đổi vị trí hai số đó

Tính tay:

Bước 1:
- xét cặp số {3,4} : 4 > 3 -> không làm gì
- xét cặp số {4,1} : 1 < 4 -> đổi chỗ cho 1 và 4 | 3,1,4,2
- xét cặp số {4,2} : 2 < 4 -> đổi chỗ cho 2 và 4 | 3,1,2,4

Lúc này ta không thể xét cặp số nữa -> hết bước 1

## Sắp xếp nổi bọt sẽ có độ phức tạp
$$(n-1)+(n-2)+...+1 = \frac{n(n-1)}{2} = \frac{n^2-n}{2} \approx n^2$$
-> Độ phức tạp thuật toán là $O(n^2)$

Trong trường hợp tốt nhất sẽ có độ phức tạp thuật toán là $O(n)$