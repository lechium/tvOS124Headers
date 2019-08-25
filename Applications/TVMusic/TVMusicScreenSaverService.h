//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVPhotoServiceInterface.h"

@class NSString;

@interface TVMusicScreenSaverService : NSObject <TVPhotoServiceInterface>
{
    id <TVPhotoServerInterface> _remotePhotoServerInterface;	// 8 = 0x8
    id <NSObject> _syncObserverToken;	// 16 = 0x10
}

+ (void)initialize;	// IMP=0x000000010003f8f0
@property(retain, nonatomic) id <NSObject> syncObserverToken; // @synthesize syncObserverToken=_syncObserverToken;
@property(retain, nonatomic) id <TVPhotoServerInterface> remotePhotoServerInterface; // @synthesize remotePhotoServerInterface=_remotePhotoServerInterface;
- (void).cxx_destruct;	// IMP=0x0000000100041414
- (void)_getArtworkURLsForAlbums:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000402bc
- (void)_fetchPhotoAssetsForAlbumArtwork:(CDUnknownBlockType)arg1;	// IMP=0x000000010003fa98
- (void)registerRemotePhotoServer:(id)arg1;	// IMP=0x000000010003f9b8
- (void)photoAssetsWithOptions:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010003f924

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
