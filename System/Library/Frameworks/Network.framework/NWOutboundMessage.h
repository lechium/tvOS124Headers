/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/NWMessage.h>

@interface NWOutboundMessage : NWMessage

@property (assign,nonatomic) double relativePriority; 
@property (assign,nonatomic) unsigned long long expirationMilliseconds; 
-(id)initWithContent:(id)arg1 ;
-(unsigned long long)expirationMilliseconds;
-(void)setExpirationMilliseconds:(unsigned long long)arg1 ;
-(double)relativePriority;
-(void)setRelativePriority:(double)arg1 ;
-(void)addAntecedent:(id)arg1 ;
@end

