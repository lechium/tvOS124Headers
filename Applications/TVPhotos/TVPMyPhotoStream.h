//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVCKDataCollection.h"

@class ACAccount;

@interface TVPMyPhotoStream : TVCKDataCollection
{
    ACAccount *_appleAccount;	// 8 = 0x8
}

+ (id)collectionWithDataClient:(id)arg1 accessObject:(id)arg2;	// IMP=0x0000000100032a98
+ (id)idForAppleAccount:(id)arg1;	// IMP=0x0000000100032a40
@property(retain, nonatomic) ACAccount *appleAccount; // @synthesize appleAccount=_appleAccount;
- (void).cxx_destruct;	// IMP=0x0000000100032fa8
- (id)concreteValueForProperty:(id)arg1;	// IMP=0x0000000100032ca0
- (id)initWithDataClient:(id)arg1 appleAccount:(id)arg2;	// IMP=0x0000000100032c08
- (id)initWithDataClient:(id)arg1;	// IMP=0x0000000100032bf0

@end
