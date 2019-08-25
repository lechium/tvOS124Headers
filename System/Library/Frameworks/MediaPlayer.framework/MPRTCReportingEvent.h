/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPRTCReportingEvent : NSObject {

	unsigned short _rtcReportingCategory;
	unsigned short _rtcReportingType;
	long long _networkInterfaceType;

}

@property (nonatomic,readonly) unsigned short rtcReportingCategory;              //@synthesize rtcReportingCategory=_rtcReportingCategory - In the implementation block
@property (nonatomic,readonly) unsigned short rtcReportingType;                  //@synthesize rtcReportingType=_rtcReportingType - In the implementation block
@property (assign,nonatomic) long long networkInterfaceType;                     //@synthesize networkInterfaceType=_networkInterfaceType - In the implementation block
-(id)newRTCReportingMessageDictionary;
-(unsigned short)rtcReportingCategory;
-(unsigned short)rtcReportingType;
-(id)newRTCReportingPayloadDictionary;
-(long long)networkInterfaceType;
-(void)setNetworkInterfaceType:(long long)arg1 ;
@end
