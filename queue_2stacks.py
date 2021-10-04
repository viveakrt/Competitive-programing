# Program that implements queue using 2 stacks
# Problem statement: https://www.hackerrank.com/contests/pride-ab-filtering-test-3rd-years/challenges/queue-using-two-stacks
stack1 = [];
stack2 = [];

def enqueue(item):
	stack1.append(item);

def dequeue():
	# if stack2 is empty, move all elements from stack1 to stack2
	if not len(stack2):
		while len(stack1):
			stack2.append(stack1.pop());
	# the topmost element of the stack2 will always contain the first element of the queue
	return stack2.pop();

def display():
	# if stack2 is empty, then the bottom element of stack1 will be the first element in the queue
	if len(stack2):
		print(stack2[len(stack2)-1]);
	else:
		print(stack1[0]);

t = int(input()); # no. of test cases

i = 0;
while i < t:
	query = list(map(int,input().split(' ')));
	if query[0] == 1:
		enqueue(query[1]);
	elif query[0] == 2:
		dequeue();
	else:
		display();
	i += 1;