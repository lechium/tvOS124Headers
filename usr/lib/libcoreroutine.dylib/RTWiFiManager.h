/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTService.h>

@class NSArray;

@interface RTWiFiManager : RTService {

	unsigned long long _powerStatus;
	unsigned long long _linkStatus;
	NSArray* _accessPoints;

}

@property (assign,nonatomic) unsigned long long powerStatus;               //@synthesize powerStatus=_powerStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long linkStatus;              //@synthesize linkStatus=_linkStatus - In the implementation block
@property (nonatomic,retain) NSArray * accessPoints;                       //@synthesize accessPoints=_accessPoints - In the implementation block
+(BOOL)supportsNotificationName:(id)arg1 ;
+(id)powerStatusToString:(unsigned long long)arg1 ;
+(id)linkStatusToString:(unsigned long long)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(NSArray *)accessPoints;
-(void)setAccessPoints:(NSArray *)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)scheduleScan;
-(void)cancelScan;
-(unsigned long long)powerStatus;
-(void)fetchPowerStatus:(/*^block*/id)arg1 ;
-(unsigned long long)linkStatus;
-(void)_scheduleScan;
-(void)_cancelScan;
-(void)fetchLinkStatus:(/*^block*/id)arg1 ;
-(void)setPowerStatus:(unsigned long long)arg1 ;
-(void)_notifyScanResults:(id)arg1 ;
-(id)init;
@end

