/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIMecabraCandidate.h>

@class NSString, NSArray;

@interface TICompositeMecabraCandidate : TIMecabraCandidate {

	NSString* _remainderCandidateString;
	NSArray* _autoconvertedCandidatePointerValues;

}

@property (nonatomic,copy) NSString * remainderCandidateString;                        //@synthesize remainderCandidateString=_remainderCandidateString - In the implementation block
@property (nonatomic,copy) NSArray * autoconvertedCandidatePointerValues;              //@synthesize autoconvertedCandidatePointerValues=_autoconvertedCandidatePointerValues - In the implementation block
+(BOOL)supportsSecureCoding;
+(int)type;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(NSString *)remainderCandidateString;
-(NSArray *)autoconvertedCandidatePointerValues;
-(void)setAutoconvertedCandidatePointerValues:(NSArray *)arg1 ;
-(void)setRemainderCandidateString:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
@end

