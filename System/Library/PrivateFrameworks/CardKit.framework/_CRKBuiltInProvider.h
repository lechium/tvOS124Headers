/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKCardViewControllerDelegate.h>
#import <libobjc.A.dylib/CRKIdentifiedProviding.h>

@class NSString;

@interface _CRKBuiltInProvider : NSObject <CRKCardViewControllerDelegate, CRKIdentifiedProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * providerIdentifier; 
-(unsigned long long)displayPriorityForCard:(id)arg1 ;
-(id)cardViewControllerForCard:(id)arg1 ;
-(NSString *)providerIdentifier;
@end

