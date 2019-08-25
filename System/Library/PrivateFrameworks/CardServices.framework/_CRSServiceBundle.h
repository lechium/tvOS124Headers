/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSBundle.h>
#import <libobjc.A.dylib/CRSIdentifiedServing.h>

@protocol CRSServing;
@class NSString;

@interface _CRSServiceBundle : NSBundle <CRSIdentifiedServing> {

	id<CRSServing> _service;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * serviceIdentifier; 
+(BOOL)supportsSecureCoding;
-(id)underlyingService;
-(NSString *)serviceIdentifier;
-(void)_initializeServiceWithClass:(Class)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

