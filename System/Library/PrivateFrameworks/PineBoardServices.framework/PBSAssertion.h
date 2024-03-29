/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PBSAssertion : NSObject {

	NSString* _identifier;
	NSString* _uniqueIdentifier;

}

@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
+(void)performAcquireAssertionWithCompletion:(/*^block*/id)arg1 ;
+(void)performRelinquishAssertionWithCompletion:(/*^block*/id)arg1 ;
+(id)_assertionManager;
-(void)relinquish;
-(void)dealloc;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)acquire;
-(NSString *)uniqueIdentifier;
@end

