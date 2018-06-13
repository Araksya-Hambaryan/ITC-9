import unittest
import validatejson as json

exampleForBrackets1 = '{"key1":"value1","key2":"value2"}}'
exampleForBrackets2 = '"key1":"value1","key2":"value2"}}'
exampleForBrackets3 = '{"key1":"value1","key2":"value2"'
class TestcheckBrackets(unittest.TeseCase):
    def test_brackets1(self):
        result = json.checkBrackets(exampleForBrackets1)
        self.assertTrue(result)
    def test_brackets2(self):
        result = json.checkBrackets(exampleForBrackets2)
        self.assertFalse(result)
    def test_brackets3(self):
        result = json.checkBrackets(exampleForBrackets3)
        self.assertFalse(result)

exampleForCheckCountKeyValue1 = ["key1","key2","key3","key4"]
exampleForCheckCountKeyValue2 = ["val1","val2","val3","val4"]
exampleForCheckCountKeyValue3 = ["key1","key2","key3","key4"]
exampleForCheckCountKeyValue4 = ["val1","val2","val3"]
exampleForCheckCountKeyValue5 = ["key1","key2","key3"]
exampleForCheckCountKeyValue6 = ["val1","val2","val3","val4"]
class TestcheckCountKeyValueList(unittest.TeseCase):
    def test_count1(self):
        result = json.checkCountKeyValueList(exampleForCheckCountKeyValue1,exampleForCheckCountKeyValue2)
        self.assertTrue(result)
    def test_count2(self):
        result = json.checkCountKeyValueList(exampleForCheckCountKeyValue3,exampleForCheckCountKeyValue4)
        self.assertFalse(result)
    def test_count3(self):
        result = json.checkCountKeyValueList(exampleForCheckCountKeyValue5,exampleForCheckCountKeyValue6)
        self.assertFalse(result)

exampleForCheckRepeatKey1 = ["key1","key2","key3","key4"]
exampleForCheckRepeatKey2 = ["key1","key2","key2","key4"]
exampleForCheckRepeatKey3 = ["key3","key2","key3","key4"]
class TestcheckRepeatKey(unittest.TeseCase):
    def test_repeatKey1(self):
        result = json.checkRepeatKey(exampleForCheckRepeatKey1)
        self.assertTrue(result)
    def test_repeatKey2(self):
        result = json.checkRepeatKey(exampleForCheckRepeatKey2)
        self.assertFalse(result)
    def test_repeatKey3(self):
        result = json.checkRepeatKey(exampleForCheckRepeatKey3)
        self.assertFalse(result)
