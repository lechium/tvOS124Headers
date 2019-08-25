/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TICandidateHandler.h>

@class TIAutocorrectionList;

@interface TIAccumulatingCandidateHandler : NSObject <TICandidateHandler> {

	unsigned long long _status;
	/*^block*/id _candidateHandler;
	TIAutocorrectionList* _candidates;

}

@property (nonatomic,retain) TIAutocorrectionList * candidates;              //@synthesize candidates=_candidates - In the implementation block
@property (nonatomic,copy,readonly) id candidateHandler;                     //@synthesize candidateHandler=_candidateHandler - In the implementation block
@property (nonatomic,readonly) BOOL asynchronous; 
-(void)pushCandidates:(id)arg1 ;
-(BOOL)asynchronous;
-(id)initWithHandlerBlock:(/*^block*/id)arg1 ;
-(id)candidateHandler;
-(void)dealloc;
-(void)open;
-(void)close;
-(TIAutocorrectionList *)candidates;
-(void)setCandidates:(TIAutocorrectionList *)arg1 ;
@end
