//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HBImageStackCollectionViewCell.h"

@interface HBTopShelfImageStackCollectionViewCell : HBImageStackCollectionViewCell
{
    double _stashedRadiosityAmount;	// 8 = 0x8
    _Bool _wantIdleModeBehavior;	// 16 = 0x10
    double _idleModeOffsetSize;	// 24 = 0x18
    CDUnknownBlockType _userInterfaceStyleChangedUpdateBlock;	// 32 = 0x20
}

@property(copy, nonatomic) CDUnknownBlockType userInterfaceStyleChangedUpdateBlock; // @synthesize userInterfaceStyleChangedUpdateBlock=_userInterfaceStyleChangedUpdateBlock;
@property(nonatomic) double idleModeOffsetSize; // @synthesize idleModeOffsetSize=_idleModeOffsetSize;
@property(nonatomic) _Bool wantIdleModeBehavior; // @synthesize wantIdleModeBehavior=_wantIdleModeBehavior;
- (void).cxx_destruct;	// IMP=0x000000010005f644
- (void)_exitIdleMode;	// IMP=0x000000010005f3e0
- (void)_enterIdleMode;	// IMP=0x000000010005eff8
- (void)_updateWithCurrentUserInterfaceStyle;	// IMP=0x000000010005eeec
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010005ee34
- (void)dealloc;	// IMP=0x000000010005ed58
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010005ec00

@end

