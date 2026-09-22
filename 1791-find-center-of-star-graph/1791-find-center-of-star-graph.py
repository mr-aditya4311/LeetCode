class Solution:
    def findCenter(self, edge: list[list[int]]) -> int:
        return (set(edge[0])&(set(edge[1]))).pop()
        