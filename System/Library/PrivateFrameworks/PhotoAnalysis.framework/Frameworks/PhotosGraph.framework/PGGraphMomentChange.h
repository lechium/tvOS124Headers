/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphChange.h>

@class NSString, PGGraphMomentNode;

@interface PGGraphMomentChange : PGGraphChange {

	NSString* _momentLocalIdentifier;
	PGGraphMomentNode* _momentNode;
	unsigned long long _updateTypes;

}

@property (nonatomic,readonly) NSString * momentLocalIdentifier;              //@synthesize momentLocalIdentifier=_momentLocalIdentifier - In the implementation block
@property (nonatomic,retain) PGGraphMomentNode * momentNode;                  //@synthesize momentNode=_momentNode - In the implementation block
@property (nonatomic,readonly) unsigned long long updateTypes;                //@synthesize updateTypes=_updateTypes - In the implementation block
-(PGGraphMomentNode *)momentNode;
-(unsigned long long)updateTypes;
-(NSString *)momentLocalIdentifier;
-(void)setMomentNode:(PGGraphMomentNode *)arg1 ;
-(void)mergeChange:(id)arg1 ;
-(id)initWithMomentLocalIdentifier:(id)arg1 updateTypes:(unsigned long long)arg2 ;
-(id)description;
-(unsigned long long)type;
@end

