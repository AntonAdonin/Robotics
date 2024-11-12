from setuptools import find_packages, setup

package_name = 'my_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/launch.py']),
        ('share/' + package_name + '/config', ['config/carrot.rviz']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='antonadonin',
    maintainer_email='adonin-2004@mail.ru',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'turtle1_tf2_broadcaster = my_pkg.turtle1_tf2_broadcaster:main',
            'turtle2_tf2_broadcaster = my_pkg.turtle2_tf2_broadcaster:main',
            'carrot_tf2_broadcaster = my_pkg.carrot_tf2_broadcaster:main',
            'turtle2_tf2_listener = my_pkg.turtle2_tf2_listener:main',
        ],
    },
)
