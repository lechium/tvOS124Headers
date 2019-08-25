//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PBTextEntryViewController, UITextField;

@protocol PBTextEntryViewControllerDelegate <NSObject>
- (void)textEntryDidCancel:(PBTextEntryViewController *)arg1;
- (void)textEntry:(PBTextEntryViewController *)arg1 didSelectButtonAtIndex:(unsigned long long)arg2;

@optional
- (void)textEntry:(PBTextEntryViewController *)arg1 didSubmitTextFieldAtIndex:(unsigned long long)arg2;
- (void)textEntry:(PBTextEntryViewController *)arg1 willPresentTextField:(UITextField *)arg2;
@end
