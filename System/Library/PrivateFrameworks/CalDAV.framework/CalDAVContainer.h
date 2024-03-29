/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainer.h>

@class NSString, NSSet, ICSDuration, NSURL, NSTimeZone;

@interface CalDAVContainer : CoreDAVContainer {

	BOOL _subscribedStripAlarms;
	BOOL _subscribedStripTodos;
	BOOL _subscribedStripAttachments;
	BOOL _isScheduleTransparent;
	BOOL _canBePublished;
	BOOL _canBeShared;
	BOOL _isMarkedUndeletable;
	BOOL _isMarkedImmutableSharees;
	BOOL _autoprovisioned;
	BOOL _overrideSupportsFreebusy;
	NSString* _calendarDescription;
	NSString* _ctag;
	NSString* _calendarColor;
	NSString* _symbolicColorName;
	NSString* _calendarOrder;
	NSString* _defaultTimedAlarms;
	NSString* _defaultAllDayAlarms;
	NSSet* _supportedCalendarComponentSet;
	ICSDuration* _subscribedRefreshRate;
	NSURL* _publishURL;
	NSURL* _prePublishURL;
	NSTimeZone* _timeZone;
	NSURL* _source;
	NSSet* _freeBusySet;
	NSURL* _scheduleDefaultCalendarURL;
	NSSet* _sharees;
	NSString* _supportedCalendarComponentSets;
	NSString* _locationCode;
	NSString* _languageCode;
	NSString* _alarms;

}

@property (assign,nonatomic) BOOL overrideSupportsFreebusy;                          //@synthesize overrideSupportsFreebusy=_overrideSupportsFreebusy - In the implementation block
@property (nonatomic,readonly) BOOL isCalendar; 
@property (nonatomic,readonly) BOOL isSubscribed; 
@property (nonatomic,readonly) BOOL isScheduleInbox; 
@property (nonatomic,readonly) BOOL isScheduleOutbox; 
@property (nonatomic,readonly) BOOL isNotification; 
@property (nonatomic,readonly) BOOL isSharedOwner; 
@property (nonatomic,readonly) BOOL isShared; 
@property (nonatomic,readonly) BOOL isEventContainer; 
@property (nonatomic,readonly) BOOL isTaskContainer; 
@property (nonatomic,readonly) BOOL isJournalContainer; 
@property (nonatomic,readonly) BOOL isPollContainer; 
@property (nonatomic,readonly) BOOL supportsFreebusy; 
@property (nonatomic,readonly) BOOL isFamilyCalendar; 
@property (nonatomic,retain) NSString * calendarDescription;                         //@synthesize calendarDescription=_calendarDescription - In the implementation block
@property (nonatomic,retain) NSString * ctag;                                        //@synthesize ctag=_ctag - In the implementation block
@property (nonatomic,retain) NSString * calendarColor;                               //@synthesize calendarColor=_calendarColor - In the implementation block
@property (nonatomic,retain) NSString * symbolicColorName;                           //@synthesize symbolicColorName=_symbolicColorName - In the implementation block
@property (nonatomic,retain) NSString * calendarOrder;                               //@synthesize calendarOrder=_calendarOrder - In the implementation block
@property (nonatomic,retain) NSString * defaultTimedAlarms;                          //@synthesize defaultTimedAlarms=_defaultTimedAlarms - In the implementation block
@property (nonatomic,retain) NSString * defaultAllDayAlarms;                         //@synthesize defaultAllDayAlarms=_defaultAllDayAlarms - In the implementation block
@property (nonatomic,retain) NSSet * supportedCalendarComponentSet;                  //@synthesize supportedCalendarComponentSet=_supportedCalendarComponentSet - In the implementation block
@property (assign,nonatomic) BOOL subscribedStripAlarms;                             //@synthesize subscribedStripAlarms=_subscribedStripAlarms - In the implementation block
@property (assign,nonatomic) BOOL subscribedStripTodos;                              //@synthesize subscribedStripTodos=_subscribedStripTodos - In the implementation block
@property (assign,nonatomic) BOOL subscribedStripAttachments;                        //@synthesize subscribedStripAttachments=_subscribedStripAttachments - In the implementation block
@property (nonatomic,retain) ICSDuration * subscribedRefreshRate;                    //@synthesize subscribedRefreshRate=_subscribedRefreshRate - In the implementation block
@property (nonatomic,retain) NSURL * publishURL;                                     //@synthesize publishURL=_publishURL - In the implementation block
@property (nonatomic,retain) NSURL * prePublishURL;                                  //@synthesize prePublishURL=_prePublishURL - In the implementation block
@property (assign,nonatomic) BOOL isScheduleTransparent;                             //@synthesize isScheduleTransparent=_isScheduleTransparent - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                                  //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) BOOL canBePublished;                                    //@synthesize canBePublished=_canBePublished - In the implementation block
@property (assign,nonatomic) BOOL canBeShared;                                       //@synthesize canBeShared=_canBeShared - In the implementation block
@property (assign,nonatomic) BOOL isMarkedUndeletable;                               //@synthesize isMarkedUndeletable=_isMarkedUndeletable - In the implementation block
@property (assign,nonatomic) BOOL isMarkedImmutableSharees;                          //@synthesize isMarkedImmutableSharees=_isMarkedImmutableSharees - In the implementation block
@property (nonatomic,retain) NSURL * source;                                         //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSSet * freeBusySet;                                    //@synthesize freeBusySet=_freeBusySet - In the implementation block
@property (nonatomic,retain) NSURL * scheduleDefaultCalendarURL;                     //@synthesize scheduleDefaultCalendarURL=_scheduleDefaultCalendarURL - In the implementation block
@property (nonatomic,retain) NSSet * sharees;                                        //@synthesize sharees=_sharees - In the implementation block
@property (nonatomic,retain) NSString * supportedCalendarComponentSets;              //@synthesize supportedCalendarComponentSets=_supportedCalendarComponentSets - In the implementation block
@property (nonatomic,retain) NSString * locationCode;                                //@synthesize locationCode=_locationCode - In the implementation block
@property (nonatomic,retain) NSString * languageCode;                                //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) BOOL autoprovisioned;                                   //@synthesize autoprovisioned=_autoprovisioned - In the implementation block
@property (nonatomic,retain) NSString * alarms;                                      //@synthesize alarms=_alarms - In the implementation block
+(id)copyPropertyMappingsForParser;
-(BOOL)canBeShared;
-(BOOL)isSubscribed;
-(NSString *)alarms;
-(void)setAlarms:(NSString *)arg1 ;
-(NSSet *)sharees;
-(NSString *)symbolicColorName;
-(void)setSymbolicColorName:(NSString *)arg1 ;
-(void)setSharees:(NSSet *)arg1 ;
-(void)setCanBeShared:(BOOL)arg1 ;
-(void)setCanBePublished:(BOOL)arg1 ;
-(NSURL *)publishURL;
-(void)setPublishURL:(NSURL *)arg1 ;
-(BOOL)canBePublished;
-(BOOL)isFamilyCalendar;
-(BOOL)isMarkedUndeletable;
-(BOOL)isMarkedImmutableSharees;
-(NSString *)ctag;
-(void)setCtag:(NSString *)arg1 ;
-(BOOL)isShared;
-(BOOL)isCalendar;
-(BOOL)isScheduleInbox;
-(BOOL)isScheduleOutbox;
-(BOOL)isNotification;
-(BOOL)isEventContainer;
-(BOOL)isTaskContainer;
-(BOOL)isSharedOwner;
-(BOOL)supportsFreebusy;
-(BOOL)isScheduleTransparent;
-(NSString *)calendarDescription;
-(NSString *)calendarOrder;
-(BOOL)subscribedStripAlarms;
-(BOOL)subscribedStripTodos;
-(BOOL)subscribedStripAttachments;
-(ICSDuration *)subscribedRefreshRate;
-(NSURL *)prePublishURL;
-(NSSet *)freeBusySet;
-(NSURL *)scheduleDefaultCalendarURL;
-(NSString *)defaultTimedAlarms;
-(NSString *)defaultAllDayAlarms;
-(NSString *)supportedCalendarComponentSets;
-(NSString *)locationCode;
-(BOOL)autoprovisioned;
-(void)applyParsedProperties:(id)arg1 ;
-(void)setCalendarDescription:(NSString *)arg1 ;
-(void)setCalendarOrder:(NSString *)arg1 ;
-(void)setSupportedCalendarComponentSet:(NSSet *)arg1 ;
-(void)setSubscribedStripAlarms:(BOOL)arg1 ;
-(void)setSubscribedStripAttachments:(BOOL)arg1 ;
-(void)setSubscribedStripTodos:(BOOL)arg1 ;
-(void)setSubscribedRefreshRate:(ICSDuration *)arg1 ;
-(void)setPrePublishURL:(NSURL *)arg1 ;
-(void)setFreeBusySet:(NSSet *)arg1 ;
-(void)setScheduleDefaultCalendarURL:(NSURL *)arg1 ;
-(void)setIsScheduleTransparent:(BOOL)arg1 ;
-(void)_setTimeZoneFromProperties:(id)arg1 onCalendar:(id)arg2 ;
-(void)setIsMarkedImmutableSharees:(BOOL)arg1 ;
-(void)setIsMarkedUndeletable:(BOOL)arg1 ;
-(void)setDefaultAllDayAlarms:(NSString *)arg1 ;
-(void)setDefaultTimedAlarms:(NSString *)arg1 ;
-(void)setSupportedCalendarComponentSets:(NSString *)arg1 ;
-(void)setLocationCode:(NSString *)arg1 ;
-(void)setAutoprovisioned:(BOOL)arg1 ;
-(void)postProcessWithResponseHeaders:(id)arg1 ;
-(void)setOverrideSupportsFreebusy:(BOOL)arg1 ;
-(NSSet *)supportedCalendarComponentSet;
-(BOOL)_isComponentSupportedForString:(id)arg1 ;
-(BOOL)overrideSupportsFreebusy;
-(BOOL)isJournalContainer;
-(BOOL)isPollContainer;
-(NSString *)calendarColor;
-(void)setCalendarColor:(NSString *)arg1 ;
-(id)description;
-(void)setSource:(NSURL *)arg1 ;
-(NSURL *)source;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
@end

