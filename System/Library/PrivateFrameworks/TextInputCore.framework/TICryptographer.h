/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TICryptographing.h>

@protocol OS_dispatch_queue;
@class NSData, NSObject, NSString;

@interface TICryptographer : NSObject <TICryptographing> {

	NSData* _deviceSalt;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _cachedRecipientName;
	NSString* _cachedRecipientDigest;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSData * deviceSalt; 
@property (nonatomic,copy) NSString * cachedRecipientName;                              //@synthesize cachedRecipientName=_cachedRecipientName - In the implementation block
@property (nonatomic,copy) NSString * cachedRecipientDigest;                            //@synthesize cachedRecipientDigest=_cachedRecipientDigest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)singletonInstance;
+(id)sharedCryptographer;
+(void)setSharedCryptographer:(id)arg1 ;
-(id)stringDigestForName:(id)arg1 ;
-(NSData *)deviceSalt;
-(NSString *)cachedRecipientName;
-(void)setCachedRecipientName:(NSString *)arg1 ;
-(NSString *)cachedRecipientDigest;
-(void)setCachedRecipientDigest:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
@end

