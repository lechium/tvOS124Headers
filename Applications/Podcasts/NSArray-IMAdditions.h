//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@interface NSArray (IMAdditions)
- (id)deepCopy;	// IMP=0x00000001001bcc70
- (id)arrayRemovingMatchingStrings:(id)arg1;	// IMP=0x00000001001bc86c
- (id)arrayRemovingObjectsByKey:(id)arg1 matchingStrings:(id)arg2;	// IMP=0x00000001001bc3f8
- (id)arrayOfObjectsContainingMatchingKey:(id)arg1 matchingStrings:(id)arg2;	// IMP=0x00000001001bbec0
- (_Bool)containsStringCaseInsensitive:(id)arg1;	// IMP=0x00000001001bbd6c
- (id)imReversedArray;	// IMP=0x00000001001bbc00
- (id)firstObject;	// IMP=0x00000001001bbbb8
- (long long)indexOfObjectWithValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x00000001001bb9f4
@end

