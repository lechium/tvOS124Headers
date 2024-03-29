/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCROBrailleTranslatorProtocol;
#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSRecursiveLock, NSBundle, NSString;

@interface SCROBrailleTranslationManager : NSObject {

	NSRecursiveLock* _contentLock;
	id<SCROBrailleTranslatorProtocol> _translator;
	NSBundle* _translatorBundle;
	BOOL _tableSupportsContractedBraille;
	BOOL _tableSupportsEightDotBraille;
	id<SCROBrailleTranslatorProtocol> _auxTranslator;
	NSBundle* _auxTranslatorBundle;
	BOOL _auxTableSupportsContractedBraille;
	BOOL _auxTableSupportsEightDotBraille;
	id<SCROBrailleTranslatorProtocol> _nemethTranslator;
	BOOL _alwaysUsesNemethCodeForTechnicalText;
	NSString* _primaryTranslationTableIdentifier;

}

@property (nonatomic,readonly) BOOL primaryTableSupportsContractedBraille;                //@synthesize tableSupportsContractedBraille=_tableSupportsContractedBraille - In the implementation block
@property (nonatomic,readonly) BOOL primaryTableSupportsEightDotBraille;                  //@synthesize tableSupportsEightDotBraille=_tableSupportsEightDotBraille - In the implementation block
@property (nonatomic,readonly) BOOL auxiliaryTableSupportsContractedBraille;              //@synthesize auxTableSupportsContractedBraille=_auxTableSupportsContractedBraille - In the implementation block
@property (nonatomic,readonly) BOOL auxiliaryTableSupportsEightDotBraille;                //@synthesize auxTableSupportsEightDotBraille=_auxTableSupportsEightDotBraille - In the implementation block
@property (assign,nonatomic) BOOL alwaysUsesNemethCodeForTechnicalText;                   //@synthesize alwaysUsesNemethCodeForTechnicalText=_alwaysUsesNemethCodeForTechnicalText - In the implementation block
+(id)sharedManager;
-(id)primaryTableIdentifier;
-(void)lockAuxiliaryTable;
-(void)setAuxiliaryTranslationTableWithTableIdentifier:(id)arg1 ;
-(id)auxiliaryTableIdentifier;
-(void)unlockAuxiliaryTable;
-(id)printBrailleForTechnicalText:(id)arg1 primaryTable:(BOOL)arg2 locations:(id*)arg3 ;
-(id)printBrailleForText:(id)arg1 primaryTable:(BOOL)arg2 contracted:(BOOL)arg3 eightDot:(BOOL)arg4 locations:(id*)arg5 textPositionsRange:(NSRange)arg6 ;
-(id)printBrailleForText:(id)arg1 primaryTable:(BOOL)arg2 contracted:(BOOL)arg3 eightDot:(BOOL)arg4 locations:(id*)arg5 ;
-(id)textForPrintBraille:(id)arg1 contracted:(BOOL)arg2 eightDot:(BOOL)arg3 locations:(id*)arg4 ;
-(void)setAlwaysUsesNemethCodeForTechnicalText:(BOOL)arg1 ;
-(BOOL)alwaysUsesNemethCodeForTechnicalText;
-(BOOL)primaryTableSupportsEightDotBraille;
-(BOOL)primaryTableSupportsContractedBraille;
-(void)setPrimaryTranslationTableWithTableIdentifier:(id)arg1 ;
-(BOOL)primaryTableSupportsRoundTripping;
-(id)_loadTableIdentifier:(id)arg1 bundle:(id*)arg2 existingBundle:(id)arg3 existingTranslator:(id)arg4 ;
-(id)_printBrailleForText:(id)arg1 primaryTable:(BOOL)arg2 contracted:(BOOL)arg3 eightDot:(BOOL)arg4 locations:(id*)arg5 isTechnical:(BOOL)arg6 textPositionsRange:(NSRange)arg7 ;
-(void)_loadPrimaryTableIfNecessary;
-(id)textForPrintBraille:(id)arg1 primaryTable:(BOOL)arg2 contracted:(BOOL)arg3 eightDot:(BOOL)arg4 locations:(id*)arg5 ;
-(id)printBrailleForText:(id)arg1 contracted:(BOOL)arg2 eightDot:(BOOL)arg3 locations:(id*)arg4 ;
-(unsigned long long)numberOfTranslatorsLoaded;
-(BOOL)primaryAndAuxiliaryTranslatorsAreIdentical;
-(BOOL)auxiliaryTableSupportsContractedBraille;
-(BOOL)auxiliaryTableSupportsEightDotBraille;
-(id)init;
@end

