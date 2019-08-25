/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface MNTraceSignificantEventRow : NSObject {

	double _timestamp;
	NSDictionary* _data;
	long long _eventType;

}

@property (assign,nonatomic) double timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSDictionary * data;                //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) long long eventType;              //@synthesize eventType=_eventType - In the implementation block
-(void)setEventType:(long long)arg1 ;
-(long long)eventType;
-(id)_descriptionWithData:(id)arg1 ;
-(id)descriptionWithDataFilteredByFilter:(/*^block*/id)arg1 ;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(NSDictionary *)data;
-(void)setData:(NSDictionary *)arg1 ;
@end

