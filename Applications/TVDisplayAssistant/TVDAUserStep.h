//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVDAStep.h"

@class NSArray, NSMutableArray, NSString, TVDAStepAction, TVDAWiFiQualityMeasurement;

@interface TVDAUserStep : NSObject <TVDAStep>
{
    _Bool _hasActionWithTimer;	// 8 = 0x8
    TVDAStepAction *_preferredAction;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    NSString *_footer;	// 32 = 0x20
    NSString *_appleSupportFooter;	// 40 = 0x28
    long long _menuBehavior;	// 48 = 0x30
    NSString *_title;	// 56 = 0x38
    NSMutableArray *_mutableActions;	// 64 = 0x40
    TVDAWiFiQualityMeasurement *_measurementToRun;	// 72 = 0x48
}

@property(retain, nonatomic) TVDAWiFiQualityMeasurement *measurementToRun; // @synthesize measurementToRun=_measurementToRun;
@property(copy, nonatomic) NSMutableArray *mutableActions; // @synthesize mutableActions=_mutableActions;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long menuBehavior; // @synthesize menuBehavior=_menuBehavior;
@property(readonly, nonatomic) _Bool hasActionWithTimer; // @synthesize hasActionWithTimer=_hasActionWithTimer;
@property(readonly, copy, nonatomic) NSString *appleSupportFooter; // @synthesize appleSupportFooter=_appleSupportFooter;
@property(readonly, copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) TVDAStepAction *preferredAction; // @synthesize preferredAction=_preferredAction;
- (void).cxx_destruct;	// IMP=0x0000000100004d90
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000488c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100004630
- (void)runMeasurement:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004628
- (void)addAction:(id)arg1;	// IMP=0x00000001000045a8
@property(readonly, copy, nonatomic) NSArray *actions;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 footer:(id)arg3 appleSupportFooter:(id)arg4;	// IMP=0x0000000100004420
- (id)init;	// IMP=0x0000000100004404

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

