/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _CDPSimpleModelParameterManagerTuningValue : NSObject <NSSecureCoding> {

	float _lambda;
	float _w0;
	float _threshold;
	float _score;

}

@property (nonatomic,readonly) float lambda;                 //@synthesize lambda=_lambda - In the implementation block
@property (nonatomic,readonly) float w0;                     //@synthesize w0=_w0 - In the implementation block
@property (nonatomic,readonly) float threshold;              //@synthesize threshold=_threshold - In the implementation block
@property (nonatomic,readonly) float score;                  //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
-(float)score;
-(id)initWithLambda:(float)arg1 w0:(float)arg2 threshold:(float)arg3 score:(float)arg4 ;
-(float)lambda;
-(float)w0;
-(float)threshold;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

