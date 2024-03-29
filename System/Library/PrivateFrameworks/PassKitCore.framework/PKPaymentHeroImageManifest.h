/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface PKPaymentHeroImageManifest : NSObject {

	NSDictionary* _images;

}

@property (nonatomic,readonly) NSDictionary * images;              //@synthesize images=_images - In the implementation block
+(id)manifestFileForRegion:(id)arg1 ;
+(void)saveManifestDataToDeviceForRegion:(id)arg1 data:(id)arg2 ;
+(BOOL)manifestFileExistsForRegion:(id)arg1 ;
+(void)removeManifestFileForRegion:(id)arg1 ;
+(id)manifestForRegion:(id)arg1 ;
+(void)downloadManifestForRegion:(id)arg1 url:(id)arg2 fileDownloader:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSDictionary *)images;
-(id)initWithDictionary:(id)arg1 ;
@end

