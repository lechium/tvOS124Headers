/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface WFAggregateDictionary : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _domain;
	unsigned long long _requestFailures;
	unsigned long long _requestSuccesses;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSString * domain;                                  //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) unsigned long long requestFailures;               //@synthesize requestFailures=_requestFailures - In the implementation block
@property (assign,nonatomic) unsigned long long requestSuccesses;              //@synthesize requestSuccesses=_requestSuccesses - In the implementation block
+(id)defaultAggregateDictionary;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)_queue_addValueForScalarKey:(id)arg1 value:(long long)arg2 ;
-(void)_queue_pushValue:(double)arg1 forKey:(id)arg2 ;
-(unsigned long long)requestSuccesses;
-(unsigned long long)requestFailures;
-(void)logRequestFailure;
-(void)logRequestSuccess;
-(void)logLocationAccuracy:(double)arg1 ;
-(void)setRequestFailures:(unsigned long long)arg1 ;
-(void)setRequestSuccesses:(unsigned long long)arg1 ;
-(id)init;
-(NSString *)domain;
-(NSObject*<OS_dispatch_queue>)queue;
@end

