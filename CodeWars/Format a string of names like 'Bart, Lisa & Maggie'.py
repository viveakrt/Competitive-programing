'''
6 kyu	Format a string of names like 'Bart, Lisa & Maggie'.
https://www.codewars.com/kata/53368a47e38700bd8300030d/train/python

Given: an array containing hashes of names

Return: a string formatted as a list of names separated by commas except for the last two names, which should be separated by an ampersand.

Example:

namelist([ {'name': 'Bart'}, {'name': 'Lisa'}, {'name': 'Maggie'} ])
# returns 'Bart, Lisa & Maggie'

namelist([ {'name': 'Bart'}, {'name': 'Lisa'} ])
# returns 'Bart & Lisa'

namelist([ {'name': 'Bart'} ])
# returns 'Bart'

namelist([])
# returns ''
'''

def namelist(names):
	return f'{", ".join(name["name"] for name in names[:-1])} & {names[-1]["name"]}' if len(names) > 1 else names[0]['name'] if names else ''

print(namelist([{'name': 'Bart'},{'name': 'Lisa'},{'name': 'Maggie'},{'name': 'Homer'},{'name': 'Marge'}]))
