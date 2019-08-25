/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyStatistic.h>

@class TIAutocorrectionList, TICandidateRequestToken;

@interface TITypologyStatisticCurrentAutocorrections : TITypologyStatistic {

	TIAutocorrectionList* _autocorrections;
	TICandidateRequestToken* _requestToken;

}

@property (nonatomic,retain) TIAutocorrectionList * autocorrections;              //@synthesize autocorrections=_autocorrections - In the implementation block
@property (nonatomic,retain) TICandidateRequestToken * requestToken;              //@synthesize requestToken=_requestToken - In the implementation block
-(TIAutocorrectionList *)autocorrections;
-(void)setRequestToken:(TICandidateRequestToken *)arg1 ;
-(TICandidateRequestToken *)requestToken;
-(void)visitRecordAutocorrections:(id)arg1 ;
-(void)setAutocorrections:(TIAutocorrectionList *)arg1 ;
@end

