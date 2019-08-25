/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolRuntimeRemoteObject, NSString, RWIProtocolDebuggerLocation;

@interface RWIProtocolDebuggerScope : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * object; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) RWIProtocolDebuggerLocation * location; 
@property (assign,nonatomic) BOOL empty; 
-(BOOL)empty;
-(id)initWithObject:(id)arg1 type:(long long)arg2 ;
-(void)setEmpty:(BOOL)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)object;
-(RWIProtocolDebuggerLocation *)location;
-(void)setObject:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(void)setLocation:(RWIProtocolDebuggerLocation *)arg1 ;
@end
