/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTraffic/ATSessionTask.h>

@protocol ATClient, OS_dispatch_queue;
@class NSString, NSObject;

@interface ATLegacySyncSessionTask : ATSessionTask {

	NSString* _dataClass;
	id<ATClient> _client;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned _grappaSessionID;

}

@property (nonatomic,copy,readonly) NSString * dataClass;              //@synthesize dataClass=_dataClass - In the implementation block
@property (assign,nonatomic) unsigned grappaSessionID;                 //@synthesize grappaSessionID=_grappaSessionID - In the implementation block
-(NSString *)dataClass;
-(id)sessionGroupingKey;
-(unsigned)grappaSessionID;
-(void)_finishWithError:(id)arg1 shouldAddAssetTask:(BOOL)arg2 ;
-(id)initWithDataClass:(id)arg1 ;
-(void)prepareWithHostAnchor:(id)arg1 version:(id)arg2 ;
-(void)reconcileWithAnchor:(id)arg1 syncType:(unsigned)arg2 ;
-(void)setGrappaSessionID:(unsigned)arg1 ;
-(void)cancel;
-(void)start;
@end

