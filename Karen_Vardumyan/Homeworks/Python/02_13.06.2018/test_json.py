import unittest
import Json

ex1 = '{"key1":"v1"}'
ex2 = '{key2:"v2"}'
ex3 = '{"00000000000":"hhhhhhhhh"}'
ex4 = '"key4":"v4"'
ex5 = '{"key1":"v1"}'

class TestJson(unittest.TestCase):
    def test_1(self):
	res = Json.check_json(ex1)
	self.assertEqual(1, res)
    def test_2(self):
        res = Json.check_json(ex2)
        self.assertNotEqual(1, res)
    def test_3(self):
        res = Json.check_json(ex3)
        self.assertEqual(1, res)
    def test_4(self):
        res = Json.check_json(ex4)
        self.assertNotEqual(1, res)
    def test_5(self):
        res = Json.check_json(ex5)
        self.assertEqual(1, res)
