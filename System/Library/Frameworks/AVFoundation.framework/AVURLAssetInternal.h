/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVAssetInspectorLoader, AVAssetClientURLRequestHelper, AVAssetCustomURLBridgeForNSURLProtocol, AVAssetCustomURLAuthentication, NSURL, NSArray, AVAssetResourceLoader, AVAssetCache, NSObject, NSDictionary, AVWeakReference;

@interface AVURLAssetInternal : NSObject {

	AVAssetInspectorLoader* loader;
	AVAssetClientURLRequestHelper* URLRequestHelper;
	AVAssetCustomURLBridgeForNSURLProtocol* customURLBridgeForNSURLProtocol;
	AVAssetCustomURLAuthentication* customURLAuthenticationUsingKeychain;
	NSURL* URL;
	NSArray* tracks;
	AVAssetResourceLoader* resourceLoader;
	long long makeOneResourceLoaderOnly;
	AVAssetCache* assetCache;
	long long makeOneAssetDownloadCacheOnly;
	NSObject*<OS_dispatch_queue> tracksAccessQueue;
	NSDictionary* initializationOptions;
	BOOL hasInstanceIdentifierMapping;
	AVWeakReference* sessionReference;

}
@end

