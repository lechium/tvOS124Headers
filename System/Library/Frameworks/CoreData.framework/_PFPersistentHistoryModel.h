/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_PFAncillaryModelFactory.h>

@class NSString;

@interface _PFPersistentHistoryModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)ancillaryEntityOffset;
+(unsigned long long)ancillaryEntityCount;
+(id)ancillaryModelNamespace;
+(id)_tombstonesForEntity:(id)arg1 ;
+(BOOL)_hasTombstonesInUserInfo:(id)arg1 ;
+(id)newPersistentHistoryManagedObjectModelForSQLModel:(id)arg1 options:(id)arg2 ;
+(id)newPersistentHistorySQLModelForSQLModel:(id)arg1 options:(id)arg2 ;
+(int)_maxCountOfTombstonesInModel:(id)arg1 ;
+(id)_tombstonesColumnsForEntity:(id)arg1 ;
+(void)createModelsWithTombstoneCount:(int)arg1 andOptions:(id)arg2 ;
+(void)resetCaches;
@end

