/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextInputCore/TextInputCore-Structs.h>
@class NSMutableDictionary, CAContext, NSString;

@interface TIKeyboardSecureCandidateRenderer : NSObject {

	NSMutableDictionary* _secureCandidateCache;
	CAContext* _context;
	NSString* _localeIdentifier;
	NSMutableDictionary* _accessibilityLabelCache;

}

@property (nonatomic,retain) NSMutableDictionary * secureCandidateCache;              //@synthesize secureCandidateCache=_secureCandidateCache - In the implementation block
@property (nonatomic,readonly) CAContext * context;                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSString * localeIdentifier;                           //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
+(id)allRenderers;
-(id)initForLocalizedStrings;
-(CFArrayRef)arrayOfContexts:(unsigned long long)arg1 withRenderTraits:(id)arg2 ;
-(CFArrayRef)imagesFromContexts:(CFArrayRef)arg1 ;
-(id)_truncationSentinel;
-(CFArrayRef)imagesFromSecureCandidates:(id)arg1 withRenderTraits:(id)arg2 outAccessibilityLabels:(id*)arg3 ;
-(id)accessibilityLabelsForSecureHeaders:(id)arg1 secureContents:(id)arg2 truncationSentinel:(id)arg3 ;
-(void)cacheAccessibilityLabel:(id)arg1 forSlotID:(unsigned)arg2 ;
-(id)accessibilityLabelForSlotID:(unsigned)arg1 ;
-(id)localizedApplicationNameWithBundleIdentifier:(id)arg1 ;
-(id)slotIDsFromSecureCandidates:(id)arg1 withRenderTraits:(id)arg2 ;
-(CGImageRef)imageForSendCurrentLocationWithRenderTraits:(id)arg1 ;
-(unsigned)slotIDForSendCurrentLocationWithRenderTraits:(id)arg1 ;
-(void)clearSecureCandidateCache;
-(id)cachedCandidateForSecureCandidate:(id)arg1 ;
-(id)cachedPayloadForSecureCandidateSlotID:(unsigned)arg1 ;
-(NSMutableDictionary *)secureCandidateCache;
-(void)setSecureCandidateCache:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
-(CAContext *)context;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(NSString *)localeIdentifier;
-(id)localizedStringForKey:(id)arg1 ;
@end

