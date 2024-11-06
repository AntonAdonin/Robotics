from task9_pkg.srv import FullNameSumService

import rclpy
from rclpy.node import Node

class MinimalService(Node):

    def __init__(self):
        super().__init__('service_name')
        self.srv = self.create_service(FullNameSumService, 'sum_full_name', self.sum_callback)

    def sum_callback(self, request, response):
        response.full_name = request.last_name + ' ' + request.name + ' ' + request.first_name 
        return response

def main():
    rclpy.init()
    
    service = MinimalService()
    
    rclpy.spin(service)
    
    rclpy.shutdown()

if __name__ == '__main__':
    main()