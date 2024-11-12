import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/antonadonin/Robotics/lab4/ex02/install/my_pkg'
