//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCancellable.h"

@class NSString;

@interface _PBUnavailableBundleListLoaderCancellableToken : NSObject <PBCancellable>
{
    _Bool _cancelled;	// 8 = 0x8
}

- (void)cancel;	// IMP=0x000000010007de9c
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
