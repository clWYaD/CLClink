//
//  CLCoreLog.h
//  CLCore
//
//  Created by 陈玉乐 on 2021/3/2.
//  Copyright © 2021 KevinChien. All rights reserved.
//

#import <Foundation/Foundation.h>


#define CLLogs(format, ...)  if (CLCoreLog.logsEnable) {\
    NSLog(format, ##__VA_ARGS__);\
}

NS_ASSUME_NONNULL_BEGIN

@interface CLCoreLog : NSObject

@property (nonatomic ,assign, class) BOOL logsEnable;


@end

NS_ASSUME_NONNULL_END
