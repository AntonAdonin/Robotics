import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/antonadonin/Robotics/lab3/ex02/install/action_turtle_commands'
