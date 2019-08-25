/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIActivity;

@interface _UIActivitySortItem : NSObject {

	UIActivity* _activity;
	long long _group;
	id _secondarySortValue;
	id _tertiarySortValue;

}

@property (nonatomic,readonly) UIActivity * activity;              //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) long long group;                    //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) id secondarySortValue;              //@synthesize secondarySortValue=_secondarySortValue - In the implementation block
@property (nonatomic,readonly) id tertiarySortValue;               //@synthesize tertiarySortValue=_tertiarySortValue - In the implementation block
+(id)sortDescriptorForActivity:(id)arg1 withGroup:(long long)arg2 secondarySortValue:(id)arg3 ;
+(id)sortDescriptorForActivity:(id)arg1 withGroup:(long long)arg2 secondarySortValue:(id)arg3 tertiarySortValue:(id)arg4 ;
-(id)debugDescription;
-(long long)group;
-(long long)compare:(id)arg1 ;
-(UIActivity *)activity;
-(id)secondarySortValue;
-(id)tertiarySortValue;
@end

