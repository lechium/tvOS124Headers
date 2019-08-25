/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NetworkServiceProxyDurationBuckets : NSObject <NSSecureCoding> {

	unsigned _connection_duration_1_min;
	unsigned _connection_duration_3_mins;
	unsigned _connection_duration_6_mins;
	unsigned _connection_duration_10_mins;
	unsigned _connection_duration_30_mins;
	unsigned _connection_duration_1_hour;
	unsigned _connection_duration_2_hours;
	unsigned _connection_duration_5_hours;
	unsigned _connection_duration_12_hours;
	unsigned _connection_duration_above_12_hours;

}

@property (assign) unsigned connection_duration_1_min;                       //@synthesize connection_duration_1_min=_connection_duration_1_min - In the implementation block
@property (assign) unsigned connection_duration_3_mins;                      //@synthesize connection_duration_3_mins=_connection_duration_3_mins - In the implementation block
@property (assign) unsigned connection_duration_6_mins;                      //@synthesize connection_duration_6_mins=_connection_duration_6_mins - In the implementation block
@property (assign) unsigned connection_duration_10_mins;                     //@synthesize connection_duration_10_mins=_connection_duration_10_mins - In the implementation block
@property (assign) unsigned connection_duration_30_mins;                     //@synthesize connection_duration_30_mins=_connection_duration_30_mins - In the implementation block
@property (assign) unsigned connection_duration_1_hour;                      //@synthesize connection_duration_1_hour=_connection_duration_1_hour - In the implementation block
@property (assign) unsigned connection_duration_2_hours;                     //@synthesize connection_duration_2_hours=_connection_duration_2_hours - In the implementation block
@property (assign) unsigned connection_duration_5_hours;                     //@synthesize connection_duration_5_hours=_connection_duration_5_hours - In the implementation block
@property (assign) unsigned connection_duration_12_hours;                    //@synthesize connection_duration_12_hours=_connection_duration_12_hours - In the implementation block
@property (assign) unsigned connection_duration_above_12_hours;              //@synthesize connection_duration_above_12_hours=_connection_duration_above_12_hours - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned)getBucketCount;
-(unsigned*)createBucketArray;
-(void)addBuckets:(id)arg1 ;
-(void)incrBucketWithCurrentDate:(id)arg1 pastDate:(id)arg2 ;
-(unsigned)connection_duration_1_min;
-(unsigned)connection_duration_3_mins;
-(unsigned)connection_duration_6_mins;
-(unsigned)connection_duration_10_mins;
-(unsigned)connection_duration_30_mins;
-(unsigned)connection_duration_1_hour;
-(unsigned)connection_duration_2_hours;
-(unsigned)connection_duration_5_hours;
-(unsigned)connection_duration_12_hours;
-(unsigned)connection_duration_above_12_hours;
-(void)setConnection_duration_1_min:(unsigned)arg1 ;
-(void)setConnection_duration_3_mins:(unsigned)arg1 ;
-(void)setConnection_duration_6_mins:(unsigned)arg1 ;
-(void)setConnection_duration_10_mins:(unsigned)arg1 ;
-(void)setConnection_duration_30_mins:(unsigned)arg1 ;
-(void)setConnection_duration_1_hour:(unsigned)arg1 ;
-(void)setConnection_duration_2_hours:(unsigned)arg1 ;
-(void)setConnection_duration_5_hours:(unsigned)arg1 ;
-(void)setConnection_duration_12_hours:(unsigned)arg1 ;
-(void)setConnection_duration_above_12_hours:(unsigned)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)clear;
@end
