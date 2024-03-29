//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IKJSObject.h"

#import "TVHJSMediaEntity.h"

@class NSDate, NSNumber, NSString, TVHJSMediaEntityType, TVHKMediaEntity;

@interface TVHJSMediaEntity : IKJSObject <TVHJSMediaEntity>
{
    TVHJSMediaEntityType *_type;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_mediaServerIdentifier;	// 24 = 0x18
    NSString *_genreTitle;	// 32 = 0x20
    NSString *_albumTitle;	// 40 = 0x28
    NSString *_albumIdentifier;	// 48 = 0x30
    TVHKMediaEntity *_mediaEntity;	// 56 = 0x38
}

@property(retain, nonatomic) TVHKMediaEntity *mediaEntity; // @synthesize mediaEntity=_mediaEntity;
- (void).cxx_destruct;	// IMP=0x000000010002745c
- (id)imageResourceNameWithSize:(id)arg1;	// IMP=0x00000001000272a4
@property(readonly, copy, nonatomic) NSString *imageLoadParams;
@property(readonly, copy, nonatomic) NSString *playedStateResourceName;
@property(copy, nonatomic) NSString *playedState;
@property(readonly, copy, nonatomic) NSNumber *duration;
@property(readonly, copy, nonatomic) NSString *contentDescription;
@property(readonly, copy, nonatomic) NSNumber *releaseYear;
@property(readonly, copy, nonatomic) NSDate *releaseDate;
@property(readonly, copy, nonatomic) NSDate *addedDate;
@property(readonly, copy, nonatomic) NSNumber *seasonNumber;
@property(readonly, copy, nonatomic) NSString *albumIdentifier; // @synthesize albumIdentifier=_albumIdentifier;
@property(readonly, copy, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(readonly, copy, nonatomic) NSString *genreTitle; // @synthesize genreTitle=_genreTitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *metadataHash;
@property(readonly, copy, nonatomic) NSString *mediaServerIdentifier; // @synthesize mediaServerIdentifier=_mediaServerIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) TVHJSMediaEntityType *type; // @synthesize type=_type;
@property(readonly, copy) NSString *description;
- (id)initWithMediaEntity:(id)arg1 appContext:(id)arg2;	// IMP=0x000000010002669c
- (id)initWithAppContext:(id)arg1;	// IMP=0x0000000100026614
- (id)init;	// IMP=0x000000010002658c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

