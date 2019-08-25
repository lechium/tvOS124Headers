/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface GEOTrafficAndETAResult : NSObject {

	BOOL _isSuccess;
	double _seconds;
	NSString* _shortTrafficString;
	NSString* _longTrafficString;

}

@property (assign,nonatomic) BOOL isSuccess;                           //@synthesize isSuccess=_isSuccess - In the implementation block
@property (assign,nonatomic) double seconds;                           //@synthesize seconds=_seconds - In the implementation block
@property (nonatomic,copy) NSString * shortTrafficString;              //@synthesize shortTrafficString=_shortTrafficString - In the implementation block
@property (nonatomic,copy) NSString * longTrafficString;               //@synthesize longTrafficString=_longTrafficString - In the implementation block
-(double)seconds;
-(BOOL)isSuccess;
-(void)setIsSuccess:(BOOL)arg1 ;
-(void)setSeconds:(double)arg1 ;
-(NSString *)shortTrafficString;
-(void)setShortTrafficString:(NSString *)arg1 ;
-(NSString *)longTrafficString;
-(void)setLongTrafficString:(NSString *)arg1 ;
@end

