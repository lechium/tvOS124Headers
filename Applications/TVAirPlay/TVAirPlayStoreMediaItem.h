//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVCKStoreMediaItem.h"

#import "TVAirPlayResourceLoadingMediaItem.h"

@class NSString;

@interface TVAirPlayStoreMediaItem : TVCKStoreMediaItem <TVAirPlayResourceLoadingMediaItem>
{
    _Bool _preventSpeculativeLoading;	// 8 = 0x8
    id <TVAirPlayResourceLoadingMediaItemDelegate> _resourceLoadingDelegate;	// 16 = 0x10
}

+ (id)_dataItemForParameters:(id)arg1;	// IMP=0x0000000100001b80
@property(nonatomic) _Bool preventSpeculativeLoading; // @synthesize preventSpeculativeLoading=_preventSpeculativeLoading;
@property(nonatomic) __weak id <TVAirPlayResourceLoadingMediaItemDelegate> resourceLoadingDelegate; // @synthesize resourceLoadingDelegate=_resourceLoadingDelegate;
- (void).cxx_destruct;	// IMP=0x0000000100002570
- (void)mergePropertiesFromDataItem:(id)arg1 toDataItem:(id)arg2;	// IMP=0x0000000100002298
- (void)loadStreamingKeyForRequest:(id)arg1;	// IMP=0x0000000100002230
- (_Bool)hasTrait:(id)arg1;	// IMP=0x000000010000212c
- (id)initWithParameters:(id)arg1;	// IMP=0x0000000100001a68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

