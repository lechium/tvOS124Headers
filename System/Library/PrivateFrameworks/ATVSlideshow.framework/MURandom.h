/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MUPoolObject.h>

@interface MURandom : MUPoolObject {

	long long _state[31];
	long long* _frontPtr;
	long long* _rearPtr;
	long long* _endPtr;

}
+(id)randomGeneratorWithSeed:(unsigned long long)arg1 ;
+(SCD_Struct_MR15*)poolInfo;
+(BOOL)clearVars;
-(long long)randomInt;
-(double)randomFloatInRange:(double)arg1 :(double)arg2 ;
-(void)_seed:(unsigned long long)arg1 ;
@end

