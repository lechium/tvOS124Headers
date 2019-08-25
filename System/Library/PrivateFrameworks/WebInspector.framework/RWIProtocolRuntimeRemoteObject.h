/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolJSONObject, RWIProtocolRuntimeObjectPreview;

@interface RWIProtocolRuntimeRemoteObject : RWIProtocolJSONObject

@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) long long subtype; 
@property (nonatomic,copy) NSString * className; 
@property (nonatomic,retain) RWIProtocolJSONObject * value; 
@property (nonatomic,copy) NSString * stringRepresentation; 
@property (nonatomic,copy) NSString * objectId; 
@property (assign,nonatomic) int size; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * classPrototype; 
@property (nonatomic,retain) RWIProtocolRuntimeObjectPreview * preview; 
-(void)setClassName:(NSString *)arg1 ;
-(void)setObjectId:(NSString *)arg1 ;
-(NSString *)objectId;
-(void)setClassPrototype:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)classPrototype;
-(RWIProtocolRuntimeObjectPreview *)preview;
-(void)setPreview:(RWIProtocolRuntimeObjectPreview *)arg1 ;
-(void)setStringRepresentation:(NSString *)arg1 ;
-(int)size;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(RWIProtocolJSONObject *)value;
-(void)setValue:(RWIProtocolJSONObject *)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(void)setSize:(int)arg1 ;
-(NSString *)className;
-(long long)subtype;
-(NSString *)stringRepresentation;
-(void)setSubtype:(long long)arg1 ;
@end

