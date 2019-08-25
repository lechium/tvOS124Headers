//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSURL;

@interface SVSSiriPresentationPluginHost : NSObject
{
    _Bool _loaded;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    NSMutableDictionary *_bundleURLsByBundleIdentifier;	// 24 = 0x18
}

+ (id)sharedSiriPresentationPluginHost;	// IMP=0x00000001000443ac
+ (id)_defaultURL;	// IMP=0x00000001000442f0
@property(readonly, nonatomic, getter=_bundleURLsByBundleIdentifier) NSMutableDictionary *bundleURLsByBundleIdentifier; // @synthesize bundleURLsByBundleIdentifier=_bundleURLsByBundleIdentifier;
@property(nonatomic, getter=_isLoaded, setter=_setLoaded:) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic, getter=_URL) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;	// IMP=0x0000000100045bc8
- (void)_save;	// IMP=0x0000000100045930
- (void)_load;	// IMP=0x0000000100045604
- (void)_loadFromPropertyListRepresentation:(id)arg1;	// IMP=0x00000001000452d8
- (id)_propertyListRepresentation;	// IMP=0x000000010004515c
- (id)presentationWithIdentifier:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;	// IMP=0x0000000100045030
- (void)preloadPluginBundles;	// IMP=0x0000000100044f58
- (void)preloadPresentationBundleWithIdentifier:(id)arg1;	// IMP=0x0000000100044e2c
- (id)_siriPresentationPluginBundleWithIdentifier:(id)arg1;	// IMP=0x0000000100044d28
- (id)_cachedURLForBundleWithIdentifier:(id)arg1;	// IMP=0x0000000100044c94
- (void)_rescanBundles;	// IMP=0x0000000100044850
- (id)_builtInPresentationWithIdentifier:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;	// IMP=0x0000000100044718
- (id)_classNameForBuiltInPresentationWithIdentifier:(id)arg1;	// IMP=0x00000001000445c0
- (id)init;	// IMP=0x000000010004455c
- (id)initWithURL:(id)arg1;	// IMP=0x00000001000444a0

@end

