/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCStatisticsHistory : NSObject {

	VCStatisticsStatsHistoryElement _statsHistory[500];
	int _statsHistorySize;
	int _currentStatsHistoryIndex;
	VCStatisticsStatsHistoryElement _lastStats;
	unsigned char _currentLinkID;
	double _lastHistoryNotEnoughLogTime;

}
-(void)addStatsHistory:(VCStatisticsStatsHistoryElement)arg1 ;
-(double)getPacketLossRateAtTime:(double)arg1 inMostRecentDuration:(double)arg2 ;
-(double)getReceivingBitrateAtTime:(double)arg1 inMostRecentDuration:(double)arg2 ;
-(double)getSendingBitrateAtTime:(double)arg1 inMostRecentDuration:(double)arg2 ;
-(double)getServerStatsBitrateAtTime:(double)arg1 inMostRecentDuration:(double)arg2 ;
-(void)resetHistory;
-(BOOL)isStatsElementOutOfOrder:(VCStatisticsStatsHistoryElement)arg1 ;
-(BOOL)handleWrappedAroundByteCountForStats:(VCStatisticsStatsHistoryElement*)arg1 ;
-(BOOL)getStatsHistoryElementIndex:(int*)arg1 time:(double)arg2 inMostRecentDuration:(double)arg3 ;
@end

