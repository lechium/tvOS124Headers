/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPCompactResult : NSObject {

	float _score;
	SCD_Struct_VC9 _timerange;

}

@property (assign) SCD_Struct_VC9 timerange;              //@synthesize timerange=_timerange - In the implementation block
@property (assign) float score;                           //@synthesize score=_score - In the implementation block
-(float)score;
-(void)setScore:(float)arg1 ;
-(SCD_Struct_VC9)timerange;
-(void)setTimerange:(SCD_Struct_VC9)arg1 ;
-(id)initWithTimerange:(SCD_Struct_VC9)arg1 andScore:(float)arg2 ;
@end

