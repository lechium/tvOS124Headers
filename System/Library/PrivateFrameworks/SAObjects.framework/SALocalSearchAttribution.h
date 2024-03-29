/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SALocalSearchAttribution : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * attributionId; 
@property (nonatomic,copy) NSArray * urls; 
@property (assign,nonatomic) long long version; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)attribution;
+(id)attributionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)urls;
-(void)setUrls:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)attributionId;
-(void)setAttributionId:(NSString *)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
@end

