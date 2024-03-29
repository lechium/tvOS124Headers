/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSMedia : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long source; 
@property (nonatomic,copy) NSString * sourceURL; 
@property (assign,nonatomic) int sourceLine; 
-(void)setSourceURL:(NSString *)arg1 ;
-(NSString *)sourceURL;
-(int)sourceLine;
-(id)initWithText:(id)arg1 source:(long long)arg2 ;
-(void)setSourceLine:(int)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(void)setSource:(long long)arg1 ;
-(long long)source;
@end

