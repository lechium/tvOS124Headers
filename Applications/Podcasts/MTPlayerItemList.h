//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMMetricsDataSource.h"

@class NSArray, NSString;

@interface MTPlayerItemList : NSObject <IMMetricsDataSource>
{
    NSArray *_playerItems;	// 8 = 0x8
}

@property(retain, nonatomic) NSArray *playerItems; // @synthesize playerItems=_playerItems;
- (void).cxx_destruct;	// IMP=0x0000000100116bc8
- (id)metricsContentIdentifier;	// IMP=0x00000001001169d4
- (id)initWithPlayerItems:(id)arg1;	// IMP=0x0000000100116960

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

