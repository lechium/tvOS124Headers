/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _CDPrivacyPolicy : NSObject {

	BOOL canPersistOnStorage;
	double temporalPrecision;

}

@property (nonatomic,readonly) BOOL canPersistOnStorage; 
@property (nonatomic,readonly) double temporalPrecision; 
+(id)sharedPrivacyPolicy;
-(double)temporalPrecision;
-(BOOL)canPersistOnStorage;
-(id)initWithTemporalPrecision:(double)arg1 canPersistOnStorage:(BOOL)arg2 ;
-(id)init;
-(id)description;
@end

