/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol HomeKitEventRemoteLoginMetricProtocol;
@class NSString, HMDLogEvent;

@interface HMDRemoteLoginInitiatorSession : HMFObject {

	NSString* _sessionID;
	HMDLogEvent*<HomeKitEventRemoteLoginMetricProtocol> _metric;

}

@property (nonatomic,readonly) NSString * sessionID;                                                  //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) HMDLogEvent*<HomeKitEventRemoteLoginMetricProtocol> metric;              //@synthesize metric=_metric - In the implementation block
-(NSString *)sessionID;
-(id)initWithSessionID:(id)arg1 ;
-(HMDLogEvent*<HomeKitEventRemoteLoginMetricProtocol>)metric;
-(void)setMetric:(HMDLogEvent*<HomeKitEventRemoteLoginMetricProtocol>)arg1 ;
-(void)dealloc;
-(id)description;
@end

