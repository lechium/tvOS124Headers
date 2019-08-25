/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MSBackoffManagerDelegate;
@class NSDate;

@interface MSBackoffManager : NSObject <NSSecureCoding> {

	id<MSBackoffManagerDelegate> _delegate;
	double _initialInterval;
	double _backoffFactor;
	double _randomizeFactor;
	double _maxBackoffInterval;
	double _currentInterval;
	NSDate* _nextExpiryDate;
	NSDate* _retryAfterDate;

}

@property (assign,nonatomic) id<MSBackoffManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double initialInterval;                             //@synthesize initialInterval=_initialInterval - In the implementation block
@property (assign,nonatomic) double backoffFactor;                               //@synthesize backoffFactor=_backoffFactor - In the implementation block
@property (assign,nonatomic) double randomizeFactor;                             //@synthesize randomizeFactor=_randomizeFactor - In the implementation block
@property (assign,nonatomic) double maxBackoffInterval;                          //@synthesize maxBackoffInterval=_maxBackoffInterval - In the implementation block
@property (assign,nonatomic) double currentInterval;                             //@synthesize currentInterval=_currentInterval - In the implementation block
@property (retain) NSDate * nextExpiryDate; 
@property (retain) NSDate * retryAfterDate;                                      //@synthesize retryAfterDate=_retryAfterDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyParameters;
-(void)setNextExpiryDate:(NSDate *)arg1 ;
-(NSDate *)retryAfterDate;
-(void)setRetryAfterDate:(NSDate *)arg1 ;
-(double)initialInterval;
-(double)backoffFactor;
-(double)randomizeFactor;
-(double)maxBackoffInterval;
-(double)currentInterval;
-(NSDate *)nextExpiryDate;
-(void)_complainAboutMissingKeyInArchive:(id)arg1 ;
-(id)initWithInitialInterval:(double)arg1 backoffFactor:(double)arg2 randomizeFactor:(double)arg3 maxBackoffInterval:(double)arg4 retryAfterDate:(id)arg5 ;
-(void)setCurrentInterval:(double)arg1 ;
-(void)didReceiveRetryAfterDate:(id)arg1 ;
-(void)setInitialInterval:(double)arg1 ;
-(void)setBackoffFactor:(double)arg1 ;
-(void)setRandomizeFactor:(double)arg1 ;
-(void)setMaxBackoffInterval:(double)arg1 ;
-(void)backoff;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<MSBackoffManagerDelegate>)arg1 ;
-(id<MSBackoffManagerDelegate>)delegate;
-(void)reset;
@end

