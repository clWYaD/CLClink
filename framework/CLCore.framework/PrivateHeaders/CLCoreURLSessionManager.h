//
//  CLCoreURLSessionManager.h
//  CLCore
//
//  Created by 陈玉乐 on 2021/3/5.
//  Copyright © 2021 KevinChien. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CLCore/CLCoreURLResponseSerialization.h>

NS_ASSUME_NONNULL_BEGIN

@interface CLCoreURLSessionManager : NSObject

@property (readonly, nonatomic, strong) NSURLSession *session;

@property (readonly, nonatomic, strong) NSOperationQueue *operationQueue;

@property (nonatomic, strong) id <CLCoreURLResponseSerialization> responseSerializer;

@property (nonatomic, strong, nullable) dispatch_queue_t completionQueue;

- (instancetype)initWithSessionConfiguration:(nullable NSURLSessionConfiguration *)configuration NS_DESIGNATED_INITIALIZER;


-(NSURLSessionDataTask *)dataTaskWithRequest:(NSURLRequest *)request
                          completionHandler:(nullable void (^)(NSURLResponse *response, id _Nullable responseObject,  NSError * _Nullable error))completionHandler;

@end

NS_ASSUME_NONNULL_END
