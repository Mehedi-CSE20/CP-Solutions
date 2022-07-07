input = input().split(" ")
update = len(list(dict.fromkeys(input)))        # Dictionary can't have duplicate keyWords !
if update != len(input):
    print(len(input)-update)
else:
    print("0")