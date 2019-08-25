//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

#import "SVSOrientationDelegate.h"
#import "SiriUIApplication.h"

@class NSString;

@interface SVSApplication : UIApplication <SiriUIApplication, SVSOrientationDelegate>
{
    long long _frontMostAppOrientation;	// 8 = 0x8
    id <SVSApplicationDataSource> _dataSource;	// 16 = 0x10
}

+ (id)sharedApplication;	// IMP=0x0000000100077e34
@property(nonatomic) __weak id <SVSApplicationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x0000000100077f18
- (void)setFrontMostAppOrientation:(long long)arg1;	// IMP=0x0000000100077ed4
- (long long)launchOrientation;	// IMP=0x0000000100077ec4
@property(readonly, nonatomic) struct CGRect applicationFrame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

