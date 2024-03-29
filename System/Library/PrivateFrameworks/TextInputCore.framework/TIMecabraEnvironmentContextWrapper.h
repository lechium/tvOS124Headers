/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextInputCore/TextInputCore-Structs.h>
@class NSString, NSMutableArray, NSArray;

@interface TIMecabraEnvironmentContextWrapper : NSObject {

	int _textContentType;
	int _shuangpinType;
	NSString* _appContext;
	unsigned long long _candidateIndex;
	unsigned long long _candidateInternalIndex;
	unsigned long long _environmentCandidateCount;
	MecabraRef _mecabraEngine;
	MecabraContextRef _mecabraContext;
	NSMutableArray* _temporaryCandidates;
	NSMutableArray* _environmentCandidates;

}

@property (nonatomic,retain) NSMutableArray * environmentCandidates;                      //@synthesize environmentCandidates=_environmentCandidates - In the implementation block
@property (assign,nonatomic) MecabraContextRef mecabraContext;                            //@synthesize mecabraContext=_mecabraContext - In the implementation block
@property (nonatomic,copy) NSString * appContext;                                         //@synthesize appContext=_appContext - In the implementation block
@property (assign,nonatomic) unsigned long long candidateIndex;                           //@synthesize candidateIndex=_candidateIndex - In the implementation block
@property (assign,nonatomic) unsigned long long candidateInternalIndex;                   //@synthesize candidateInternalIndex=_candidateInternalIndex - In the implementation block
@property (nonatomic,readonly) NSArray * contextCandidates; 
@property (nonatomic,readonly) NSArray * contextCandidateStrings; 
@property (nonatomic,readonly) unsigned long long contextCandidateCount; 
@property (nonatomic,readonly) NSArray * environmentCandidateStrings; 
@property (nonatomic,readonly) unsigned long long environmentCandidateCount;              //@synthesize environmentCandidateCount=_environmentCandidateCount - In the implementation block
@property (nonatomic,readonly) NSArray * inlineCandidates; 
@property (nonatomic,readonly) MecabraRef mecabraEngine;                                  //@synthesize mecabraEngine=_mecabraEngine - In the implementation block
@property (nonatomic,retain) NSMutableArray * temporaryCandidates;                        //@synthesize temporaryCandidates=_temporaryCandidates - In the implementation block
@property (assign,nonatomic) int textContentType;                                         //@synthesize textContentType=_textContentType - In the implementation block
@property (assign,nonatomic) int shuangpinType;                                           //@synthesize shuangpinType=_shuangpinType - In the implementation block
-(void)clearContext;
-(unsigned long long)candidateIndex;
-(void)setCandidateIndex:(unsigned long long)arg1 ;
-(id)initWithMecabraEngine:(MecabraRef)arg1 language:(int)arg2 ;
-(BOOL)analyzeString:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setGeometryModel:(void*)arg1 modelData:(CFArrayRef)arg2 ;
-(void)setShuangpinType:(int)arg1 ;
-(void)acceptInlineCandidates;
-(void)partiallyCommitInlineCandidate:(void*)arg1 ;
-(void)completelyCommitInlineCandidate:(void*)arg1 ;
-(void)revertInlineCandidate;
-(void)declareEndOfSentence;
-(void)addContextCandidate:(void*)arg1 accept:(BOOL)arg2 ;
-(void)addContextStringCandidate:(void*)arg1 ;
-(void)addEnvironmentCandidate:(void*)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)contextCandidateCount;
-(NSArray *)contextCandidates;
-(NSArray *)contextCandidateStrings;
-(void)clearAll;
-(NSMutableArray *)environmentCandidates;
-(NSArray *)environmentCandidateStrings;
-(NSArray *)inlineCandidates;
-(void)removeCandidatesInRange:(NSRange)arg1 ;
-(void)revertLearningForCandidate:(void*)arg1 ;
-(void)syncEnvironmentAndContextCandidates;
-(NSMutableArray *)temporaryCandidates;
-(BOOL)predictionCandidatesWithOptions:(unsigned long long)arg1 maxNumberOfCandidates:(unsigned long long)arg2 ;
-(void*)createMecabraCandidateFromString:(id)arg1 ;
-(unsigned long long)candidateInternalIndex;
-(void)setCandidateInternalIndex:(unsigned long long)arg1 ;
-(unsigned long long)environmentCandidateCount;
-(MecabraRef)mecabraEngine;
-(MecabraContextRef)mecabraContext;
-(void)setMecabraContext:(MecabraContextRef)arg1 ;
-(void)setTemporaryCandidates:(NSMutableArray *)arg1 ;
-(int)shuangpinType;
-(void)setEnvironmentCandidates:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(void)setTextContentType:(int)arg1 ;
-(int)textContentType;
-(NSString *)appContext;
-(void)setAppContext:(NSString *)arg1 ;
@end

