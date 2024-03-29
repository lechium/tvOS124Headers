/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSDictionary, NSString;

@interface BWInferenceResult : NSObject {

	int _inferenceType;
	SCD_Struct_BW2 _timestamp;
	NSDictionary* _inferences;
	NSString* _preventionReason;

}

@property (nonatomic,readonly) int inferenceType;                             //@synthesize inferenceType=_inferenceType - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW2 timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * inferences;                //@synthesize inferences=_inferences - In the implementation block
@property (nonatomic,copy,readonly) NSString * preventionReason;              //@synthesize preventionReason=_preventionReason - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(int)inferenceType;
-(id)initWithInferenceType:(int)arg1 inferences:(id)arg2 preventionReason:(id)arg3 atTimestamp:(SCD_Struct_BW2)arg4 ;
-(id)initWithInferenceType:(int)arg1 inferences:(id)arg2 atTimestamp:(SCD_Struct_BW2)arg3 ;
-(id)initWithInferenceType:(int)arg1 preventionReason:(id)arg2 atTimestamp:(SCD_Struct_BW2)arg3 ;
-(id)initWithResult:(id)arg1 replacementInferences:(id)arg2 replacementPreventionReason:(id)arg3 ;
-(NSDictionary *)inferences;
-(NSString *)preventionReason;
-(id)init;
-(void)dealloc;
-(SCD_Struct_BW2)timestamp;
-(BOOL)isValid;
@end

