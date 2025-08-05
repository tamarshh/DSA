class Solution:
    def minOperations(self, boxes: str) -> List[int]:
        
        n = len(boxes)
        answer = []

        for i in range(n):
            moves = 0
            for j in range(n):
                if boxes[j] == '1':
                    moves += abs(i - j)
            answer.append(moves)

        return answer

        