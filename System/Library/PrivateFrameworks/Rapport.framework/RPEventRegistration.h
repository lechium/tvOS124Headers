/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface RPEventRegistration : NSObject {

	NSString* _eventID;
	NSDictionary* _options;
	/*^block*/id _handler;

}

@property (nonatomic,copy) NSString * eventID;                  //@synthesize eventID=_eventID - In the implementation block
@property (nonatomic,copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id handler;                          //@synthesize handler=_handler - In the implementation block
-(void)setEventID:(NSString *)arg1 ;
-(NSString *)eventID;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
@end

