/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MRExternalDeviceMessageMetricsEntry : NSObject {

	unsigned long long _avg;
	unsigned long long _min;
	unsigned long long _max;
	unsigned long long _total;
	NSMutableArray* _values;

}

@property (assign,nonatomic) unsigned long long avg;                //@synthesize avg=_avg - In the implementation block
@property (assign,nonatomic) unsigned long long min;                //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) unsigned long long max;                //@synthesize max=_max - In the implementation block
@property (assign,nonatomic) unsigned long long total;              //@synthesize total=_total - In the implementation block
@property (nonatomic,retain) NSMutableArray * values;               //@synthesize values=_values - In the implementation block
-(unsigned long long)total;
-(void)setTotal:(unsigned long long)arg1 ;
-(void)updateWithValue:(unsigned long long)arg1 ;
-(void)setAvg:(unsigned long long)arg1 ;
-(unsigned long long)min;
-(unsigned long long)max;
-(unsigned long long)avg;
-(void)setMin:(unsigned long long)arg1 ;
-(void)setMax:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(void)setValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)values;
@end

