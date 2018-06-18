import unittest
import checkJsonV2

class TestJson(unittest.TestCase):
    def test_1_Breckets(self):
        res = checkJsonV2.checkJson('{ "maps": 10 ,"masks": "valore", "om_points": "value"}')
        self.assertEqual(True, res)

    def test_2_Breckets(self):
        res = checkJsonV2.checkJson(' "maps": 10 ,"masks": "valore", "om_points": "value"}')
        self.assertEqual(False, res)

    def test_3_Coma(self):
        res = checkJsonV2.checkJson('{ "ma,ps": 10 ,"masks":"valore", "om_points": "value"}')
        self.assertEqual(False, res)

    def test_4_Colon(self):
        res = checkJsonV2.checkJson('{ "ma:ps": 10,"masks":"valore", "om_points": "value"}')
        self.assertEqual(False, res)

    def test_5_Duplicate(self):
        res = checkJsonV2.checkJson('{ "maps":10 ,"maps":"valore", "om_points": "value"}')
        self.assertEqual(False, res)

    def test_6_breckets(self):
        res = checkJsonV2.checkJson('{ "maps":10 ,"masks":"valore", "om_points": [value"}')
        self.assertEqual(False, res)

    def test_7_breckets(self):
        res = checkJsonV2.checkJson('{ "maps":10 ,"masks":"valore", "om_points": [value2]}')
        self.assertEqual(True, res)
    
    def test_8_breckets(self):
        res = checkJsonV2.checkJson('{ "maps":10 ,"masks":"valore", "om_points": [value}')
        self.assertEqual(False, res)


if __name__ == "__main__":
    unittest.main()
                        
