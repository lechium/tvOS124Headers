/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface _NAUINamedViewConstraints : NSObject {

	NSString* _name;
	NSArray* _constraints;
	id _stalenessToken;

}

@property (nonatomic,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * constraints;               //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,copy,readonly) id stalenessToken;              //@synthesize stalenessToken=_stalenessToken - In the implementation block
-(id)initWithName:(id)arg1 constraints:(id)arg2 stalenessToken:(id)arg3 ;
-(id)stalenessToken;
-(NSString *)name;
-(NSArray *)constraints;
@end

