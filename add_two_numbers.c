/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode * addTwoNumbers(struct ListNode * l1, struct ListNode * l2) {
  int c = 0;
  struct ListNode * r = malloc(sizeof(struct ListNode));
  struct ListNode * x = r;

  while (l1 || l2) {
    if (l1) c += l1 - > val;
    if (l2) c += l2 - > val;
    x - > val = c % 10;
    c /= 10;
    x - > next = 0;
    if (l1) l1 = l1 - > next;
    if (l2) l2 = l2 - > next;
    if (l1 || l2) {
      x - > next = malloc(sizeof(struct ListNode));
      x = x - > next;
    }
  }
  if (c > 0) {
    x - > next = malloc(sizeof(struct ListNode));
    x - > next - > val = c;
    x - > next - > next = 0;
  }
  return r;
}