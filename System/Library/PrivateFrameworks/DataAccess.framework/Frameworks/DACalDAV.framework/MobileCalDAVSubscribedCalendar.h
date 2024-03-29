/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DACalDAV/MobileCalDAVCalendar.h>
#import <libobjc.A.dylib/CalDAVSubscribedCalendar.h>

@class NSURL, NSString, NSMutableDictionary, NSSet, NSTimeZone, NSDictionary, NSArray;

@interface MobileCalDAVSubscribedCalendar : MobileCalDAVCalendar <CalDAVSubscribedCalendar> {

	NSMutableDictionary* _properties;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CalDAVPrincipal> principal; 
@property (nonatomic,retain) NSString * guid; 
@property (nonatomic,retain) NSURL * calendarURL; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * notes; 
@property (nonatomic,retain) NSString * color; 
@property (nonatomic,retain) NSString * symbolicColorName; 
@property (nonatomic,retain) NSString * pushKey; 
@property (nonatomic,retain) NSURL * owner; 
@property (nonatomic,retain) NSString * ownerDisplayName; 
@property (nonatomic,retain) NSSet * preferredCalendarUserAddresses; 
@property (nonatomic,retain) NSURL * publishURL; 
@property (nonatomic,retain) NSURL * prePublishURL; 
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (nonatomic,retain) NSDictionary * bulkRequests; 
@property (assign,nonatomic) int order; 
@property (assign,nonatomic) int sharingStatus; 
@property (nonatomic,retain) NSSet * sharees; 
@property (assign,nonatomic) BOOL isTaskContainer; 
@property (assign,nonatomic) BOOL isEventContainer; 
@property (assign,nonatomic) BOOL isSubscribed; 
@property (assign,nonatomic) BOOL isManagedByServer; 
@property (assign,nonatomic) BOOL isScheduleInbox; 
@property (assign,nonatomic) BOOL isScheduleOutbox; 
@property (assign,nonatomic) BOOL isNotification; 
@property (assign,nonatomic) BOOL isPoll; 
@property (assign,nonatomic) BOOL isEditable; 
@property (assign,nonatomic) BOOL isRenameable; 
@property (assign,nonatomic) BOOL isEnabled; 
@property (assign,nonatomic) BOOL isPublished; 
@property (assign,nonatomic) BOOL isAffectingAvailability; 
@property (assign,nonatomic) BOOL canBePublished; 
@property (assign,nonatomic) BOOL canBeShared; 
@property (assign,nonatomic) BOOL isFamilyCalendar; 
@property (assign,nonatomic) BOOL isMarkedUndeletable; 
@property (assign,nonatomic) BOOL isMarkedImmutableSharees; 
@property (assign,nonatomic) BOOL wasModifiedLocally; 
@property (assign,nonatomic) BOOL needsResync; 
@property (nonatomic,retain) NSString * ctag; 
@property (nonatomic,retain) NSString * syncToken; 
@property (nonatomic,readonly) BOOL needsPublishUpdate; 
@property (nonatomic,readonly) NSArray * syncActions; 
@property (nonatomic,readonly) NSArray * shareeActions; 
@property (nonatomic,readonly) NSArray * itemsToReportAsJunk; 
@property (nonatomic,readonly) NSDictionary * uuidsToAddActions; 
@property (nonatomic,readonly) NSDictionary * hrefsToModDeleteActions; 
@property (nonatomic,readonly) NSSet * allItemURLs; 
@property (nonatomic,retain) NSURL * subscriptionURL; 
@property (assign,nonatomic) BOOL hasAlarmFilter; 
@property (assign,nonatomic) BOOL hasAttachmentFilter; 
@property (assign,nonatomic) BOOL hasTaskFilter; 
@property (assign,nonatomic) double refreshInterval; 
@property (assign,nonatomic) BOOL autoprovisioned; 
@property (nonatomic,retain) NSString * locationCode; 
@property (nonatomic,retain) NSString * languageCode; 
-(BOOL)isTaskContainer;
-(void)setCalendarURL:(NSURL *)arg1 ;
-(void)setIsTaskContainer:(BOOL)arg1 ;
-(BOOL)isManagedByServer;
-(void)setIsManagedByServer:(BOOL)arg1 ;
-(NSURL *)subscriptionURL;
-(void)setSubscriptionURL:(NSURL *)arg1 ;
-(BOOL)hasAlarmFilter;
-(void)setHasAlarmFilter:(BOOL)arg1 ;
-(BOOL)hasAttachmentFilter;
-(void)setHasAttachmentFilter:(BOOL)arg1 ;
-(BOOL)hasTaskFilter;
-(void)setHasTaskFilter:(BOOL)arg1 ;
-(id)calendarURLString;
-(id)initWithCalendarURL:(id)arg1 calendar:(void*)arg2 properties:(id)arg3 principal:(id)arg4 ;
-(void)setRefreshInterval:(double)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)properties;
-(double)refreshInterval;
@end

