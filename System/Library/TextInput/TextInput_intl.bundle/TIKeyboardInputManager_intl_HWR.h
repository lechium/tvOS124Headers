/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/TextInput/TextInput_intl.bundle/TextInput_intl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TIKeyboardInputManager.h>

@class TIHandwritingStrokes, NSArray, CHRecognizer;

@interface TIKeyboardInputManager_intl_HWR : TIKeyboardInputManager {

	TIHandwritingStrokes* _userDrawing;
	NSArray* _candidates;

}

@property (nonatomic,readonly) CHRecognizer * recognizer; 
@property (nonatomic,retain) TIHandwritingStrokes * userDrawing;              //@synthesize userDrawing=_userDrawing - In the implementation block
@property (nonatomic,retain) NSArray * candidates;                            //@synthesize candidates=_candidates - In the implementation block
-(id)handleKeyboardInput:(id)arg1 ;
-(void)deleteFromInputWithContext:(id)arg1 ;
-(void)loadDictionaries;
-(BOOL)supportsLearning;
-(void)syncMarkedTextForKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)inputLocationChanged;
-(id)recognitionResultsForStrokes:(id)arg1 context:(id)arg2 ;
-(id)addInputObject:(id)arg1 withContext:(id)arg2 ;
-(void)updateCandidates;
-(TIHandwritingStrokes *)userDrawing;
-(BOOL)isDummyCandidate:(id)arg1 ;
-(void)setUserDrawing:(TIHandwritingStrokes *)arg1 ;
-(CHRecognizer *)recognizer;
-(NSArray *)candidates;
-(id)candidateResultSet;
-(id)keyboardBehaviors;
-(unsigned long long)initialSelectedIndex;
-(void)clearInput;
-(BOOL)canHandleKeyHitTest;
-(BOOL)usesCandidateSelection;
-(void)setCandidates:(NSArray *)arg1 ;
-(BOOL)usesAutoDeleteWord;
-(BOOL)shouldExtendPriorWord;
-(BOOL)suppliesCompletions;
-(unsigned)inputCount;
-(id)defaultCandidate;
@end

