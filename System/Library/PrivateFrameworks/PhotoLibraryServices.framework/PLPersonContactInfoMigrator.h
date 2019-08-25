/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStore, NSArray;

@interface PLPersonContactInfoMigrator : NSObject {

	CNContactStore* _contactStore;
	NSArray* _keysToFetch;
	int _updateNameCount;
	int _populateMatchingDictionaryCount;

}
+(void)migratePersonContactInfoInPhotoLibrary:(id)arg1 ;
+(id)migrationQueue;
-(void)migratePersonContactInfoInPhotoLibrary:(id)arg1 ;
-(void)migratePersonContactInfoInContext:(id)arg1 ;
-(void)migratePerson:(id)arg1 ;
-(id)enumerateResultsWithIncrementalSaveUsingFetchRequest:(id)arg1 inContext:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)updateNameOfPerson:(id)arg1 withContact:(id)arg2 ;
-(void)populateMatchingDictionaryOfPerson:(id)arg1 withContact:(id)arg2 ;
-(id)init;
@end

