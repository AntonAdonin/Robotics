from setuptools import find_packages
from setuptools import setup

setup(
    name='task9_pkg',
    version='0.0.0',
    packages=find_packages(
        include=('task9_pkg', 'task9_pkg.*')),
)
