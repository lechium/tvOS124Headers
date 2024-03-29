/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVSemanticContextServices.framework/TVSemanticContextServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSemanticContextServices/TVSCSemanticObject.h>

@class NSDictionary, NSArray;

@interface TVSCSemanticContext : TVSCSemanticObject {

	NSDictionary* _linkedDataContext;
	NSArray* _actions;

}

@property (nonatomic,retain) NSDictionary * linkedDataContext;              //@synthesize linkedDataContext=_linkedDataContext - In the implementation block
@property (nonatomic,retain) NSArray * actions;                             //@synthesize actions=_actions - In the implementation block
-(id)linkedDataDictionary;
-(NSDictionary *)linkedDataContext;
-(void)setLinkedDataContext:(NSDictionary *)arg1 ;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
@end

