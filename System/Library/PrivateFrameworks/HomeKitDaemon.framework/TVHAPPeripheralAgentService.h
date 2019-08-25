/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PBSBulletinServiceDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol PBSBulletinServiceInterface;
@class PBSBulletin, NSString;

@interface TVHAPPeripheralAgentService : NSObject <PBSBulletinServiceDelegate, HMFLogging> {

	id<PBSBulletinServiceInterface> _bulletinService;
	PBSBulletin* _bulletin;

}

@property (nonatomic,retain) id<PBSBulletinServiceInterface> bulletinService;              //@synthesize bulletinService=_bulletinService - In the implementation block
@property (retain) PBSBulletin * bulletin;                                                 //@synthesize bulletin=_bulletin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedInstance;
-(void)_presentPeripheralHUD:(long long)arg1 name:(id)arg2 ;
-(void)setBulletinService:(id<PBSBulletinServiceInterface>)arg1 ;
-(id<PBSBulletinServiceInterface>)bulletinService;
-(PBSBulletin *)bulletin;
-(void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3 ;
-(void)remoteConnected:(BOOL)arg1 name:(id)arg2 ;
-(void)setBulletin:(PBSBulletin *)arg1 ;
@end

