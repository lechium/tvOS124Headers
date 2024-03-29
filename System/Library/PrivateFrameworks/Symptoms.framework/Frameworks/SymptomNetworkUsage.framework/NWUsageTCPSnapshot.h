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

@interface NWUsageTCPSnapshot : NWUsageProtocolSnapshot {

	NSString* _congestionAlgorithm;
	NSDate* _startTimestamp;
	NSDate* _snapshotTimestamp;
	NSString* _processName;
	NSUUID* _uuid;
	NSUUID* _euuid;
	NSUUID* _vuuid;
	NSData* _localAddress;
	NSData* _remoteAddress;
	const nstat_tcp_descriptor* _descriptor;

}

@property (readonly) double rttMinimum; 
@property (readonly) double rttAverage; 
@property (readonly) double rttVariation; 
@property (readonly) unsigned rxDuplicateBytes; 
@property (readonly) unsigned rxOutOfOrderBytes; 
@property (readonly) unsigned txRetransmittedBytes; 
@property (readonly) unsigned deltaRxDuplicateBytes; 
@property (readonly) unsigned deltaRxOutOfOrderBytes; 
@property (readonly) unsigned deltaTxRetransmittedBytes; 
@property (readonly) NSString * TCPState; 
@property (readonly) unsigned sendBufferSize; 
@property (readonly) unsigned sendBufferUsed; 
@property (readonly) unsigned txUnacked; 
@property (readonly) unsigned txWindow; 
@property (readonly) unsigned txCongestionWindow; 
@property (readonly) unsigned trafficManagementFlags; 
@property (readonly) NSString * congestionAlgorithm; 
@property (readonly) BOOL probeActivated; 
@property (readonly) BOOL connProbeFailed; 
@property (readonly) BOOL readProbeFailed; 
@property (readonly) BOOL writeProbeFailed; 
-(unsigned)trafficClass;
-(unsigned)interfaceIndex;
-(unsigned)sendBufferSize;
-(unsigned)rxOutOfOrderBytes;
-(id)provider;
-(int)processID;
-(id)remoteAddress;
-(id)localAddress;
-(id)euuid;
-(id)vuuid;
-(double)flowDuration;
-(unsigned)rxDuplicateBytes;
-(unsigned)txRetransmittedBytes;
-(double)rttMinimum;
-(double)rttAverage;
-(double)rttVariation;
-(unsigned)txUnacked;
-(BOOL)probeActivated;
-(BOOL)connProbeFailed;
-(BOOL)readProbeFailed;
-(BOOL)writeProbeFailed;
-(BOOL)interfaceCellularViaFallback;
-(BOOL)interfaceAWDL;
-(int)epid;
-(id)flowStartTimestamp;
-(BOOL)interfaceCellular;
-(BOOL)interfaceWifi;
-(BOOL)interfaceWired;
-(NSString *)TCPState;
-(unsigned)trafficManagementFlags;
-(unsigned long long)networkActivityMapPart1;
-(unsigned long long)networkActivityMapPart2;
-(unsigned long long)networkActivityMapStartTime;
-(id)initWithUpdate:(const nstat_msg_src_update_convenient*)arg1 startTime:(double)arg2 flowFlags:(unsigned)arg3 ;
-(id)initWithUpdate:(const nstat_msg_src_update_convenient*)arg1 startTime:(double)arg2 flowFlags:(unsigned)arg3 previously:(update_subset_for_deltas*)arg4 ;
-(unsigned)deltaRxDuplicateBytes;
-(unsigned)deltaRxOutOfOrderBytes;
-(unsigned)deltaTxRetransmittedBytes;
-(BOOL)flowUsesChannels;
-(unsigned)sendBufferUsed;
-(unsigned)receiveBufferSize;
-(unsigned)receiveBufferUsed;
-(unsigned)txWindow;
-(unsigned)txCongestionWindow;
-(unsigned long long)uniqueProcessID;
-(unsigned long long)eupid;
-(unsigned)connstatusProbeActivated;
-(unsigned)connstatusConnProbeFailed;
-(unsigned)connstatusReadProbeFailed;
-(unsigned)connstatusWriteProbeFailed;
-(BOOL)interfaceUnknown;
-(BOOL)interfaceLoopback;
-(BOOL)interfaceExpensive;
-(NSString *)congestionAlgorithm;
-(unsigned long long)flowStartContinuousTime;
-(id)flowSnapshotTimestamp;
-(id)uuid;
-(id)processName;
@end

