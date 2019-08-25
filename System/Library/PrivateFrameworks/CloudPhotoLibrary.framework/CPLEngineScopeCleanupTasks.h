/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSMutableArray, NSString, CPLPlatformObject;

@interface CPLEngineScopeCleanupTasks : CPLEngineStorage <CPLAbstractObject> {

	long long _currentCleanupScopeIndex;
	NSMutableArray* _remainingStoragesToCleanup;
	BOOL _shouldRequestACleanupToScheduler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
+(id)scopeTypeDescriptionForScopeType:(unsigned long long)arg1 ;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(BOOL)cleanupStepHasMore:(BOOL*)arg1 error:(id*)arg2 ;
-(BOOL)hasCleanupTasks;
-(BOOL)addCleanupTaskForScopeWithIndex:(long long)arg1 scopeIdentifier:(id)arg2 scopeType:(unsigned long long)arg3 error:(id*)arg4 ;
-(unsigned long long)scopeType;
@end
