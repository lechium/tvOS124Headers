/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface UIDictationInterpretation : NSObject <NSSecureCoding> {

	NSArray* _tokens;
	double _averageConfidenceScore;

}

@property (assign,nonatomic) double averageConfidenceScore;              //@synthesize averageConfidenceScore=_averageConfidenceScore - In the implementation block
@property (nonatomic,readonly) NSArray * tokens;                         //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,readonly) BOOL removeSpaceBefore; 
@property (nonatomic,readonly) BOOL removeSpaceAfter; 
+(BOOL)supportsSecureCoding;
+(id)serializedInterpretationFromTokens:(id)arg1 transform:(const CFStringRef)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithTokens:(id)arg1 score:(double)arg2 ;
-(NSArray *)tokens;
-(BOOL)removeSpaceBefore;
-(BOOL)removeSpaceAfter;
-(double)averageConfidenceScore;
-(void)setAverageConfidenceScore:(double)arg1 ;
-(id)serializedInterpretationWithTransform:(const CFStringRef)arg1 ;
-(id)initWithTokens:(id)arg1 ;
@end

