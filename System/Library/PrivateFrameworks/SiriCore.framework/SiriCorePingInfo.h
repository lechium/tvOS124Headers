/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriCore/SiriCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMapTable;

@interface SiriCorePingInfo : NSObject <NSCopying> {

	NSMapTable* _outstandingPings;
	long long _pingAcknowledgedCount;
	double _avgPingTime;

}

@property (nonatomic,readonly) long long pingAcknowledgedCount;              //@synthesize pingAcknowledgedCount=_pingAcknowledgedCount - In the implementation block
@property (nonatomic,readonly) double avgPingTime;                           //@synthesize avgPingTime=_avgPingTime - In the implementation block
-(void)markPingSentWithIndex:(long long)arg1 ;
-(void)markPongReceivedWithIndex:(long long)arg1 ;
-(unsigned long long)numberOfUnacknowledgedPings;
-(long long)pingAcknowledgedCount;
-(double)avgPingTime;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

