//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MTSettingHeaderAction : NSObject
{
    CDUnknownBlockType _actionHandler;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
}

+ (id)headerActionWithTitle:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001930dc
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;	// IMP=0x00000001001932b0
- (void)performAction;	// IMP=0x0000000100193214
- (id)initWithTitle:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010019315c

@end

