/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, NSSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem {

	NSMutableSet* _comps;

}

@property (nonatomic,retain) NSMutableSet * comps;              //@synthesize comps=_comps - In the implementation block
@property (nonatomic,readonly) NSSet * compNames; 
-(NSSet *)compNames;
-(id)componentsAsString;
-(void)addComp:(id)arg1 ;
-(NSMutableSet *)comps;
-(id)copyParseRules;
-(id)childrenToWrite;
-(void)setComps:(NSMutableSet *)arg1 ;
-(id)init;
-(id)description;
@end

