//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SATVAbstractFlow : NSObject
{
    NSString *_entryFlowState;	// 8 = 0x8
}

@property(copy, nonatomic) NSString *entryFlowState; // @synthesize entryFlowState=_entryFlowState;
- (void).cxx_destruct;	// IMP=0x0000000100099074
- (void)finish;	// IMP=0x0000000100098fe4
- (void)startWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100098f70
- (id)initWithNavigationController:(id)arg1 overrideEntryFlowState:(id)arg2;	// IMP=0x0000000100098ee8

@end

