//
//  CLCoreModuleProtocol.h
//  CLCore
//
//  Created by KevinChien on 2021/1/8.
//  Copyright © 2021 KevinChien. All rights reserved.
//

#ifndef CLCoreModuleProtocol_h
#define CLCoreModuleProtocol_h

@protocol CLCoreModuleProtocol <NSObject>

+(void)initWithAppkey:(NSString *)appkey;

+(void)initWithAppkey:(NSString *)appkey
                 args:(NSDictionary *)args;

@end

#endif /* CLCoreModuleProtocol_h */
