/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDHelperExternalProtocol;
@interface HMDHelper : NSObject {

	id<HMDHelperExternalProtocol> _externalProtocol;

}

@property (nonatomic,retain) id<HMDHelperExternalProtocol> externalProtocol;              //@synthesize externalProtocol=_externalProtocol - In the implementation block
+(void)setSharedHelper:(id)arg1 ;
+(id)sharedHelper;
-(id)initWithExternalProtocol:(id)arg1 ;
-(id)hashedRouteIDForIdentifier:(id)arg1 ;
-(id<HMDHelperExternalProtocol>)externalProtocol;
-(void)setExternalProtocol:(id<HMDHelperExternalProtocol>)arg1 ;
@end

