/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSServiceFacility;

@interface _FBServiceFacilityServerPendingConnection : NSObject {

	FBSServiceFacility* _facility;
	/*^block*/id _completion;

}

@property (nonatomic,retain) FBSServiceFacility * facility;              //@synthesize facility=_facility - In the implementation block
@property (nonatomic,copy) id completion;                                //@synthesize completion=_completion - In the implementation block
+(id)pendingConnectionToFacility:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FBSServiceFacility *)facility;
-(id)initWithFacility:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setFacility:(FBSServiceFacility *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
@end

