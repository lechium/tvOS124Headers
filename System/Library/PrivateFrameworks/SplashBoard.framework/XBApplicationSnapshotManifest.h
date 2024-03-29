/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XBApplicationSnapshotManifestDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol XBApplicationSnapshotManifestDelegate;
@class XBApplicationSnapshotManifestImpl, NSString;

@interface XBApplicationSnapshotManifest : NSObject <XBApplicationSnapshotManifestDelegate, BSDescriptionProviding> {

	XBApplicationSnapshotManifestImpl* _manifestImpl;
	id<XBApplicationSnapshotManifestDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) XBApplicationSnapshotManifestImpl * manifestImpl;              //@synthesize manifestImpl=_manifestImpl - In the implementation block
@property (assign,nonatomic,__weak) id<XBApplicationSnapshotManifestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * containerPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)deleteAllSystemSnapshots;
+(unsigned long long)maximumInFlightDataSize;
+(id)_manifestsByIdentity;
+(id)_manifestQueue;
+(void)initialize;
+(id)debugDescription;
-(NSString *)containerPath;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithApplicationInfo:(id)arg1 ;
-(void)deleteSnapshotsMatchingPredicate:(id)arg1 ;
-(XBApplicationSnapshotManifestImpl *)manifestImpl;
-(id)initWithContainerIdentity:(id)arg1 store:(id)arg2 ;
-(id)snapshotsForGroupID:(id)arg1 ;
-(id)snapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2 ;
-(id)snapshotsForGroupID:(id)arg1 fetchRequest:(id)arg2 ;
-(id)createSnapshotWithGroupID:(id)arg1 ;
-(id)createVariantForSnapshot:(id)arg1 withIdentifier:(id)arg2 ;
-(void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 writeToFile:(BOOL)arg3 didGenerateImage:(/*^block*/id)arg4 didSaveImage:(/*^block*/id)arg5 ;
-(void)saveSnapshot:(id)arg1 atPath:(id)arg2 withContext:(id)arg3 ;
-(void)deleteAllSnapshots;
-(void)deleteSnapshot:(id)arg1 ;
-(void)deleteSnapshots:(id)arg1 ;
-(void)deleteSnapshotsUsingPredicateBuilder:(/*^block*/id)arg1 ;
-(void)deleteSnapshotsForGroupID:(id)arg1 ;
-(void)deleteSnapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2 ;
-(void)deleteSnapshotsForGroupID:(id)arg1 predicateBuilder:(/*^block*/id)arg2 ;
-(void)purgeSnapshotsWithProtectedContent;
-(void)beginSnapshotAccessTransaction:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)manifestDidPurgeSnapshotsWithProtectedContent:(id)arg1 ;
-(void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 writeToFile:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(NSString *)description;
-(void)setDelegate:(id<XBApplicationSnapshotManifestDelegate>)arg1 ;
-(id<XBApplicationSnapshotManifestDelegate>)delegate;
-(BOOL)_invalidate;
@end

