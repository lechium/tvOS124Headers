/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/NWBrowseDescriptor.h>

@class NSString;

@interface NWBonjourBrowseDescriptor : NWBrowseDescriptor

@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * domain; 
+(unsigned)descriptorType;
+(id)descriptorWithType:(id)arg1 domain:(id)arg2 ;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NSString *)type;
-(NSString *)domain;
@end

