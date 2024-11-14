n = int(input())
nums = input().split()

for i in range(1, n + 1):
    if nums[i - 1].isdigit() and int(nums[i - 1]) != i:
        print("something is fishy")
        break
else:
    print("makes sense")