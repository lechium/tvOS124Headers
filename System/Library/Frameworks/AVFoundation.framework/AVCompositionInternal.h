/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetInspectorLoader, AVAssetInspector, NSDictionary, NSMutableArray;

@interface AVCompositionInternal : NSObject {

	OpaqueFigMutableCompositionRef mutableComposition;
	long long formatReaderInitializationOnce;
	long long assetInspectorInitializationOnce;
	long long tracksInitializationOnce;
	OpaqueFigFormatReaderRef formatReader;
	AVAssetInspectorLoader* assetInspectorLoader;
	AVAssetInspector* assetInspector;
	CGSize naturalSize;
	NSDictionary* URLAssetInitializationOptions;
	NSMutableArray* tracks;
	long long figAssetInitializationOnce;
	OpaqueFigAssetRef figAsset;

}
@end

