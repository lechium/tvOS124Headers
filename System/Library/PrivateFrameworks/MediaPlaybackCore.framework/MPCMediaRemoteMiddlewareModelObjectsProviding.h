/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MPSectionedCollection, NSIndexPath;


@protocol MPCMediaRemoteMiddlewareModelObjectsProviding <NSObject>
@property (nonatomic,readonly) MPSectionedCollection * sourceContentItems; 
@property (nonatomic,readonly) MPSectionedCollection * modelObjects; 
@property (nonatomic,copy,readonly) NSIndexPath * playingIndexPath; 
@required
-(MPSectionedCollection *)modelObjects;
-(NSIndexPath *)playingIndexPath;
-(MPSectionedCollection *)sourceContentItems;

@end

