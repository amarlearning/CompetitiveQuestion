'''
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
'''
import math
 
t = int(raw_input())
i = 0
while i < t :
	cnt = 0
	mimix = 0
	szNumber = ""
	one, two, three, N = raw_input().split()
	one = str(one)
	two = str(two)
	three = str(three)
	N = int(N)
	szNumber = szNumber + str(one)
	szNumber = szNumber + (str(two)*int(N))
	szNumber = szNumber + str(three)
	cnt += szNumber.count('1')
	j = len(szNumber) - 1
	while j > -1:
		if szNumber[j] == '0':
			cnt += 1
			break
		else:
			while szNumber[j] == '1':
				mimix += 1
				j -= 1
				if j < 0:
				          break
			cnt = cnt - mimix + 1
			break
		j -= 1
	print cnt
	i += 1
