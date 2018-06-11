import json

with open('data.json') as json_file:  
    data = json.load(json_file)
print (data)



#########################################################

def is_json(myjson):
    try:
        json_object = json.loads(myjson)
    except ValueError, e:
        return False
    return True

print is_json("{}")                          #prints True
print is_json("{asdf}")                      #prints False
print is_json('{ "age":100}')                #prints True
print is_json("{'age':100 }")                #prints False
print is_json("{\"age\":100 }")              #prints True
print is_json('{"age":100 }')                #prints True
print is_json('{"foo":[5,6.8],"foo":"bar"}') #prints True




