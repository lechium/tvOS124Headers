/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKit/AKToken.h>

@class NSMutableDictionary, NSData, NSString;

@interface AKMasterToken : AKToken {

	NSMutableDictionary* _properties;

}

@property (nonatomic,readonly) NSData * sessionKey; 
@property (nonatomic,readonly) NSData * encryptedSessionKey; 
@property (nonatomic,readonly) NSData * externalizedVersion; 
@property (nonatomic,readonly) NSString * externalizedVersionString; 
+(id)tokenWithExternalizedVersion:(id)arg1 lifetime:(id)arg2 ;
+(id)tokenWithExternalizedVersionString:(id)arg1 ;
-(void)_setSessionKey:(id)arg1 ;
-(void)_setEncryptedSessionKey:(id)arg1 ;
-(NSData *)externalizedVersion;
-(BOOL)updateWithHTTPURLResponse:(id)arg1 ;
-(NSData *)sessionKey;
-(NSData *)encryptedSessionKey;
-(NSString *)externalizedVersionString;
-(id)initWithAppleID:(id)arg1 altDSID:(id)arg2 ;
-(id)init;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
@end

