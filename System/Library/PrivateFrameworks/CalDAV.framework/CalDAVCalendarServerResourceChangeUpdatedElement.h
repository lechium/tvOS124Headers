/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@class CoreDAVItem, NSMutableSet;

@interface CalDAVCalendarServerResourceChangeUpdatedElement : CalDAVCalendarServerResourceChangeElement {

	BOOL _content;
	CoreDAVItem* _prop;
	NSMutableSet* _calendarChanges;

}

@property (assign,nonatomic) BOOL content;                                //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) CoreDAVItem * prop;                          //@synthesize prop=_prop - In the implementation block
@property (nonatomic,retain) NSMutableSet * calendarChanges;              //@synthesize calendarChanges=_calendarChanges - In the implementation block
-(void)addContentItem:(id)arg1 ;
-(id)copyParseRules;
-(CoreDAVItem *)prop;
-(NSMutableSet *)calendarChanges;
-(void)setCalendarChanges:(NSMutableSet *)arg1 ;
-(void)setProp:(CoreDAVItem *)arg1 ;
-(void)addCalendarChange:(id)arg1 ;
-(id)init;
-(BOOL)content;
-(void)setContent:(BOOL)arg1 ;
@end

