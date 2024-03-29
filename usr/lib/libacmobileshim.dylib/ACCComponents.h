/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACFComponents.h>

@protocol ACCTicketManagerProtocol, ACCSSOTGTStoragePolicy;
@interface ACCComponents : ACFComponents {

	id<ACCTicketManagerProtocol> _ticketManager;
	id<ACCSSOTGTStoragePolicy> _tgtStoragePolicy;

}

@property (nonatomic,retain) id<ACCSSOTGTStoragePolicy> tgtStoragePolicy;              //@synthesize tgtStoragePolicy=_tgtStoragePolicy - In the implementation block
@property (nonatomic,retain) id<ACCTicketManagerProtocol> ticketManager;               //@synthesize ticketManager=_ticketManager - In the implementation block
+(id)defaultComponents;
+(id)components;
-(id)createHandlerWithClass:(Class)arg1 context:(id)arg2 ;
-(id<ACCTicketManagerProtocol>)ticketManager;
-(id<ACCSSOTGTStoragePolicy>)tgtStoragePolicy;
-(void)setTgtStoragePolicy:(id<ACCSSOTGTStoragePolicy>)arg1 ;
-(void)setTicketManager:(id<ACCTicketManagerProtocol>)arg1 ;
-(void)dealloc;
@end

