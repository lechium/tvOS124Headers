/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, RTPredictedLocationOfInterest;

@interface EKPredictedLocationOfInterest : NSObject {

	long long _type;
	NSString* _customLabel;
	NSString* _mapItemName;
	NSString* _addressCountryCode;
	NSString* _addressThoroughfare;
	NSString* _addressLocality;
	RTPredictedLocationOfInterest* _rtPredictedLocationOfInterest;

}

@property (nonatomic,readonly) RTPredictedLocationOfInterest * rtPredictedLocationOfInterest;              //@synthesize rtPredictedLocationOfInterest=_rtPredictedLocationOfInterest - In the implementation block
@property (nonatomic,readonly) long long type;                                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * customLabel;                                                //@synthesize customLabel=_customLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * mapItemName;                                                //@synthesize mapItemName=_mapItemName - In the implementation block
@property (nonatomic,copy,readonly) NSString * addressCountryCode;                                         //@synthesize addressCountryCode=_addressCountryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * addressThoroughfare;                                        //@synthesize addressThoroughfare=_addressThoroughfare - In the implementation block
@property (nonatomic,copy,readonly) NSString * addressLocality;                                            //@synthesize addressLocality=_addressLocality - In the implementation block
-(NSString *)customLabel;
-(id)initWithType:(long long)arg1 customLabel:(id)arg2 mapItemName:(id)arg3 addressCountryCode:(id)arg4 addressThoroughFare:(id)arg5 addressLocality:(id)arg6 ;
-(id)initWithPredictedLocationOfInterest:(id)arg1 ;
-(NSString *)mapItemName;
-(NSString *)addressCountryCode;
-(NSString *)addressThoroughfare;
-(NSString *)addressLocality;
-(RTPredictedLocationOfInterest *)rtPredictedLocationOfInterest;
-(long long)type;
@end

