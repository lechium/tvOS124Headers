/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGTitle;

@interface PGTitleTuple : NSObject {

	PGTitle* _title;
	PGTitle* _subtitle;

}

@property (nonatomic,readonly) PGTitle * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) PGTitle * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
-(id)initWithWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(PGTitle *)title;
-(PGTitle *)subtitle;
@end

