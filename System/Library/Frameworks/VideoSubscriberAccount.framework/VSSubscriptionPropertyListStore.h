/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSAtomicStore.h>

@interface VSSubscriptionPropertyListStore : NSAtomicStore
+(id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(BOOL)load:(id*)arg1 ;
-(id)newCacheNodeForManagedObject:(id)arg1 ;
-(void)updateCacheNode:(id)arg1 fromManagedObject:(id)arg2 ;
-(id)newReferenceObjectForManagedObject:(id)arg1 ;
-(id)type;
-(BOOL)save:(id*)arg1 ;
@end

