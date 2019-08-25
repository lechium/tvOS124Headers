/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>

@class AVWeakReference, NSURL, NSString, NSArray;

@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVWeakReference* _weakReference;

}

@property (getter=_weakReference,nonatomic,readonly) AVWeakReference * weakReference; 
@property (nonatomic,readonly) NSURL * URL; 
@property (getter=_formatReader,nonatomic,readonly) OpaqueFigFormatReaderRef formatReader; 
@property (getter=_figAsset,nonatomic,readonly) OpaqueFigAssetRef figAsset; 
@property (getter=_playbackItem,nonatomic,readonly) OpaqueFigPlaybackItemRef playbackItem; 
@property (getter=_classForTrackInspectors,nonatomic,readonly) Class classForTrackInspectors; 
@property (nonatomic,readonly) SCD_Struct_AV5 duration; 
@property (nonatomic,readonly) NSString * lyrics; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@property (getter=isExportable,nonatomic,readonly) BOOL exportable; 
@property (getter=isReadable,nonatomic,readonly) BOOL readable; 
@property (getter=isComposable,nonatomic,readonly) BOOL composable; 
@property (getter=isCompatibleWithSavedPhotosAlbum,nonatomic,readonly) BOOL compatibleWithSavedPhotosAlbum; 
@property (nonatomic,readonly) NSArray * figChapterGroupInfo; 
@property (nonatomic,readonly) NSArray * figChapters; 
@property (nonatomic,readonly) NSURL * resolvedURL; 
@property (nonatomic,readonly) NSURL * originalNetworkContentURL; 
@property (nonatomic,readonly) unsigned long long downloadToken; 
@property (nonatomic,readonly) BOOL hasProtectedContent; 
@property (getter=_isStreaming,nonatomic,readonly) BOOL streaming; 
@property (getter=isAssociatedWithFragmentMinder,nonatomic,readonly) BOOL associatedWithFragmentMinder; 
@property (assign,setter=_setFragmentMindingInterval:,getter=_fragmentMindingInterval,nonatomic) double fragmentMindingInterval; 
+(void)initialize;
-(OpaqueFigAssetRef)_figAsset;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(double)_fragmentMindingInterval;
-(void)_setFragmentMindingInterval:(double)arg1 ;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1 ;
-(void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1 ;
-(void)_serverHasDied;
-(BOOL)isExportable;
-(BOOL)isReadable;
-(BOOL)isComposable;
-(id)_weakReference;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(NSArray *)figChapterGroupInfo;
-(NSArray *)figChapters;
-(id)assetInspector;
-(NSURL *)originalNetworkContentURL;
-(BOOL)isAssociatedWithFragmentMinder;
-(id)_createAVErrorForError:(id)arg1 andFigErrorCode:(int)arg2 ;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)isPlayable;
-(NSURL *)resolvedURL;
-(NSString *)lyrics;
-(BOOL)_isStreaming;
-(BOOL)hasProtectedContent;
-(unsigned long long)downloadToken;
-(void)cancelLoading;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_AV5)duration;
-(NSURL *)URL;
@end

