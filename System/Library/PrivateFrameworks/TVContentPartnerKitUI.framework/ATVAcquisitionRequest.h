/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VUIStoreAcquisitionProperties;

@interface ATVAcquisitionRequest : NSObject {

	BOOL _cancelled;
	VUIStoreAcquisitionProperties* _properties;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) VUIStoreAcquisitionProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy) id completionBlock;                                      //@synthesize completionBlock=_completionBlock - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                                      //@synthesize cancelled=_cancelled - In the implementation block
-(BOOL)isCancelled;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setProperties:(VUIStoreAcquisitionProperties *)arg1 ;
-(VUIStoreAcquisitionProperties *)properties;
-(id)completionBlock;
@end
