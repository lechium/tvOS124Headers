//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SATVLegalPresentation : NSObject
{
    id <SATVLegalPresentationWarrantyDelegate> _warrantyDelegate;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010005a094
@property(nonatomic) __weak id <SATVLegalPresentationWarrantyDelegate> warrantyDelegate; // @synthesize warrantyDelegate=_warrantyDelegate;
- (void).cxx_destruct;	// IMP=0x000000010005a884
- (void)_warrantyAccepted;	// IMP=0x000000010005a7fc
- (void)displayWarrantyChallengeWithTerms:(id)arg1 navigationController:(id)arg2;	// IMP=0x000000010005a328
- (_Bool)needsWarrantyChallenge;	// IMP=0x000000010005a2cc
- (void)displayLegalNoticeWithTitle:(id)arg1 terms:(id)arg2 navigationController:(id)arg3;	// IMP=0x000000010005a114

@end

