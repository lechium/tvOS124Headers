/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseAceObject.h>

@class NSData, NSString;

@interface SACFScriptEncryptionParameters : SABaseAceObject

@property (nonatomic,copy) NSData * encryptionKey; 
@property (nonatomic,copy) NSData * hmac; 
@property (nonatomic,copy) NSData * hmacKey; 
@property (nonatomic,copy) NSData * initializationVector; 
@property (nonatomic,copy) NSString * type; 
+(id)scriptEncryptionParameters;
+(id)scriptEncryptionParametersWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSData *)encryptionKey;
-(void)setEncryptionKey:(NSData *)arg1 ;
-(NSData *)hmac;
-(void)setHmac:(NSData *)arg1 ;
-(NSData *)hmacKey;
-(void)setHmacKey:(NSData *)arg1 ;
-(NSData *)initializationVector;
-(void)setInitializationVector:(NSData *)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
@end

