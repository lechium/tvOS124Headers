/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolRuntimeStructureDescription : RWIProtocolJSONObject

@property (nonatomic,copy) NSArray * fields; 
@property (nonatomic,copy) NSArray * optionalFields; 
@property (nonatomic,copy) NSString * constructorName; 
@property (nonatomic,retain) RWIProtocolRuntimeStructureDescription * prototypeStructure; 
@property (assign,nonatomic) BOOL isImprecise; 
-(BOOL)isImprecise;
-(void)setOptionalFields:(NSArray *)arg1 ;
-(NSArray *)optionalFields;
-(void)setConstructorName:(NSString *)arg1 ;
-(NSString *)constructorName;
-(void)setPrototypeStructure:(RWIProtocolRuntimeStructureDescription *)arg1 ;
-(RWIProtocolRuntimeStructureDescription *)prototypeStructure;
-(void)setIsImprecise:(BOOL)arg1 ;
-(NSArray *)fields;
-(void)setFields:(NSArray *)arg1 ;
@end

