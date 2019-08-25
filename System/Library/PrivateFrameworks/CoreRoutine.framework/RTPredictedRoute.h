/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTRoute;

@interface RTPredictedRoute : NSObject <NSSecureCoding> {

	RTRoute* _route;
	double _confidence;

}

@property (nonatomic,copy) RTRoute * route;                  //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) double confidence;              //@synthesize confidence=_confidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(RTRoute *)route;
-(void)setRoute:(RTRoute *)arg1 ;
-(id)initWithRoute:(id)arg1 confidence:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)confidence;
-(void)setConfidence:(double)arg1 ;
@end
