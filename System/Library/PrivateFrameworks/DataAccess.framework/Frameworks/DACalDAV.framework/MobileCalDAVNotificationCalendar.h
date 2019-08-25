/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DACalDAV/MobileCalDAVCalendar.h>

@class CalDiagNotificationCollectionSync;

@interface MobileCalDAVNotificationCalendar : MobileCalDAVCalendar {

	int _mostRecentNotificationChangeIndex;
	CalDiagNotificationCollectionSync* _notificationCollectionSyncDiagnostics;

}

@property (assign,nonatomic) int mostRecentNotificationChangeIndex;                                                  //@synthesize mostRecentNotificationChangeIndex=_mostRecentNotificationChangeIndex - In the implementation block
@property (nonatomic,retain) CalDiagNotificationCollectionSync * notificationCollectionSyncDiagnostics;              //@synthesize notificationCollectionSyncDiagnostics=_notificationCollectionSyncDiagnostics - In the implementation block
-(BOOL)isNotification;
-(Class)appSpecificCalendarItemClass;
-(id)etagsForItemURLs:(id)arg1 ;
-(BOOL)setEtag:(id)arg1 forItemAtURL:(id)arg2 ;
-(BOOL)setScheduleTag:(id)arg1 forItemAtURL:(id)arg2 ;
-(BOOL)setURL:(id)arg1 forResourceWithUUID:(id)arg2 ;
-(BOOL)updateResourcesFromServer:(id)arg1 ;
-(id)allItemURLs;
-(void)prepareMergeSyncActionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithCalendarURL:(id)arg1 calendar:(void*)arg2 principal:(id)arg3 title:(id)arg4 ;
-(BOOL)_removeCalendarItemWithURL:(id)arg1 ;
-(void)clearEventChanges;
-(void)prepareSyncActionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)recordDiagnosticsForAccountSync:(id)arg1 ;
-(void*)_copyNotificationWithExternalID:(id)arg1 ;
-(void*)_copyNotificationWithUniqueIdentifier:(id)arg1 inCalendar:(void*)arg2 orStore:(void*)arg3 ;
-(BOOL)_handleInviteNotification:(id)arg1 withResource:(id)arg2 uid:(id)arg3 ;
-(BOOL)_handleInviteReply:(id)arg1 withResource:(id)arg2 owningNotification:(id)arg3 uid:(id)arg4 ;
-(BOOL)_handleResourceChanged:(id)arg1 withResource:(id)arg2 uid:(id)arg3 ;
-(CalDiagNotificationCollectionSync *)notificationCollectionSyncDiagnostics;
-(int)mostRecentNotificationChangeIndex;
-(void)setMostRecentNotificationChangeIndex:(int)arg1 ;
-(void)_setInviteReplyCalendarForReplyItem:(id)arg1 onNotification:(void*)arg2 ;
-(void*)_copyCalItemFromAnyCalendarWithExternalID:(id)arg1 ;
-(void*)_createResourceChange:(id)arg1 withType:(unsigned)arg2 forNotification:(void*)arg3 withRecurrenceID:(id)arg4 ;
-(void*)_createResourceChange:(id)arg1 withType:(unsigned)arg2 forNotification:(void*)arg3 ;
-(id)_changedAttributesFromCalendarChanges:(id)arg1 ;
-(void)setNotificationCollectionSyncDiagnostics:(CalDiagNotificationCollectionSync *)arg1 ;
@end

