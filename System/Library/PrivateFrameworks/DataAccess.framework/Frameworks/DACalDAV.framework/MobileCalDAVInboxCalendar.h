/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DACalDAV/MobileCalDAVCalendar.h>

@class CalDiagInboxCollectionSync;

@interface MobileCalDAVInboxCalendar : MobileCalDAVCalendar {

	CalDiagInboxCollectionSync* _inboxCollectionSyncDiagnostics;

}

@property (nonatomic,retain) CalDiagInboxCollectionSync * inboxCollectionSyncDiagnostics;              //@synthesize inboxCollectionSyncDiagnostics=_inboxCollectionSyncDiagnostics - In the implementation block
-(BOOL)isScheduleInbox;
-(id)etagsForItemURLs:(id)arg1 ;
-(BOOL)updateResourcesFromServer:(id)arg1 ;
-(BOOL)deleteResourcesAtURLs:(id)arg1 ;
-(id)allItemURLs;
-(id)initWithCalendarURL:(id)arg1 calendar:(void*)arg2 principal:(id)arg3 title:(id)arg4 ;
-(void)recordDiagnosticsForAccountSync:(id)arg1 ;
-(void*)_copyEventActionWithURL:(id)arg1 ;
-(void)setETag:(id)arg1 forInvitationAtURL:(id)arg2 uniqueIdentifier:(id)arg3 ;
-(CalDiagInboxCollectionSync *)inboxCollectionSyncDiagnostics;
-(BOOL)_removeInvitationWithURL:(id)arg1 ;
-(void)setInboxCollectionSyncDiagnostics:(CalDiagInboxCollectionSync *)arg1 ;
@end

