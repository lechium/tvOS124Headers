//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SiriUIBaseAceObjectViewControllerDelegate.h"

@class AFDataStore, AFUserUtterance, AceObject, NSArray, NSBundle, NSString, NSURL, SAUIAppPunchOut, SAUIListItem, SiriUIDisambiguationItem, UIView;

@protocol SiriUIAceObjectViewControllerDelegate <SiriUIBaseAceObjectViewControllerDelegate>
- (id <AFUIDataStoring>)persistentStoreForSiriViewController:(id <SiriUIViewController>)arg1;
- (_Bool)siriViewController:(id <SiriUIViewController>)arg1 openPunchOut:(SAUIAppPunchOut *)arg2;
- (void)siriViewController:(id <SiriUIViewController>)arg1 sendGenericAceCommands:(NSArray *)arg2;
- (double)siriSnippetViewControllerExpectedWidth:(id <SiriUIViewController>)arg1;
- (struct UIEdgeInsets)siriViewControllerDisplayInsetsForVisibleSpace:(id <SiriUIViewController>)arg1;
- (void)siriSnippetViewController:(id <SiriUIViewController>)arg1 setStatusViewHidden:(_Bool)arg2;
- (void)siriViewController:(id <SiriUIViewController>)arg1 didHideVibrantView:(UIView *)arg2;
- (AFDataStore *)persistentDataStoreForSiriViewController:(id <SiriUIViewController>)arg1;
- (void)cancelRequestForSiriSnippetViewController:(id <SiriUIViewController>)arg1;
- (void)siriViewController:(id <SiriUIViewController>)arg1 addSelectionResponse:(SAUIListItem *)arg2;
- (SAUIListItem *)siriViewController:(id <SiriUIViewController>)arg1 listItemToPickInAutodisambiguationForListItems:(NSArray *)arg2;
- (SiriUIDisambiguationItem *)siriViewController:(id <SiriUIViewController>)arg1 disambiguationItemForListItem:(SAUIListItem *)arg2 disambiguationKey:(NSString *)arg3;
- (NSArray *)siriViewController:(id <SiriUIViewController>)arg1 filteredDisambiguationListItems:(NSArray *)arg2;
- (void)siriViewController:(id <SiriUIViewController>)arg1 setContentOffset:(double)arg2;
- (void)siriViewControllerHeightDidChange:(id <SiriUIViewController>)arg1 pinTopOfSnippet:(_Bool)arg2;
- (void)siriViewControllerHeightDidChange:(id <SiriUIViewController>)arg1;
- (double)statusBarHeightForSiriViewController:(id <SiriUIViewController>)arg1;
- (struct UIEdgeInsets)siriViewControllerBackgroundInsets:(id <SiriUIViewController>)arg1;
- (struct CGSize)siriViewControllerVisibleContentArea:(id <SiriUIViewController>)arg1;
- (double)siriViewControllerExpectedWidth:(id <SiriUIViewController>)arg1;
- (NSBundle *)siriViewControllerEffectiveBundleForCoreLocation:(id <SiriUIViewController>)arg1;
- (void)siriViewController:(id <SiriUIViewController>)arg1 setDomainObject:(AceObject *)arg2 forIdentifier:(NSURL *)arg3;
- (AceObject *)siriViewController:(id <SiriUIViewController>)arg1 domainObjectForIdentifier:(NSURL *)arg2;
- (NSArray *)additionalSpeechInterpretationsForSiriViewController:(id <SiriUIViewController>)arg1;

@optional
- (void)siriViewController:(id <SiriUIViewController>)arg1 setTypeToSiriViewHidden:(_Bool)arg2;
- (_Bool)inTextInputModeForSiriViewController:(id <SiriUIViewController>)arg1;
- (void)showCorrectionScreenForSiriViewController:(id <SiriUIViewController>)arg1;
- (_Bool)shouldEnableInteractionForSiriViewController:(id <SiriUIViewController>)arg1;
- (void)siriViewControllerDidResignFirstResponder:(id <SiriUIViewController>)arg1;
- (AFUserUtterance *)updatedUserUtteranceForSiriViewController:(id <SiriUIViewController>)arg1;
@end

