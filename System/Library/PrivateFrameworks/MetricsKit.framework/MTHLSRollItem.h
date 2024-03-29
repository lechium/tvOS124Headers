/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricsKit/MTHLSItem.h>

@interface MTHLSRollItem : MTHLSItem {

	unsigned long long _duration;

}

@property (assign,nonatomic) unsigned long long duration;              //@synthesize duration=_duration - In the implementation block
-(id)initWithStartOverallPosition:(unsigned long long)arg1 duration:(unsigned long long)arg2 metricsData:(id)arg3 ;
-(BOOL)containsOverallPosition:(unsigned long long)arg1 ;
-(unsigned long long)endOverallPosition;
-(void)setDuration:(unsigned long long)arg1 ;
-(unsigned long long)duration;
@end

