//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun  9 2020 17:35:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BKIOHIDServiceDisappearanceObserver, OS_dispatch_queue;

@interface _BKIOHIDServiceDisappearanceObserverInfo : NSObject
{
    id <BKIOHIDServiceDisappearanceObserver> _observer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(nonatomic) __weak NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <BKIOHIDServiceDisappearanceObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;

@end
