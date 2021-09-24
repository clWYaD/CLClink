//
//  CLCoreURLResponseSerialization.h
//  CLCore
//
//  Created by 陈玉乐 on 2021/3/5.
//  Copyright © 2021 KevinChien. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@protocol CLCoreURLResponseSerialization <NSObject>

- (nullable id)responseObjectForResponse:(nullable NSURLResponse *)response
                          data:(nullable NSData *)data
                         error:(NSError * _Nullable __autoreleasing *)error NS_SWIFT_NOTHROW;
@end



@interface CLCoreURLResponseSerizaler : NSObject <CLCoreURLResponseSerialization>

- (instancetype)init;

+ (instancetype)serializer;

@property (nonatomic, copy, nullable) NSIndexSet *acceptableStatusCodes;

@property (nonatomic, copy, nullable) NSSet <NSString *> *acceptableContentTypes;

- (BOOL)validateResponse:(nullable NSHTTPURLResponse *)response
                    data:(nullable NSData *)data
                   error:(NSError * _Nullable __autoreleasing *)error;

@end


@interface CLCoreURLJSONResponseSerizaler : CLCoreURLResponseSerizaler

@property (nonatomic, assign) NSJSONReadingOptions readingOptions;

@property (nonatomic, assign) BOOL removesKeysWithNullValues;

+ (instancetype)serializerWithReadingOptions:(NSJSONReadingOptions)readingOptions;

@end


NS_ASSUME_NONNULL_END
