//
//  CLCoreHTTPManager.h
//  CLCore
//
//  Created by 陈玉乐 on 2021/3/5.
//  Copyright © 2021 KevinChien. All rights reserved.
//

#import <CLCore/CLCoreURLSessionManager.h>
#import <CLCore/CLCoreURLRequestSerialization.h>

NS_ASSUME_NONNULL_BEGIN

@interface CLCoreHTTPManager : CLCoreURLSessionManager

@property (readonly, nonatomic, strong, nullable) NSURL *baseURL;

@property (nonatomic, strong) CLCoreURLRequestSerializer <CLCoreURLRequestSerialization> * requestSerializer;

@property (nonatomic, strong) CLCoreURLResponseSerizaler <CLCoreURLResponseSerialization> *responseSerializer;

+ (instancetype)manager;

- (instancetype)initWithBaseURL:(nullable NSURL *)url;

- (instancetype)initWithBaseURL:(nullable NSURL *)url
           sessionConfiguration:(nullable NSURLSessionConfiguration *)configuration;


-(nullable NSURLSessionDataTask *)POST:(NSString *)URLString
                            parameters:(nonnull NSDictionary * )parameters
                               success:(void (^) (id reponseObjct))success
                                 faild:(void (^)(NSError *error))faild;

@end

NS_ASSUME_NONNULL_END
