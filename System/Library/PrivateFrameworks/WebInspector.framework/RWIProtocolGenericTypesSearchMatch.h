/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolGenericTypesSearchMatch : RWIProtocolJSONObject

@property (assign,nonatomic) double lineNumber; 
@property (nonatomic,copy) NSString * lineContent; 
-(void)setLineNumber:(double)arg1 ;
-(double)lineNumber;
-(void)setLineContent:(NSString *)arg1 ;
-(id)initWithLineNumber:(double)arg1 lineContent:(id)arg2 ;
-(NSString *)lineContent;
@end

