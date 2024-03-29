/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPCReportingEvent.h>

@class SSVPlayActivityEvent, NSString;

@interface MPCReportingPlaybackActivityEvent : NSObject <MPCReportingEvent> {

	BOOL _shouldReportToStore;
	SSVPlayActivityEvent* _playActivityEvent;

}

@property (nonatomic,copy) SSVPlayActivityEvent * playActivityEvent;              //@synthesize playActivityEvent=_playActivityEvent - In the implementation block
@property (assign,nonatomic) BOOL shouldReportToStore;                            //@synthesize shouldReportToStore=_shouldReportToStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isValidReportingEvent;
-(unsigned long long)reportingEventType;
-(SSVPlayActivityEvent *)playActivityEvent;
-(BOOL)shouldReportToStore;
-(void)setPlayActivityEvent:(SSVPlayActivityEvent *)arg1 ;
-(void)setShouldReportToStore:(BOOL)arg1 ;
-(NSString *)description;
@end

