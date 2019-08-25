/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEORegionalResourceTileData, GEOResourceManifestConfiguration, GEOResourceLoader, NSLock;

@interface _GEORegionalResourcesTileLoader : NSObject {

	GEORegionalResourceTileData* _tile;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	GEOResourceLoader* _resourceLoader;
	NSLock* _lock;

}
-(void)loadResourcesForTileKey:(const GEOTileKey*)arg1 manifestConfiguration:(id)arg2 auditToken:(id)arg3 finished:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(id)init;
-(void)dealloc;
-(void)cancel;
@end

