import validateJson
import unittest

keys = ["k1", "k2", "k3"]
values = ["value1", 10, "120"]

class TestJsonFormat(unittest.TestCase):
    def test_checkKey_positive(self):
        corectJson = '{"key1":"value1","key2":"value2"}'
        result = validateJson.validateKey(keys)
        self.assertEqual(True, result)

    def test_checkKey_negative(self):
        incorectJson = '{"ke y1":"value1","key2":"value2"}'
        result = validateJson.validateKey(keys)
        self.assertEqual(False, result)
    def test_checkQuotesOfKey_negative(self):
        incorectJson = '{"key1:"value1","key2":"value2"}'
        result = validateJson.validateKey(keys)
        self.assertEqual(False, result)
    def test_checkRepeatingKeys_negative(self):
        incorectJson = '{"key1":"value1","key1":"value2"}'
        result = validateJson.verifyKeysRepeating(keys)
        self.assertEqual(False, result)
    
    def test_checkCountKeysAndValues_negative(self):
        incorectJson = '{"key1":"value1",:"value2"}'
        result = validateJson.checkCountsOfKeysAndValuesIsEqual(keys, values)
        self.assertEqual(False, result)

    def test_checkValue_positive(self):
        corectJson = '{"key1":"100","key2":10}'
        result = validateJson.validateValue(values)
        self.assertEqual(True, result)

    def test_checkValue_negative(self):
        incorectJson = '{"key1":"value1,"key1":"value2"}'
        result = validateJson.validateValue(values)
        self.assertEqual(False, result)
    def test_checkQuotesOfValue_negative(self):
        incorectJson = '{"key1":value1,"key1":"value2"}'
        result = validateJson.validateValue(values)
        self.assertEqual(False, result)
    
    def test_checkValueIsList_positive(self):
        corectJson = '{"key1":"value","key2":[10,"hi",12]}'
        result = validateJson.isJson(corectJson, keys, values)
        self.assertEqual(True, result)

    def test_checkValueIsList_negative(self):
        incorectJson = '{"key1":"value1,"key1":[5,"hi",12}'
        result = validateJson.isJson(incorectJson, keys, values)
        self.assertEqual(False, result)

    def test_checkBrackets_negative(self):
        incorectJson = '"key1":"value1,"key1":[5,"hi",12'
        result = validateJson.checkBrackets(incorectJson)
        self.assertEqual(False, result)

if __name__ == '__main__':
    unittest.main()
