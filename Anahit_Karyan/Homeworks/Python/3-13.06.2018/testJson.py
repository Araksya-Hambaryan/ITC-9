import validateJson
import unittest

class TestJsonFormat(unittest.TestCase):
    def test_checkKey(self):
        key = ["key1", "key2", "key3"]
        result = validateJson.validateKey(key)
        self.assertEqual(True, result)

   def test_checkRepeatingKeys(self):
        key = ["key1", "key1", "key3"]
        result = validateJson.verifyKeysRepeating(key)
        self.assertEqual(False, result)
    
    def test_checkCountKeysAndValues(self):
        key = ["key1", "key2", "key3"]
        values = ["value1", 2,"velue3"]
        result = validateJson.checkCountsOfKeysAndValuesIsEqual(key, values)
        self.assertEqual(False, result)

    def test_checkValue(self):
        values = ["value1",3, "value3"]
        result = validateJson.validateValue(values)
        self.assertEqual(True, result)

    def test_checkValue(self):
        values = [value1, 10, "1234"]
        result = validateJson.validateValue(values)
        self.assertEqual(False, result)
    
    def test_checkValueIsList(self):
        key = ["ke1", "key2", "key3"]
        values = ["value1", 10, "1234"]
        corectJson = '{"key1":"value","key2":[10,"hi",12]}'
        result = validateJson.isJson(corectJson, key, values)
        self.assertEqual(True, result)

    def test_checkValueIsList(self):
        key = ["key1", "key2", "key3"]
        values = ["value1", 10, "1234"]
        incorectJson = '{"key1":"value1,"key1":[7,"val",132}'
        result = validateJson.isJson(incorectJson, key, values)
        self.assertEqual(False, result)

    def test_checkBrackets(self):
        incorectJson = '"key1":"value1,"key1":[5,"val",132'
        result = validateJson.checkBrackets(incorectJson)
        self.assertEqual(False, result)
    
    def test_checkJsonIsEmpty_negative(self):
        values = ["v1", "v2", "v3"]
        incorectJson = '{}'
        result = validateJson.isJson(incorectJson, keys, values)
        self.assertEqual(False, result)

if __name__ == '__main__':
    unittest.main()
