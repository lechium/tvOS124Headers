/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PAAggregatedStack <NSObject>
@required
-(void)printToOutputStream:(id)arg1;
-(void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2 fillGapInTimestampIndexWithPreviousThreads:(BOOL)arg3;
-(int)count;
-(long long)compare:(id)arg1;

@end
