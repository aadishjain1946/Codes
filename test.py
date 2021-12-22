import json

myDictionary = {'name': 'ABCD', 'phone': 1234567890, 'company': 'XYZ'}
app_json = json.dumps(myDictionary)
print("Dictionary:", myDictionary)
print("JSON:", app_json)
