/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class W5PerfConfiguration, NSData, NSNumber;

@interface W5PerfUpdate : NSObject <NSCopying, NSSecureCoding> {

	W5PerfConfiguration* _configuration;
	NSData* _standardOut;
	NSData* _standardErr;
	NSNumber* _bandwidth;
	NSNumber* _jitter;
	NSNumber* _loss;
	double _start;
	double _update;

}

@property (nonatomic,copy) W5PerfConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSData * standardOut;                             //@synthesize standardOut=_standardOut - In the implementation block
@property (nonatomic,copy) NSData * standardErr;                             //@synthesize standardErr=_standardErr - In the implementation block
@property (nonatomic,copy) NSNumber * bandwidth;                             //@synthesize bandwidth=_bandwidth - In the implementation block
@property (nonatomic,copy) NSNumber * jitter;                                //@synthesize jitter=_jitter - In the implementation block
@property (nonatomic,copy) NSNumber * loss;                                  //@synthesize loss=_loss - In the implementation block
@property (assign,nonatomic) double start;                                   //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) double update;                                  //@synthesize update=_update - In the implementation block
+(id)parseUpdateOutput:(id)arg1 configuration:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)setBandwidth:(NSNumber *)arg1 ;
-(NSNumber *)bandwidth;
-(NSNumber *)jitter;
-(void)setUpdate:(double)arg1 ;
-(void)setStandardOut:(NSData *)arg1 ;
-(void)setStandardErr:(NSData *)arg1 ;
-(void)setJitter:(NSNumber *)arg1 ;
-(void)setLoss:(NSNumber *)arg1 ;
-(NSData *)standardOut;
-(NSData *)standardErr;
-(NSNumber *)loss;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)update;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(W5PerfConfiguration *)configuration;
-(void)setConfiguration:(W5PerfConfiguration *)arg1 ;
-(double)start;
-(void)setStart:(double)arg1 ;
@end

