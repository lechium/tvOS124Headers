/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@protocol CalDAVPrincipal;
@class NSMutableSet;

@interface CalDAVOperation : CoreDAVTaskGroup {

	BOOL _isCancellingTaskGroups;
	id<CalDAVPrincipal> _principal;
	NSMutableSet* _outstandingTaskGroups;

}

@property (nonatomic,retain) id<CalDAVPrincipal> principal;                     //@synthesize principal=_principal - In the implementation block
@property (nonatomic,retain) NSMutableSet * outstandingTaskGroups;              //@synthesize outstandingTaskGroups=_outstandingTaskGroups - In the implementation block
-(NSMutableSet *)outstandingTaskGroups;
-(void)cancelTaskGroup;
-(void)_tearDownAllTaskGroupsWithBlock:(/*^block*/id)arg1 ;
-(void)bailWithError:(id)arg1 ;
-(void)setOutstandingTaskGroups:(NSMutableSet *)arg1 ;
-(void)setPrincipal:(id<CalDAVPrincipal>)arg1 ;
-(id)initWithPrincipal:(id)arg1 ;
-(id<CalDAVPrincipal>)principal;
-(id)init;
-(void)dealloc;
@end

