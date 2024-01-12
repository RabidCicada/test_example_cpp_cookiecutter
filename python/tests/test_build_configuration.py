import unittest
import example_cpp_cookiecutter



class TestBuildConfig(unittest.TestCase):
    
    def test_version(self):
        config = example_cpp_cookiecutter.BuildConfiguration
        self.assertEqual(config.VERSION_MAJOR, 0)
        self.assertEqual(config.VERSION_MINOR, 1)
        self.assertEqual(config.VERSION_PATCH, 0)

