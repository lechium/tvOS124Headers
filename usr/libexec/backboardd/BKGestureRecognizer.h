//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;
@protocol BKGestureRecognizerDelegate;

@interface BKGestureRecognizer : NSObject
{
    NSMutableSet *_recognizers;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    id <BKGestureRecognizerDelegate> _delegate;	// 24 = 0x18
}

@property(nonatomic) __weak id <BKGestureRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;	// IMP=0x0000000100010fd0
- (void)_handleEvent:(id)arg1;	// IMP=0x0000000100010ec8
- (void)_removeGestureRecognizer:(id)arg1;	// IMP=0x0000000100010eb0
- (void)_addGestureRecognizer:(id)arg1;	// IMP=0x0000000100010e98
@property(readonly, nonatomic, getter=_gestureRecognizers) NSSet *gestureRecognizers;
- (id)description;	// IMP=0x0000000100010da8
- (id)init;	// IMP=0x0000000100010d1c

@end

