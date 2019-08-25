/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardCandidate;

@interface TITypologyRecordCandidateRejected : TITypologyRecord {

	TIKeyboardCandidate* _candidate;

}

@property (nonatomic,retain) TIKeyboardCandidate * candidate;              //@synthesize candidate=_candidate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)applyToStatistic:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(id)shortDescription;
-(TIKeyboardCandidate *)candidate;
@end

