/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDPContext;

@interface CDPDRecoveryFlowContext : NSObject {

	BOOL _hasPeersForRemoteApproval;
	CDPContext* _context;

}

@property (nonatomic,retain) CDPContext * context;                        //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL hasPeersForRemoteApproval;              //@synthesize hasPeersForRemoteApproval=_hasPeersForRemoteApproval - In the implementation block
-(BOOL)hasPeersForRemoteApproval;
-(void)setHasPeersForRemoteApproval:(BOOL)arg1 ;
-(void)setContext:(CDPContext *)arg1 ;
-(CDPContext *)context;
@end

