/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathExpression.h>

@class NSArray, NSString;

@interface SCRCMathArrayExpression : SCRCMathExpression {

	NSArray* _children;

}

@property (nonatomic,readonly) NSString * mathMLTag; 
@property (nonatomic,readonly) NSArray * mathMLAttributes; 
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)prefixForChildAtIndex:(unsigned long long)arg1 ;
-(id)suffixForChildAtIndex:(unsigned long long)arg1 ;
-(id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(id)childSpeakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned long long*)arg4 ;
-(NSString *)mathMLTag;
-(NSArray *)mathMLAttributes;
-(id)localizablePrefixForChildAtIndex:(unsigned long long)arg1 ;
-(id)localizableSuffixForChildAtIndex:(unsigned long long)arg1 ;
-(id)subExpressions;
-(BOOL)hasSimpleArrayOfChildren;
-(id)mathMLString;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)children;
@end
