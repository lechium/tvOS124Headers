/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSEntityMigrationPolicy : NSObject
-(BOOL)beginEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3 ;
-(BOOL)createDestinationInstancesForSourceInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id*)arg4 ;
-(BOOL)endInstanceCreationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3 ;
-(BOOL)createRelationshipsForDestinationInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id*)arg4 ;
-(BOOL)endRelationshipCreationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3 ;
-(BOOL)performCustomValidationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3 ;
-(BOOL)endEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3 ;
-(id)_nonNilValueOrDefaultValueForAttribute:(id)arg1 source:(id)arg2 destination:(id)arg3 ;
@end

