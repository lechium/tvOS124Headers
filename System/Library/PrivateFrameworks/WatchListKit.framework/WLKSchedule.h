/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSDictionary, NSString, NSDate, NSNumber, NSArray;

@interface WLKSchedule : NSObject {

	NSMutableArray* _mutableEvents;
	NSDictionary* _dictionary;
	NSString* _serviceID;
	NSString* _externalServiceID;
	NSString* _channelID;
	NSDate* _startDate;
	NSDate* _endDate;
	NSNumber* _cleanupTime;
	NSDate* _earliestEventDate;
	NSDate* _latestEventDate;

}

@property (nonatomic,copy,readonly) NSString * serviceID;                      //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalServiceID;              //@synthesize externalServiceID=_externalServiceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * channelID;                      //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate;                        //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                          //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSNumber * cleanupTime;                         //@synthesize cleanupTime=_cleanupTime - In the implementation block
@property (nonatomic,copy,readonly) NSDate * earliestEventDate;                //@synthesize earliestEventDate=_earliestEventDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * latestEventDate;                  //@synthesize latestEventDate=_latestEventDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * events; 
-(void)prune;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSArray *)events;
-(BOOL)_isDate:(id)arg1 containedByDate:(id)arg2 andDate:(id)arg3 ;
-(id)eventForDate:(id)arg1 ;
-(id)adjacentEventsForDate:(id)arg1 fuzziness:(double)arg2 ;
-(id)eventAfterDate:(id)arg1 ;
-(NSNumber *)cleanupTime;
-(NSDate *)earliestEventDate;
-(NSDate *)latestEventDate;
-(NSString *)serviceID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)channelID;
-(NSString *)externalServiceID;
@end

