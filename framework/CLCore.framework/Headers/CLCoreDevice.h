//
//  CLCoreDevice.h
//  CLCore
//
//  Created by 陈玉乐 on 2021/3/2.
//  Copyright © 2021 KevinChien. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN



@interface CLCoreDevice : NSObject

/// 设备标识
@property (nonatomic, class, readonly) NSString *did;

/// 设备身份ID
@property (nonatomic, class, readonly) NSString *imei;

/// 国际移动用户识别码
@property (nonatomic, class, readonly) NSString *imsi;

/// SIM卡身份ID
@property (nonatomic, class, readonly) NSString *iccid;

/// appPlatform 1 iOS 2 Androd
@property (nonatomic, class, readonly) NSString *appPlatform;

///  机型名称
@property (nonatomic, class, readonly) NSString *deviceName;

/// 机型型号
@property (nonatomic, class, readonly) NSString *device;

/// 手机名称
@property (nonatomic, class, readonly) NSString *phoneName;

/// 系统版本
@property (nonatomic, class, readonly) NSString *osVersion;

/// rom版本
@property (nonatomic, class, readonly) NSString *romVersion;

///屏幕高度
@property (nonatomic, class, readonly) NSString *deviceHight;

///屏幕宽度
@property (nonatomic, class, readonly) NSString *deviceWidth;

/// 内存大小GB
@property (nonatomic, class, readonly) NSString *memorySize;

/// 设备标识
@property (nonatomic, class, readonly) NSString *oaid;

/// 设备信息唯一id
@property (nonatomic, class, readonly) NSString *tableId;




/// ip地址
@property (nonatomic, class, readonly) NSString *ip;

/// 当前手机网络类型
@property (nonatomic, class, readonly) NSString *currentNetType;

/// 网络格式(手机卡)
@property (nonatomic, class, readonly) NSString *network;

/// ip地址
@property (nonatomic, class, readonly) NSArray *ips;

/// mac地址
@property (nonatomic, class, readonly) NSString *mac;

/// 网络格式信号
@property (nonatomic, class, readonly) NSString *wifidbm;

/// 数据网路格式信号
@property (nonatomic, class, readonly) NSString *dbm;

/// wifi列表
@property (nonatomic, class, readonly) NSString *wifiList;

/// 记录应用安装时间(毫秒)
@property (nonatomic, class, readonly) NSString *installTimeStamp;

@end

NS_ASSUME_NONNULL_END
