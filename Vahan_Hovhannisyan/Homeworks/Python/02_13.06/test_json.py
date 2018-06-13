import unittest
import json

example1='{"key1":"V1"}'
example2='{"key2":"V2"'
example3='{"key3":"V3",}'
example4='{"key4":"V4""key5":"V5"}'
example5='{"key7":"V7",,"key8":"V8"}'
example6='{"key9":"V9"_Vahan_"key10":"V10"}' #Karen's code considers this to be true (returns 1), so the test found a bug! :)


class TestJson(unittest.TestCase):

    def test_check_json(self):
        result = json.check_json(example1)
        self.assertEqual(1,result)
    def test_check_json(self):
        result = json.check_json(example2)
        self.assertEqual(0,result)
    def test_check_json(self):
        result = json.check_json(example3)
        self.assertEqual(0,result)
    def test_check_json(self):
        result = json.check_json(example4)
        self.assertEqual(0,result)
    def test_check_json(self):
        result = json.check_json(example5)
        self.assertEqual(0,result)
    def test_check_json(self):
        result = json.check_json(example6)
        self.assertEqual(0,result)

if __name__ == '__main__':
    unittest.main()
