/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLSyncContext, PLSyncableAsset;
@interface PLCPLFacePullSupport : NSObject {

	id<PLSyncContext> _syncContext;
	id<PLSyncableAsset> _currentAsset;

}
+(void)applyFacesChangesFromAssetChange:(id)arg1 toAsset:(id)arg2 inSyncContext:(id)arg3 ;
+(id)_disjointSetsByAddingSet:(id)arg1 toSets:(id)arg2 ;
-(id)initWithSyncContext:(id)arg1 asset:(id)arg2 ;
-(void)applyFacesChangesFromAssetChange:(id)arg1 ;
-(long long)_policyForApplyingFaceChangesFromAssetChange:(id)arg1 ;
-(id)_applyAssetChange:(id)arg1 toExistingFaces:(id)arg2 withPolicy:(long long)arg3 ;
-(void)_finalizeFace:(id)arg1 withFaceRef:(id)arg2 applyDimensionAndState:(BOOL)arg3 ;
-(id)_createFaceFromFaceRef:(id)arg1 algorithmVersion:(int)arg2 ;
-(void)_applyDimensionAndStateFromFaceReference:(id)arg1 toDetectedFace:(id)arg2 ;
-(void)_applyPersonFromFaceReference:(id)arg1 toDetectedFace:(id)arg2 ;
-(BOOL)_canReassignFaceFromPerson:(id)arg1 toPerson:(id)arg2 shouldDedupePersons:(BOOL*)arg3 ;
-(void)_unlinkPersonIfVerifiedFromFace:(id)arg1 ;
-(void)dealloc;
@end

