/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary;

@interface CKDDeviceManager : NSObject {

	NSString* _deviceIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _deviceIDs;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deviceIDs;                 //@synthesize deviceIDs=_deviceIDs - In the implementation block
@property (nonatomic,readonly) NSString * deviceIdentifier;                   //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
+(id)sharedManager;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)deviceIdentifier;
-(void)fetchDeviceIdentifierForContext:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_serviceForContext:(id)arg1 ;
-(id)_lookupKeyForContext:(id)arg1 ;
-(NSMutableDictionary *)deviceIDs;
-(id)_savedDeviceIdentifierForContext:(id)arg1 ;
-(void)_saveDeviceIdentifier:(id)arg1 forContext:(id)arg2 ;
-(void)setDeviceIDs:(NSMutableDictionary *)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
@end

