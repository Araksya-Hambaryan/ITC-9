import json
from random import choice
def gen_key():
    key1 = ''
    key2 = ''

    leters = ['a','b','c','d','e','f']
    nums = ['1','2','3','4','5','6','7','8','9']

    while len(key1) != 5:
	key1 = key1 + choice(leters)

    while len(key2) != 7:
	key2 = key2 + choice(nums)

    key = {'key1' : key1, 'key2' : key2}

    return key

def creat_json(key_obj):
    try:
	data = json.load(open('key.json'))
    except:
	data = []
 
    data.append(key_obj)
    with open ('key.json', 'w') as file:
	json.dump(data,file,indent=2)


for i in range(3):
    creat_json(gen_key())

