//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPredicate.h"

@interface NSPredicate (MTAdditions)
+ (id)predicateForDateKey:(id)arg1 isLessThanDate:(id)arg2;	// IMP=0x00000001001776d0
+ (id)predicateForDateKey:(id)arg1 isGreaterThanDate:(id)arg2;	// IMP=0x0000000100177664
+ (id)predicateForDateKey:(id)arg1 isLessThanOrEqualToDate:(id)arg2;	// IMP=0x00000001001775f8
+ (id)predicateForDateKey:(id)arg1 isGreaterThanOrEqualToDate:(id)arg2;	// IMP=0x000000010017758c
+ (id)truePredicate;	// IMP=0x0000000100177560
+ (id)falsePredicate;	// IMP=0x0000000100177534
- (id)OR:(id)arg1;	// IMP=0x0000000100177464
- (id)AND:(id)arg1;	// IMP=0x0000000100177384
@end
