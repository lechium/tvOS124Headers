//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_TVInterfaceCreatingPrivate.h"

@class NSString, TVMusicCloudViewController;

@interface TVMusicInterfaceFactory : NSObject <_TVInterfaceCreatingPrivate>
{
    TVMusicCloudViewController *_musicCloudViewController;	// 8 = 0x8
    id <TVPPlayback> _player;	// 16 = 0x10
}

+ (id)sharedInterfaceFactory;	// IMP=0x000000010002a414
+ (void)initialize;	// IMP=0x000000010002a3a4
+ (_Bool)isDataPrivateForElement:(id)arg1;	// IMP=0x0000000100096644
+ (id)playlistImgWithElement:(id)arg1 existingView:(id)arg2;	// IMP=0x0000000100096004
@property(nonatomic) __weak id <TVPPlayback> player; // @synthesize player=_player;
- (void).cxx_destruct;	// IMP=0x000000010002b41c
- (id)_imageProxyForElement:(id)arg1;	// IMP=0x000000010002b0f0
- (id)_styleSheetURLForTemplate:(id)arg1;	// IMP=0x000000010002aec0
- (Class)collectionViewCellClassForElement:(id)arg1;	// IMP=0x000000010002adbc
- (id)viewForElement:(id)arg1 existingView:(id)arg2;	// IMP=0x000000010002abd4
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;	// IMP=0x000000010002a978
- (void)setup;	// IMP=0x000000010002a494

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

