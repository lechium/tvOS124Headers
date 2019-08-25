//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface TVHContentRatingImageManager : NSObject
{
    NSDictionary *_imageRecords;	// 8 = 0x8
}

+ (id)_imageForUnknownRatingLabel:(id)arg1;	// IMP=0x00000001000062fc
+ (void)_addImageRecordToDictionary:(id)arg1 ratingSystem:(long long)arg2 ratingLabel:(id)arg3 resourceName:(id)arg4 isTemplatedImage:(_Bool)arg5;	// IMP=0x00000001000061e8
+ (id)_cleanedRatingLabel:(id)arg1;	// IMP=0x0000000100006144
+ (id)_imageRecordLookupKeyWithRatingLabel:(id)arg1 inRatingSystem:(long long)arg2;	// IMP=0x000000010000606c
+ (id)sharedInstance;	// IMP=0x0000000100005540
@property(retain, nonatomic) NSDictionary *imageRecords; // @synthesize imageRecords=_imageRecords;
- (void).cxx_destruct;	// IMP=0x0000000100006668
- (id)records;	// IMP=0x0000000100005904
- (id)_imageRecordForRatingLabel:(id)arg1 inRatingSystem:(long long)arg2;	// IMP=0x0000000100005848
- (id)_imageRecordForContentRating:(id)arg1;	// IMP=0x00000001000057a8
- (_Bool)isTemplatedImageForContentRating:(id)arg1;	// IMP=0x000000010000574c
- (id)imageForRatingLabel:(id)arg1 inRatingSystem:(long long)arg2;	// IMP=0x0000000100005660
- (id)imageForContentRating:(id)arg1;	// IMP=0x00000001000055c0

@end
