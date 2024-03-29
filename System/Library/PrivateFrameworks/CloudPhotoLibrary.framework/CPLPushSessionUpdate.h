/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLChangeSessionUpdate.h>

@class CPLChangeBatch, NSDictionary, NSArray, NSSet;

@interface CPLPushSessionUpdate : CPLChangeSessionUpdate {

	CPLChangeBatch* _diffBatch;
	NSDictionary* _uploadIdentifiers;
	NSArray* _addedRecords;
	NSArray* _updatedRecords;
	NSArray* _deletedRecordScopedIdentifiers;
	NSSet* _unquarantinedRecordScopedIdentifiers;

}

@property (nonatomic,readonly) CPLChangeBatch * diffBatch;                                //@synthesize diffBatch=_diffBatch - In the implementation block
@property (nonatomic,readonly) NSDictionary * uploadIdentifiers;                          //@synthesize uploadIdentifiers=_uploadIdentifiers - In the implementation block
@property (nonatomic,readonly) NSArray * addedRecords;                                    //@synthesize addedRecords=_addedRecords - In the implementation block
@property (nonatomic,readonly) NSArray * updatedRecords;                                  //@synthesize updatedRecords=_updatedRecords - In the implementation block
@property (nonatomic,readonly) NSArray * deletedRecordScopedIdentifiers;                  //@synthesize deletedRecordScopedIdentifiers=_deletedRecordScopedIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * unquarantinedRecordScopedIdentifiers;              //@synthesize unquarantinedRecordScopedIdentifiers=_unquarantinedRecordScopedIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)updatedRecords;
-(BOOL)discardFromStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyToStore:(id)arg1 error:(id*)arg2 ;
-(id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg1 ;
-(id)storageForStatusInStore:(id)arg1 ;
-(NSArray *)addedRecords;
-(NSArray *)deletedRecordScopedIdentifiers;
-(NSSet *)unquarantinedRecordScopedIdentifiers;
-(id)initWithPushSessionTracker:(id)arg1 error:(id*)arg2 ;
-(CPLChangeBatch *)diffBatch;
-(NSDictionary *)uploadIdentifiers;
-(id)statusDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

