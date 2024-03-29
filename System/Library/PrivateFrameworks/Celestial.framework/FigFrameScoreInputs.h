/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface FigFrameScoreInputs : NSObject {

	BOOL _haveFace;
	long long _averageFocusScore;
	SCD_Struct_BW2 _timestamp;
	SCD_Struct_Fi97 _face;

}

@property (assign) SCD_Struct_BW2 timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) long long averageFocusScore;              //@synthesize averageFocusScore=_averageFocusScore - In the implementation block
@property (assign) SCD_Struct_Fi98 face;                     //@synthesize face=_face - In the implementation block
@property (assign) BOOL haveFace;                            //@synthesize haveFace=_haveFace - In the implementation block
-(long long)averageFocusScore;
-(void)setAverageFocusScore:(long long)arg1 ;
-(BOOL)haveFace;
-(void)setHaveFace:(BOOL)arg1 ;
-(SCD_Struct_Fi98)face;
-(void)setFace:(SCD_Struct_Fi98)arg1 ;
-(id)init;
-(SCD_Struct_BW2)timestamp;
-(void)setTimestamp:(SCD_Struct_BW2)arg1 ;
@end

