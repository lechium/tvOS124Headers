/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSDate, NSMutableDictionary;

@interface GEORequestCountPowerLogger : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _eventName;
	NSDate* _startDate;
	NSMutableDictionary* _clientInfo;

}
+(BOOL)shouldIgnoreRequestType:(unsigned char)arg1 fromClientWithId:(id)arg2 ;
+(void)cancelOldActivities;
+(id)sharedInstance;
-(void)startNewSessionWithName:(id)arg1 ;
-(void)_flushToPowerLog;
-(void)_cancelXpcActivity;
-(void)_scheduleXpcActivity;
-(void)incrementCountForClient:(id)arg1 requestType:(unsigned char)arg2 ;
-(id)init;
-(void)dealloc;
@end

