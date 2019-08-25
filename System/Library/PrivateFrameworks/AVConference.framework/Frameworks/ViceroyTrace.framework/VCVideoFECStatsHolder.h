/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCVideoFECStatsHolder : NSObject {

	unsigned long long _totalFECDataByteCount;
	unsigned long long _totalFECParityByteCount;
	unsigned _totalFECFrameCount;
	unsigned _completeFECFrameCount;
	unsigned _failedFECFrameCount;

}

@property (assign) unsigned long long totalFECDataByteCount;                //@synthesize totalFECDataByteCount=_totalFECDataByteCount - In the implementation block
@property (assign) unsigned long long totalFECParityByteCount;              //@synthesize totalFECParityByteCount=_totalFECParityByteCount - In the implementation block
@property (assign) unsigned totalFECFrameCount;                             //@synthesize totalFECFrameCount=_totalFECFrameCount - In the implementation block
@property (assign) unsigned completeFECFrameCount;                          //@synthesize completeFECFrameCount=_completeFECFrameCount - In the implementation block
@property (assign) unsigned failedFECFrameCount;                            //@synthesize failedFECFrameCount=_failedFECFrameCount - In the implementation block
-(unsigned long long)totalFECDataByteCount;
-(unsigned long long)totalFECParityByteCount;
-(unsigned)totalFECFrameCount;
-(unsigned)completeFECFrameCount;
-(unsigned)failedFECFrameCount;
-(void)setTotalFECDataByteCount:(unsigned long long)arg1 ;
-(void)setTotalFECParityByteCount:(unsigned long long)arg1 ;
-(void)setTotalFECFrameCount:(unsigned)arg1 ;
-(void)setCompleteFECFrameCount:(unsigned)arg1 ;
-(void)setFailedFECFrameCount:(unsigned)arg1 ;
-(void)merge:(id)arg1 ;
@end

