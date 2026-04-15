class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        stored = set()
        for n in nums:
            if n in stored:
                return True
            stored.add(n)
        return False