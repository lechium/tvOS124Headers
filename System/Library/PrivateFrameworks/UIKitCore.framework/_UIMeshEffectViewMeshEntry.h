/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:31 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class CAMeshTransform;

@interface _UIMeshEffectViewMeshEntry : _UIVisualEffectViewEntry {

	CAMeshTransform* _requestedMesh;
	CAMeshTransform* _identityMesh;
	long long _meshIdentifier;

}

@property (nonatomic,retain) CAMeshTransform * requestedMesh;              //@synthesize requestedMesh=_requestedMesh - In the implementation block
@property (nonatomic,retain) CAMeshTransform * identityMesh;               //@synthesize identityMesh=_identityMesh - In the implementation block
@property (assign,nonatomic) long long meshIdentifier;                     //@synthesize meshIdentifier=_meshIdentifier - In the implementation block
-(void)applyRequestedEffectToView:(id)arg1 ;
-(void)applyIdentityEffectToView:(id)arg1 ;
-(void)removeEffectFromView:(id)arg1 ;
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(void)setRequestedMesh:(CAMeshTransform *)arg1 ;
-(void)setIdentityMesh:(CAMeshTransform *)arg1 ;
-(BOOL)shouldAnimateProperty:(id)arg1 ;
-(CAMeshTransform *)requestedMesh;
-(CAMeshTransform *)identityMesh;
-(long long)meshIdentifier;
-(void)setMeshIdentifier:(long long)arg1 ;
@end

