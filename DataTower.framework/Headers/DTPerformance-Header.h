//
//  DeviceUtile-Header.h
//  ROIQueryCore
//
//  Created by 施均幸 on 2022/10/31.
//
#import <Foundation/Foundation.h>


@interface DTPerformance : NSObject
+ (NSString *)getFreeMemory;
+ (NSString *)getFreeDisk;
+ (NSNumber *)getFPS;
+ (NSString *)networkType;
+ (NSDictionary *)getCarrier;
@end
