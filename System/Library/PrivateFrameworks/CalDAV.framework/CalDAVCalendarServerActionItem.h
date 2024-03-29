/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CalDAVCalendarServerUpdateItem, CalDAVCalendarServerCancelItem, CalDAVCalendarServerReplyItem;

@interface CalDAVCalendarServerActionItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _create;
	CalDAVCalendarServerUpdateItem* _update;
	CalDAVCalendarServerCancelItem* _cancel;
	CalDAVCalendarServerReplyItem* _reply;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * create;                   //@synthesize create=_create - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerUpdateItem * update;              //@synthesize update=_update - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerCancelItem * cancel;              //@synthesize cancel=_cancel - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerReplyItem * reply;                //@synthesize reply=_reply - In the implementation block
-(CalDAVCalendarServerReplyItem *)reply;
-(CoreDAVItemWithNoChildren *)create;
-(void)setCancel:(CalDAVCalendarServerCancelItem *)arg1 ;
-(void)setUpdate:(CalDAVCalendarServerUpdateItem *)arg1 ;
-(id)copyParseRules;
-(void)setCreate:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setReply:(CalDAVCalendarServerReplyItem *)arg1 ;
-(id)init;
-(CalDAVCalendarServerUpdateItem *)update;
-(CalDAVCalendarServerCancelItem *)cancel;
@end

