//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache;

@interface TVNPRoutingTintedImageCache : NSObject
{
    NSCache *_imageCache;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010001e0e0
@property(readonly, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
- (void).cxx_destruct;	// IMP=0x000000010001e474
- (id)tintedImageWithName:(id)arg1 tintColor:(id)arg2;	// IMP=0x000000010001e21c
- (id)init;	// IMP=0x000000010001e19c

@end

