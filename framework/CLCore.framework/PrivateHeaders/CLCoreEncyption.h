//
//  CLCoreEncyption.h
//  CLCoreUtils
//
//  Created by KevinChien on 2020/12/21.
//  Copyright © 2020 KevinChien. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CLCoreEncyption : NSObject

#pragma mark - GZIP
+ (nullable NSData *)gzippedData:(NSData * )originalData;
+ (nullable NSData *)gzippedDataWithCompressionLevel:(float)level originalData:(NSData * )originalData;

+ (nullable NSData *)gunzippedData:(NSData * )originalData;
+ (BOOL)isGzippedData:(NSData * )originalData;

#pragma mark - RSA
// return base64 encoded string
+ (NSString *)encryptString:(NSString *)str publicKey:(NSString *)pubKey;
// return base64 encoded Data
+ (NSData *)encryptStringToData:(NSString *)str publicKey:(NSString *)pubKey;
// return raw data
+ (NSData *)encryptData:(NSData *)data publicKey:(NSString *)pubKey;
// return base64 encoded string
+ (NSString *)encryptString:(NSString *)str privateKey:(NSString *)privKey;
// return raw data
+ (NSData *)encryptData:(NSData *)data privateKey:(NSString *)privKey;

// decrypt base64 encoded string, convert result to string(not base64 encoded)
+ (NSString *)decryptString:(NSString *)str publicKey:(NSString *)pubKey;
+ (NSData *)decryptData:(NSData *)data publicKey:(NSString *)pubKey;
+ (NSString *)decryptString:(NSString *)str privateKey:(NSString *)privKey;
+ (NSData *)decryptData:(NSData *)data privateKey:(NSString *)privKey;

#pragma mark - AES
+ (NSData*)aes_encryptData:(NSData*)data keyString:(NSString*)key ivString:(NSString*)iv;
//-----------------
// API (raw data)
//-----------------
+ (NSData*)aes_encryptData:(NSData*)data key:(NSData*)key iv:(NSData*)iv;
+ (NSData*)aes_decryptData:(NSData*)data key:(NSData*)key iv:(NSData*)iv;

#pragma mark - HEX
// 十六进制转换为普通字符串的。
+ (NSString *)stringFromHexString:(NSString *)hexString;
+ (NSString *)hexStringFromString:(NSData *)stringData;

#pragma mark - String Encode
+ (NSString *)clCoreSDKSecurity_UrlEncode:(NSString *)string;

#pragma mark - hmacsha1
+ (NSString *)secretLoginAndMachineCheckhmacsha1:(NSString *)text key:(NSString *)secret;

#pragma mark - md5
+ (nullable NSString *)clCore_md5:(nullable NSString *)str; 

#pragma mark - 接口签名
+ (NSString *)sinParam:(NSDictionary *)params;

@end

NS_ASSUME_NONNULL_END
