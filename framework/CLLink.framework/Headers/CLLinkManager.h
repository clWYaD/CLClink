//
//  CLLinkManager.h
//  CLLink
//
//  Created by 陈玉乐 on 2021/1/18.
//

#import <Foundation/Foundation.h>
#import <CLCore/CLCoreManager.h>

NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSInteger,LinkType) {
    
    LinkTypeInstall     =0,
    LinkTypeOpen          ,
    
};


@interface CLLinkResponse : NSObject

@property (nonatomic ,copy) NSString *url;

@property (nonatomic ,assign) LinkType type;

@property (nonatomic ,copy) NSDictionary *parmas;

@end


@interface CLLinkManager : NSObject


/**
 *注册URLSchme/通用链接回调函数
 *@param listener 回调block
 *@discussion  建议在程序启动时调用
 */

+(void)registerWakeUpCallBack:(void (^)(CLLinkResponse *linkResponse))listener;


/**
 * 处理 URLScheme
 * @param url 系统回调的URL
 * @returen bool 该URL是否能被CLLink处理
 * @discussion 需要在 application:(UIApplication *)app openURL:(NSURL *)url options:(nonnull NSDictionary *)options 中调用
 */

+(BOOL)wakeUpLink:(NSURL *)url;


/**
 *处理通用链接
 *@param userActivity 系统回调的 NSUserActivity 对象
 *@return bool 该userActivity是否能被CLLink处理
 *@discussion 需要在application:(UIApplication *)application continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void (^)(NSArray * _Nullable))restorationHandler 中调用
 */
+(BOOL)continueUserActivity:(nonnull NSUserActivity *)userActivity;



/**
 *获取无码邀请参数
 *@param key 需要获取的参数key;为空则返回所有的邀请参数，不为空则返回key值对应参数
 *@param result 结果回调
 */
+(void)getInvitationParams:(nullable NSString *)key
                    result:(void (^) (NSDictionary *parmas))result;



/// sdk版本
+(NSString *)version;

@end

NS_ASSUME_NONNULL_END
