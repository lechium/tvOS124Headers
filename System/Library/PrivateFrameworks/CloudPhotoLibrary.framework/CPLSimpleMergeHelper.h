/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPLEngineStore;

@interface CPLSimpleMergeHelper : NSObject {

	CPLEngineStore* _store;

}

@property (nonatomic,readonly) CPLEngineStore * store;              //@synthesize store=_store - In the implementation block
+(id)_mergerWithConflictsForStore:(id)arg1 conflictingScopeIdentifiers:(id)arg2 ;
+(id)_mergerWithNoConflictsForStore:(id)arg1 ;
-(id)initWithEngineStore:(id)arg1 ;
-(id)mergerForBatch:(id)arg1 error:(id*)arg2 ;
-(BOOL)_changeCanConflict:(id)arg1 ;
-(CPLEngineStore *)store;
@end
