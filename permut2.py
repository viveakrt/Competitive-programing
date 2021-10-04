while True:
	 # read input
	 n = int(input())
	 if(n > 0):

		perm = [None];
		inv_perm = [None]*(n+1);
		 	 #print inv_perm;)
		i = 1;
		for num in map(int,raw_input().split()):
			perm.append(num);
		 	inv_perm[num] = i;
		 	i += 1;

		if perm == inv_perm:
			print "ambiguous";
		else:
		 	print "not ambiguous";

	 else:
		break;

