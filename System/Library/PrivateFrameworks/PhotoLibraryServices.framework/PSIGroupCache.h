/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSIGroupCacheDelegate;
@class NSMutableSet;

@interface PSIGroupCache : NSObject {

	NSMutableSet* _groups;
	id<PSIGroupCacheDelegate> _delegate;
	unsigned long long _numberOfGroupsChecked;
	unsigned long long _numberOfGroupsQueried;

}

@property (readonly) unsigned long long numberOfGroupsChecked;              //@synthesize numberOfGroupsChecked=_numberOfGroupsChecked - In the implementation block
@property (readonly) unsigned long long numberOfGroupsQueried;              //@synthesize numberOfGroupsQueried=_numberOfGroupsQueried - In the implementation block
-(unsigned long long)idOfGroupWithText:(id)arg1 identifier:(id)arg2 category:(unsigned long long)arg3 owningGroupId:(unsigned long long)arg4 didUpdateGroup:(out BOOL*)arg5 ;
-(unsigned long long)numberOfGroupsQueried;
-(unsigned long long)numberOfGroupsChecked;
-(id)initWithDelegate:(id)arg1 ;
@end

