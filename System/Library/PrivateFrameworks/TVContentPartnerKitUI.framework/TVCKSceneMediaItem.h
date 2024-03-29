/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVPMediaItem;
@class NSObject, NSSet, NSMutableDictionary;

@interface TVCKSceneMediaItem : NSObject {

	NSObject*<TVPMediaItem> _mediaItem;
	NSSet* _localMetadataKeys;
	NSMutableDictionary* _localMetadata;

}

@property (nonatomic,retain) NSObject*<TVPMediaItem> mediaItem;                //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) NSSet * localMetadataKeys;                        //@synthesize localMetadataKeys=_localMetadataKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * localMetadata;              //@synthesize localMetadata=_localMetadata - In the implementation block
-(NSObject*<TVPMediaItem>)mediaItem;
-(void)setMediaItem:(NSObject*<TVPMediaItem>)arg1 ;
-(id)initWithMediaItem:(id)arg1 sceneTimeRange:(id)arg2 ;
-(void)_mediaItemMetadataWillOrDidChange:(id)arg1 ;
-(NSSet *)localMetadataKeys;
-(void)setLocalMetadataKeys:(NSSet *)arg1 ;
-(NSMutableDictionary *)localMetadata;
-(void)setLocalMetadata:(NSMutableDictionary *)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)hasTrait:(id)arg1 ;
@end

