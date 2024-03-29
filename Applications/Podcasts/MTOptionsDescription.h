//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSOrderedSet;

@interface MTOptionsDescription : NSObject
{
    NSArray *_longTitles;	// 8 = 0x8
    NSArray *_shortTitles;	// 16 = 0x10
    NSOrderedSet *_valueSet;	// 24 = 0x18
    CDUnknownBlockType _footerCallback;	// 32 = 0x20
    CDUnknownBlockType _headerCallback;	// 40 = 0x28
}

+ (id)optionsWithLongTitles:(id)arg1 shortTitles:(id)arg2 valueList:(id)arg3;	// IMP=0x0000000100118e9c
+ (id)optionsWithLongTitles:(id)arg1 shortTitles:(id)arg2 valueList:(id)arg3 footerTextCallback:(CDUnknownBlockType)arg4 headerTextCallback:(CDUnknownBlockType)arg5;	// IMP=0x0000000100118d68
@property(copy, nonatomic) CDUnknownBlockType headerCallback; // @synthesize headerCallback=_headerCallback;
@property(copy, nonatomic) CDUnknownBlockType footerCallback; // @synthesize footerCallback=_footerCallback;
@property(copy, nonatomic) NSOrderedSet *valueSet; // @synthesize valueSet=_valueSet;
@property(copy, nonatomic) NSArray *shortTitles; // @synthesize shortTitles=_shortTitles;
@property(copy, nonatomic) NSArray *longTitles; // @synthesize longTitles=_longTitles;
- (void).cxx_destruct;	// IMP=0x0000000100119070
- (unsigned long long)valueForIndex:(unsigned long long)arg1;	// IMP=0x0000000100118f8c
- (unsigned long long)indexForValue:(unsigned long long)arg1;	// IMP=0x0000000100118f24

@end

