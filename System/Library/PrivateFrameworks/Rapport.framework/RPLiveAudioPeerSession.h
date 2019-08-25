/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, RPMessageable;
@class NSString, NSObject;

@interface RPLiveAudioPeerSession : NSObject {

	NSString* _destinationID;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	id<RPMessageable> _messenger;

}

@property (nonatomic,copy) NSString * destinationID;                                  //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) id<RPMessageable> messenger;                             //@synthesize messenger=_messenger - In the implementation block
-(id<RPMessageable>)messenger;
-(void)setMessenger:(id<RPMessageable>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)destinationID;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDestinationID:(NSString *)arg1 ;
-(void)invalidate;
@end
