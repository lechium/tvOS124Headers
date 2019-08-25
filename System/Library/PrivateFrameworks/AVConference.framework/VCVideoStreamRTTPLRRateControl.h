/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VCVideoStreamRateControlProtocol.h>

@class NSString;

@interface VCVideoStreamRTTPLRRateControl : NSObject <VCVideoStreamRateControlProtocol> {

	double _packetLossRate;
	double _roundTripTime;
	double _rampUpFrozenTime;
	double _rampUpFrozenDuration;
	double _rampDownPacketLossRate;
	double _rampDownRoundTripTime;
	double _rampUpPacketLossRate;
	int _state;
	double _rateControlTime;
	unsigned _targetBitrate;
	unsigned short _currentTierIndex;
	unsigned short _minTierIndex;
	unsigned short _maxTierIndex;
	double _rateControlInterval;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned targetBitrate;                //@synthesize targetBitrate=_targetBitrate - In the implementation block
@property (nonatomic,readonly) double owrd; 
@property (nonatomic,readonly) double nowrd; 
@property (nonatomic,readonly) double nowrdShort; 
@property (nonatomic,readonly) double nowrdAcc; 
@property (assign,nonatomic) double rateControlInterval;              //@synthesize rateControlInterval=_rateControlInterval - In the implementation block
-(unsigned)targetBitrate;
-(double)owrd;
-(void)setMaxTierIndex:(unsigned short)arg1 minTierIndex:(unsigned short)arg2 ;
-(BOOL)shouldRampDown;
-(unsigned short)rampDownTier;
-(void)stateChange:(int)arg1 ;
-(BOOL)shouldRampUp;
-(unsigned short)rampUpTier;
-(void)stateExit;
-(void)stateEnter;
-(void)doRateControlWithTime:(double)arg1 roundTripTime:(double)arg2 packetLossRate:(double)arg3 operatingTierIndex:(unsigned short)arg4 averageReceivedBitrate:(unsigned)arg5 ;
-(void)updateRTPReceiveWithTimestamp:(unsigned)arg1 sampleRate:(unsigned)arg2 time:(double)arg3 ;
-(double)nowrd;
-(double)nowrdShort;
-(double)nowrdAcc;
-(double)rateControlInterval;
-(void)setRateControlInterval:(double)arg1 ;
-(void)printRateControlFullInfoWithLogDump:(void*)arg1 time:(double)arg2 videoStall:(BOOL)arg3 videoFrozenDuration:(double)arg4 averageTargetBitrate:(unsigned)arg5 ;
-(id)init;
-(NSString *)description;
-(int)state;
-(id)className;
@end

