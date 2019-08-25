//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPRequestResponseControllerDelegate.h"

@class MPRequestResponseController, NSString;

@interface MTTVMusicAirplayDetector : NSObject <MPRequestResponseControllerDelegate>
{
    id <MTTVMusicAirplayDetectorDelegate> _delegate;	// 8 = 0x8
    MPRequestResponseController *_requestResponseController;	// 16 = 0x10
}

@property(retain, nonatomic) MPRequestResponseController *requestResponseController; // @synthesize requestResponseController=_requestResponseController;
@property(nonatomic) __weak id <MTTVMusicAirplayDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010014913c
- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;	// IMP=0x0000000100148f1c
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100148d9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

