/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/FBSceneHostSnapshotView.h>
@class FBSceneSnapshot;


@protocol FBSceneHostSnapshotView <NSObject>
@property (nonatomic,retain,readonly) FBSceneSnapshot * sceneSnapshot; 
@property (nonatomic,retain,readonly) id IOSurface; 
@required
-(FBSceneSnapshot *)sceneSnapshot;
-(id)IOSurface;

@end


@class FBSceneSnapshot, NSString;

@interface FBSceneHostSnapshotView : UIView <FBSceneHostSnapshotView> {

	FBSceneSnapshot* _snapshot;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) FBSceneSnapshot * sceneSnapshot;              //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,retain,readonly) id IOSurface; 
-(id)_initWithSnapshot:(id)arg1 ;
-(FBSceneSnapshot *)sceneSnapshot;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)IOSurface;
@end
