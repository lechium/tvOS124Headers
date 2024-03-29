/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICMediaApplicationBannerStore.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface ICMediaApplicationBannerTestStore : ICMediaApplicationBannerStore {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _bannerCache;
	NSMutableDictionary* _propertyCache;

}
-(id)bannersForBundleIdentifier:(id)arg1 target:(id)arg2 error:(id*)arg3 ;
-(BOOL)setBannerStoreProperty:(id)arg1 forKey:(id)arg2 ;
-(id)bannerStorePropertyForKey:(id)arg1 ;
-(BOOL)addBanner:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeBannerWithGUID:(id)arg1 error:(id*)arg2 ;
-(id)allBannersWithResult:(id*)arg1 ;
-(BOOL)removeAllBannersWithResult:(id*)arg1 ;
-(id)init;
@end

