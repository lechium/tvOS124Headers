/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TKTokenDriverDelegate, OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSDictionary, NSString;

@interface TKTokenDriver : NSObject {

	NSMutableDictionary* _contexts;
	id<TKTokenDriverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _tokens;
	NSDictionary* _extensionAttributes;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (retain) NSMutableDictionary * tokens;                      //@synthesize tokens=_tokens - In the implementation block
@property (readonly) NSString * classID; 
@property (retain) NSDictionary * extensionAttributes;                //@synthesize extensionAttributes=_extensionAttributes - In the implementation block
@property (__weak) id<TKTokenDriverDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
+(id)driver;
-(void)setTokens:(NSMutableDictionary *)arg1 ;
-(id)tokenIDForInstanceID:(id)arg1 ;
-(NSString *)classID;
-(void)addTokenDriverContext:(id)arg1 ;
-(void)getTokenEndpointWithAttributes:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)releaseTokenWithTokenID:(id)arg1 ;
-(void)setExtensionAttributes:(NSDictionary *)arg1 ;
-(void)getTokenWithAttributes:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)invalidateToken:(id)arg1 ;
-(NSDictionary *)extensionAttributes;
-(id)init;
-(void)setDelegate:(id<TKTokenDriverDelegate>)arg1 ;
-(id<TKTokenDriverDelegate>)delegate;
-(NSMutableDictionary *)tokens;
-(NSObject*<OS_dispatch_queue>)queue;
@end

