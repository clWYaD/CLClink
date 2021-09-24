//
//  CLCoreNetWorkingResopnse.h
//  CLCore
//
//  Created by KevinChien on 2020/12/21.
//  Copyright © 2020 KevinChien. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CLCoreHttpResopnse : NSObject

@property (nonatomic, copy) NSString *code;

@property (nonatomic, copy) NSString * message;

@property (nonatomic, strong) id data;

@property (nonatomic, strong) NSError *error;

@property (nonatomic, readonly, assign) BOOL isSuccess;

@end

NS_ASSUME_NONNULL_END
