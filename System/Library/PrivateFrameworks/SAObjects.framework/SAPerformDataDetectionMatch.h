/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAPerformDataDetectionMatch : SABaseCommand <SAServerBoundCommand, SAAceSerializable>

@property (nonatomic,copy) NSString * dataDetectionType; 
@property (nonatomic,copy) NSNumber * length; 
@property (nonatomic,copy) NSNumber * location; 
@property (nonatomic,copy) NSString * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)performDataDetectionMatch;
+(id)performDataDetectionMatchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)dataDetectionType;
-(void)setDataDetectionType:(NSString *)arg1 ;
-(NSNumber *)length;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setLength:(NSNumber *)arg1 ;
-(NSNumber *)location;
-(void)setLocation:(NSNumber *)arg1 ;
@end
