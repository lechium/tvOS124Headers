/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKCoreDataStorageDelegate
@required
-(BOOL)coreDataStorage:(id)arg1 shouldCallDelegateBeforeAutoMigrationFromManagedObjectModelHavingVersion:(unsigned long long)arg2;
-(BOOL)coreDataStorage:(id)arg1 shouldCallDelegateAfterAutoMigrationToManagedObjectModelHavingVersion:(unsigned long long)arg2;
-(id)coreDataStorage:(id)arg1 needsManagedObjectModelNameForVersion:(unsigned long long)arg2;
-(BOOL)coreDataStorage:(id)arg1 willAutoMigrateStoreAtURL:(id)arg2 fromManagedObjectModel:(id)arg3 havingVersion:(unsigned long long)arg4 error:(id*)arg5;
-(BOOL)coreDataStorage:(id)arg1 didAutoMigratePersistentStore:(id)arg2 toManagedObjectModel:(id)arg3 havingVersion:(unsigned long long)arg4 error:(id*)arg5;

@end

