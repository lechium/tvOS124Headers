/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSLock, NSBundle;

@interface _NSBundleODRDataCommon : NSObject {

	NSMutableDictionary* _assetPackToURL;
	NSLock* _lock;
	NSBundle* _bundle;
	long long _sandboxToken;

}
-(BOOL)assetPacksBecameAvailable:(id)arg1 error:(id*)arg2 ;
-(BOOL)assetPacksBecameUnavailable:(id)arg1 error:(id*)arg2 ;
-(id)URLForAssetPack:(id)arg1 ;
-(void)dealloc;
-(id)initWithBundle:(id)arg1 ;
@end

