/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomNetworkUsage/SymptomNetworkUsage-Structs.h>
#import <SymptomNetworkUsage/NWUsageProtocolSnapshot.h>

@class NSString, NSDate, NSUUID, NSData;

@interface NWUsageUDPSnapshot : NWUsageProtocolSnapshot {

	NSString* _processName;
	NSDate* _startTimestamp;
	NSDate* _snapshotTimestamp;
	NSUUID* _uuid;
	NSUUID* _euuid;
	NSUUID* _vuuid;
	NSData* _localAddress;
	NSData* _remoteAddress;
	nstat_udp_descriptor* _descriptor;

}
-(unsigned)trafficClass;
-(unsigned)interfaceIndex;
-(id)provider;
-(int)processID;
-(id)remoteAddress;
-(id)localAddress;
-(id)euuid;
-(id)vuuid;
-(double)flowDuration;
-(BOOL)interfaceAWDL;
-(int)epid;
-(id)flowStartTimestamp;
-(BOOL)interfaceCellular;
-(BOOL)interfaceWifi;
-(BOOL)interfaceWired;
-(unsigned long long)networkActivityMapPart1;
-(unsigned long long)networkActivityMapPart2;
-(unsigned long long)networkActivityMapStartTime;
-(id)initWithUpdate:(const nstat_msg_src_update_convenient*)arg1 startTime:(double)arg2 flowFlags:(unsigned)arg3 ;
-(id)initWithUpdate:(const nstat_msg_src_update_convenient*)arg1 startTime:(double)arg2 flowFlags:(unsigned)arg3 previously:(update_subset_for_deltas*)arg4 ;
-(BOOL)flowUsesChannels;
-(unsigned)receiveBufferSize;
-(unsigned)receiveBufferUsed;
-(unsigned long long)uniqueProcessID;
-(unsigned long long)eupid;
-(BOOL)interfaceUnknown;
-(BOOL)interfaceLoopback;
-(BOOL)interfaceExpensive;
-(unsigned long long)flowStartContinuousTime;
-(id)flowSnapshotTimestamp;
-(id)uuid;
-(id)processName;
@end
