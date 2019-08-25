/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAsset.h>

@class NSDictionary, AVAssetInspectorLoader, NSArray;

@interface AVDataAsset : AVAsset {

	NSDictionary* _initializationOptions;
	AVAssetInspectorLoader* _loader;
	long long _allocateTracksOnceOnly;
	NSArray* _tracks;

}
+(unsigned long long)_dataLengthLimit;
+(id)_getFigAssetCreationOptionsFromDataAssetInitializationOptions:(id)arg1 figAssetCreationFlags:(unsigned long long*)arg2 ;
-(id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3 ;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(unsigned long long)referenceRestrictions;
-(id)initWithData:(id)arg1 contentType:(id)arg2 ;
-(id)tracks;
-(void)dealloc;
@end

