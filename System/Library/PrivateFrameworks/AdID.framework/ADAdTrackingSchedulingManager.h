/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol NSObject;
@class APSConnection, NSString;

@interface ADAdTrackingSchedulingManager : NSObject <APSConnectionDelegate> {

	BOOL _isConfigRequestInFlight;
	id<NSObject> _storeFrontNotifyToken;
	id<NSObject> _accountChangedNotifyToken;
	APSConnection* _pushConnection;

}

@property (nonatomic,retain) id<NSObject> storeFrontNotifyToken;                  //@synthesize storeFrontNotifyToken=_storeFrontNotifyToken - In the implementation block
@property (nonatomic,retain) id<NSObject> accountChangedNotifyToken;              //@synthesize accountChangedNotifyToken=_accountChangedNotifyToken - In the implementation block
@property (nonatomic,retain) APSConnection * pushConnection;                      //@synthesize pushConnection=_pushConnection - In the implementation block
@property (assign,nonatomic) BOOL isConfigRequestInFlight;                        //@synthesize isConfigRequestInFlight=_isConfigRequestInFlight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)isAdEnabledLocality;
-(void)handleAccountChange;
-(void)refreshConfiguration:(/*^block*/id)arg1 ;
-(void)runOnFirstUnlock:(/*^block*/id)arg1 ;
-(void)registerForLockStateNotification;
-(void)handleConfiguration;
-(void)pushEnable;
-(void)forceExpiration;
-(BOOL)isConfigRequestInFlight;
-(void)setIsConfigRequestInFlight:(BOOL)arg1 ;
-(id)currentBundleID;
-(void)pushDisable;
-(id<NSObject>)storeFrontNotifyToken;
-(void)setStoreFrontNotifyToken:(id<NSObject>)arg1 ;
-(id<NSObject>)accountChangedNotifyToken;
-(void)setAccountChangedNotifyToken:(id<NSObject>)arg1 ;
-(void)setPushConnection:(APSConnection *)arg1 ;
-(APSConnection *)pushConnection;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end

