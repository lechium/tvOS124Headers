/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AppleSpell;

@interface AXMSpellChecker : NSObject {

	AppleSpell* _spellChecker;

}

@property (nonatomic,retain) AppleSpell * spellChecker;              //@synthesize spellChecker=_spellChecker - In the implementation block
-(AppleSpell *)spellChecker;
-(void)correctSpellingInText:(id)arg1 withLanguages:(id)arg2 ;
-(BOOL)textContainsMisspelling:(id)arg1 withLanguages:(id)arg2 ;
-(void)setSpellChecker:(AppleSpell *)arg1 ;
@end

