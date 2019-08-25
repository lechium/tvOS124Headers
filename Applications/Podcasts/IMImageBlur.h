//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMImageModifier.h"

@class NSString;

@interface IMImageBlur : NSObject <IMImageModifier>
{
    long long _style;	// 8 = 0x8
    double _radius;	// 16 = 0x10
}

@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (id)_lightBackdropBlurSettings;	// IMP=0x00000001001ca4d8
- (id)_newBackdropSettings;	// IMP=0x00000001001ca348
- (id)_backdropBlurSettings;	// IMP=0x00000001001ca2dc
- (id)_blurredImageFromSourceImage:(id)arg1;	// IMP=0x00000001001ca244
- (_Bool)hasModifications;	// IMP=0x00000001001ca1f8
- (id)modificationCacheKey;	// IMP=0x00000001001c9f68
- (id)imageFromSourceImage:(id)arg1;	// IMP=0x00000001001c9f5c
- (id)initWithStyle:(long long)arg1 radius:(double)arg2;	// IMP=0x00000001001c9ef4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

