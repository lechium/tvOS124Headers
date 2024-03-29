/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSFetchRequest, NSArray, NSSQLFetchRequestContext, NSString, NSBatchDeleteRequest;

@interface NSSQLBatchDeleteRequestContext : NSSQLStoreRequestContext {

	NSFetchRequest* _fetchRequestForObjectsToDelete;
	NSArray* _deleteStatements;
	NSArray* _deletedObjectIDs;
	NSSQLFetchRequestContext* _fetchContext;
	NSArray* _externalDataReferenceTriggerStatements;
	NSString* _tempTableName;
	NSArray* _externalDataReferencesToDelete;
	NSArray* _fileBackedFuturesToDelete;

}

@property (nonatomic,readonly) NSBatchDeleteRequest * request; 
@property (nonatomic,retain,readonly) NSFetchRequest * fetchRequestForObjectsToDelete; 
@property (nonatomic,retain,readonly) NSArray * deleteStatements;                                   //@synthesize deleteStatements=_deleteStatements - In the implementation block
@property (nonatomic,retain,readonly) NSSQLFetchRequestContext * fetchContext; 
@property (nonatomic,retain) NSArray * affectedObjectIDs;                                           //@synthesize deletedObjectIDs=_deletedObjectIDs - In the implementation block
@property (nonatomic,retain) NSArray * exernalDataReferenceStatements;                              //@synthesize externalDataReferenceTriggerStatements=_externalDataReferenceTriggerStatements - In the implementation block
@property (nonatomic,retain) NSString * tempTableName;                                              //@synthesize tempTableName=_tempTableName - In the implementation block
@property (nonatomic,retain) NSArray * externalDataReferencesToDelete;                              //@synthesize externalDataReferencesToDelete=_externalDataReferencesToDelete - In the implementation block
@property (nonatomic,retain) NSArray * fileBackedFuturesToDelete;                                   //@synthesize fileBackedFuturesToDelete=_fileBackedFuturesToDelete - In the implementation block
-(BOOL)isWritingRequest;
-(void)executeRequestCore:(id*)arg1 ;
-(NSFetchRequest *)fetchRequestForObjectsToDelete;
-(id)_createFetchRequestContextForObjectsToDelete;
-(void)_createDeleteStatements;
-(NSSQLFetchRequestContext *)fetchContext;
-(void)executePrologue;
-(NSArray *)deleteStatements;
-(NSArray *)affectedObjectIDs;
-(void)setAffectedObjectIDs:(NSArray *)arg1 ;
-(NSArray *)exernalDataReferenceStatements;
-(void)setExernalDataReferenceStatements:(NSArray *)arg1 ;
-(NSString *)tempTableName;
-(void)setTempTableName:(NSString *)arg1 ;
-(NSArray *)externalDataReferencesToDelete;
-(void)setExternalDataReferencesToDelete:(NSArray *)arg1 ;
-(NSArray *)fileBackedFuturesToDelete;
-(void)setFileBackedFuturesToDelete:(NSArray *)arg1 ;
-(void)dealloc;
-(NSBatchDeleteRequest *)request;
@end

