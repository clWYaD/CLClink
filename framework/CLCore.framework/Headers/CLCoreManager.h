//
//  CLCoreManager.h
//  CLCore
//
//  Created by KevinChien on 2021/1/5.
//  Copyright © 2021 KevinChien. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CLCore/CLCoreModuleProtocol.h>


NS_ASSUME_NONNULL_BEGIN

@interface CLCoreManager : NSObject

/// SDK初始化
/// @param appid 在SDK平台创建应用成功后，分配的appid
+ (void)initWithAppid:(NSString *)appid;

/// 日志输出控制（默认关闭）
/// @param enable 开关标识
+ (void)printConsoleEnable:(BOOL)enable;

/// 日志输出标志
+ (BOOL)logsEnable;

/// 当前模块版本号
+ (NSString *)clCoreVersion;

/// 模块注册
/// @param module 模块
+ (void)registModule:(Class<CLCoreModuleProtocol>)module;

/// 注册的模块
+ (NSArray *)registModuleArray;

@end



NS_ASSUME_NONNULL_END
