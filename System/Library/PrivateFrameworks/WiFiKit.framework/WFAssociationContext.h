/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WFAssociationContext : NSObject {

	unsigned long long _state;
	unsigned long long _originator;

}

@property (assign,nonatomic) unsigned long long state;                        //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long originator;                   //@synthesize originator=_originator - In the implementation block
@property (nonatomic,readonly) NSString * stateDescription; 
@property (nonatomic,readonly) NSString * originatorDescription; 
-(NSString *)stateDescription;
-(unsigned long long)originator;
-(void)setOriginator:(unsigned long long)arg1 ;
-(NSString *)originatorDescription;
-(id)init;
-(id)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
@end

