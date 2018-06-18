import unittest
import Meliq
example='{"key":"sdasd","asd":10}'
example1='{"key":11,"kee":"fde"}'
example2='{"key:"sdasd","asd:10}'
example3='{"key{}:"hhh", "jjj": "ooo"}'

class TestMeliq(unittest.TestCase):
    def test1(self):
        result = Meliq.validOrInvalid(example)
        self.assertEqual(1, result)
    def test2(self):
        result = Meliq.validOrInvalid(example1)
        self.assertEqual(1, result)
    def test2(self):
        result = Meliq.validOrInvalid(example2)
        self.assertEqual(0, result)
    def test3(self):
        result = Meliq.validOrInvalid(example3)
        self.assertEqual(0, result)


