//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun  9 2020 17:35:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class BKSDisplayRenderOverlayDescriptor, NSData;

@interface _BKDisplayRenderOverlayPersistenceData : NSObject <NSSecureCoding>
{
    float _level;
    long long _overlayType;
    BKSDisplayRenderOverlayDescriptor *_descriptor;
    struct CGImage *_image;
    NSData *_imageData;
}

+ (_Bool)supportsSecureCoding;
+ (id)classesRequiredToDecode;
@property(nonatomic) float level; // @synthesize level=_level;
@property(nonatomic) struct CGImage *image; // @synthesize image=_image;
@property(retain, nonatomic) BKSDisplayRenderOverlayDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(nonatomic) long long overlayType; // @synthesize overlayType=_overlayType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)_initWithDescriptor:(id)arg1 overlayType:(long long)arg2 imageData:(id)arg3 level:(float)arg4;

@end

