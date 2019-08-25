/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/_NSNotifyingWrapperMutableSet.h>

@class _NSFaultingMutableSetMutationMethods;

@interface _NSProxyWrapperMutableSet : _NSNotifyingWrapperMutableSet {

	_NSFaultingMutableSetMutationMethods* _mutationMethods;

}
-(id)initWithContainer:(id)arg1 key:(id)arg2 mutableSet:(id)arg3 mutationMethods:(id)arg4 ;
-(void)setSet:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)removeObject:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
@end
