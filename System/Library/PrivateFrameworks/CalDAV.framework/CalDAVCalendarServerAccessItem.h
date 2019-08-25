/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAccessItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _accessLevel;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * accessLevel;              //@synthesize accessLevel=_accessLevel - In the implementation block
-(CoreDAVItemWithNoChildren *)accessLevel;
-(void)setAccessLevel:(CoreDAVItemWithNoChildren *)arg1 ;
-(id)copyParseRules;
-(id)initWithAccess:(int)arg1 ;
-(id)init;
@end

