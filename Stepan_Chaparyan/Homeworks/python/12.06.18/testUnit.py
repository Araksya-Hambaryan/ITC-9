import unittest
import Calc

class TestAdd(unittest.TestCase):
    def test_add_8_2(self):
        res = Calc.add(8,2)
        self.assertEqual(10, res)
    def test_add_8_3(self):
        res = Calc.add(8,3)
        self.assertEqual(11, res)
    def test_add_8_1(self):
        res = Calc.add(8,-1)
        self.assertEqual(7, res)
