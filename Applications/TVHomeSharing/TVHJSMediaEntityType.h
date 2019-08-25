//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IKJSObject.h"

#import "TVHJSMediaEntityType.h"

@class NSString, TVHKMediaEntityType;

@interface TVHJSMediaEntityType : IKJSObject <TVHJSMediaEntityType>
{
    NSString *_subtype;	// 8 = 0x8
    NSString *_mediaCategoryType;	// 16 = 0x10
    NSString *_mediaCollectionType;	// 24 = 0x18
    NSString *_mediaItemType;	// 32 = 0x20
    TVHKMediaEntityType *_mediaEntityType;	// 40 = 0x28
}

@property(retain, nonatomic) TVHKMediaEntityType *mediaEntityType; // @synthesize mediaEntityType=_mediaEntityType;
- (void).cxx_destruct;	// IMP=0x0000000100026510
@property(readonly, copy, nonatomic) NSString *mediaItemType; // @synthesize mediaItemType=_mediaItemType;
@property(readonly, copy, nonatomic) NSString *mediaCollectionType; // @synthesize mediaCollectionType=_mediaCollectionType;
@property(readonly, copy, nonatomic) NSString *mediaCategoryType; // @synthesize mediaCategoryType=_mediaCategoryType;
@property(readonly, copy, nonatomic) NSString *subtype; // @synthesize subtype=_subtype;
- (id)initWithMediaEntityType:(id)arg1 appContext:(id)arg2;	// IMP=0x00000001000260f4
- (id)initWithAppContext:(id)arg1;	// IMP=0x000000010002606c
- (id)init;	// IMP=0x0000000100025fe4

@end

