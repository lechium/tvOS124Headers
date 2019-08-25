//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IKJSObject.h"

#import "TVHJSDeepLinkParsedURL.h"

@class NSString, TVHKDeepLinkParsedURL;

@interface TVHJSDeepLinkParsedURL : IKJSObject <TVHJSDeepLinkParsedURL>
{
    TVHKDeepLinkParsedURL *_deepLinkParsedURL;	// 8 = 0x8
    NSString *_mediaCategoryType;	// 16 = 0x10
    NSString *_mediaItemType;	// 24 = 0x18
}

@property(copy, nonatomic) NSString *mediaItemType; // @synthesize mediaItemType=_mediaItemType;
@property(copy, nonatomic) NSString *mediaCategoryType; // @synthesize mediaCategoryType=_mediaCategoryType;
@property(retain, nonatomic) TVHKDeepLinkParsedURL *deepLinkParsedURL; // @synthesize deepLinkParsedURL=_deepLinkParsedURL;
- (void).cxx_destruct;	// IMP=0x0000000100013014
@property(readonly, copy, nonatomic) NSString *mediaItemShowTitle;
@property(readonly, copy, nonatomic) NSString *mediaItemSeasonIdentifier;
@property(readonly, copy, nonatomic) NSString *mediaItemAlbumArtistTitle;
@property(readonly, copy, nonatomic) NSString *mediaItemAlbumArtistIdentifier;
@property(readonly, copy, nonatomic) NSString *mediaItemAlbumTitle;
@property(readonly, copy, nonatomic) NSString *mediaItemAlbumIdentifier;
@property(readonly, copy, nonatomic) NSString *mediaItemTitle;
@property(readonly, copy, nonatomic) NSString *mediaItemIdentifier;
@property(readonly, copy, nonatomic) NSString *mediaServerIdentifier;
@property(readonly, copy, nonatomic) NSString *displayType;
@property(readonly, copy, nonatomic) NSString *action;
@property(readonly, copy, nonatomic) NSString *scheme;
- (id)initWithDeepLinkParsedURL:(id)arg1 appContext:(id)arg2;	// IMP=0x00000001000128d0
- (id)init;	// IMP=0x0000000100012880

@end
