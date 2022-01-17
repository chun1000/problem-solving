class SegmentTree:
    def __init__(self, array):
        self.array_len = len(array)
        self.number = 4*(len(array))
        self.segment_tree = [0 for _ in range(0, self.number)]
        self.construct_segment_tree(array, 0, len(array)-1, 1)


    def construct_segment_tree(self, array, start, end, node):
        if start == end:
            self.segment_tree[node] = array[start]
            return self.segment_tree[node]
        
        mid = (start + end) // 2
        self.segment_tree[node] = self.construct_segment_tree(array, start, mid, node*2) + self.construct_segment_tree(array, mid+1, end, node*2+1)
        return self.segment_tree[node]


    def get_sum(self, left, right):
        return self.recursive_sum(0, self.array_len -1, 1, left, right)

    def recursive_sum(self, start, end, node, left, right):
        if left > end or right < start:
            return 0
        if left <= start and end <= right:
            return self.segment_tree[node]
        mid = (start + end) // 2
        return self.recursive_sum(start, mid, node*2, left, right) + self.recursive_sum(mid+1, end, node*2 + 1, left, right)

    def find_minimum(self, left, right):