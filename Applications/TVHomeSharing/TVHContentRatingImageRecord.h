//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TVHContentRatingImageRecord : NSObject
{
    _Bool _templatedImage;	// 8 = 0x8
    NSString *_resourceName;	// 16 = 0x10
}

@property(nonatomic, getter=isTemplatedImage) _Bool templatedImage; // @synthesize templatedImage=_templatedImage;
@property(copy, nonatomic) NSString *resourceName; // @synthesize resourceName=_resourceName;
- (void).cxx_destruct;	// IMP=0x000000010000552c
- (id)initWithResourceName:(id)arg1 isTemplatedImage:(_Bool)arg2;	// IMP=0x0000000100005450

@end

