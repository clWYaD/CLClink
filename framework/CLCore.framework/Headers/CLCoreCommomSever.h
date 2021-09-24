//
//  CLCoreUpLoadSever.h
//  CLCore
//
//  Created by 陈玉乐 on 2021/3/4.
//  Copyright © 2021 KevinChien. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CLCore/CLCoreHttpResopnse.h>


typedef void(^CLCoreNetWorkingComplete) (CLCoreHttpResopnse * _Nullable httpResopnse);

NS_ASSUME_NONNULL_BEGIN

@interface CLCoreCommomSever : NSObject



/// 获取数据(默认请求form,返回json 超时4秒,自动加签名)
/// @param url url
/// @param params 参数
/// @param complecte 完成回调
+(void)dataWithURL:(NSString *)url
          paramers:(NSDictionary *)params
          complect:(CLCoreNetWorkingComplete )complecte;




/// 获取数据 (默认form,返回json，自动加签名)
/// @param url url
/// @param params 参数
/// @param timeOut 超时时间
/// @param complecte 完成回调
+(void)dataWithURL:(NSString *)url
          paramers:(NSDictionary *)params
           timeOut:(NSInteger )timeOut
          complect:(CLCoreNetWorkingComplete)complecte;




/// 获取数据 (默认form,返回json)
/// @param url url
/// @param params 参数
/// @param timeOut 超时时间
/// @param isSign 加签名
/// @param complecte 完成回调
+(void)dataWithURL:(NSString *)url
          paramers:(NSDictionary *)params
           timeOut:(NSInteger )timeOut
            isSign:(BOOL )isSign
          complect:(CLCoreNetWorkingComplete)complecte;



/// 日志上传
/// @param appkey appkey
/// @param type SDK 类型
/// @param version SDK 版本
/// @param logType 日志类型
/// @param content 上报的数据
/// @param result 上报的结果
+(void)updateLogWithAppkey:(NSString *)appkey
                   sdkType:(NSString *)type
                sdkVersion:(NSString *)version
                   logType:(NSInteger )logType
                   content:(NSArray <NSDictionary<NSString *,NSString* >*>*)content
                    result:(void (^)(BOOL isSuccess ,NSError * _Nullable error))result;


@end

NS_ASSUME_NONNULL_END
